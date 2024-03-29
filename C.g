/** 
Aggelos BIboudis

Source-to-Source instrumentation for branch coverage analysis

ANTLR v3 Grammar for ANSI C based on
http://www.antlr.org/papers/LL-star/grammars/RatsC.g
http://www.antlr.org/grammar/1153358328744/C.g
*/

grammar C;
options {
    backtrack=true;
    memoize=true;
    k=2;
    output=template; 
    rewrite=true;
}

scope Symbols {
    Set types; // only track types in order to get parser working
    boolean hasMainEntryPoint;
}

scope InstrumentationInfo {
    boolean isBranch;
}

scope InstrumentationMain{
    boolean isFunction;
    boolean isMain;
}

scope StatementType {
   boolean isCompound;
}

scope InstrumentationStats{ 
   int labelNumber;
}

scope Attribute{ 
   String attr_name;
}

@header {
import java.util.Set;
import java.util.HashSet;
}

@members {

	boolean isTypeName(String name) {
		for (int i = Symbols_stack.size()-1; i>=0; i--) {
			Symbols_scope scope = (Symbols_scope)Symbols_stack.get(i);
			if ( scope.types.contains(name) ) {
				return true;
			}
		}
		return false;
	}
	
	void setupScopeVarsIfBranchWithPassingAttribute(){
	  if($Attribute.size()>0 && $Attribute::attr_name!=null && $Attribute::attr_name.equals("NotInstrumented"))
     	     $InstrumentationInfo::isBranch = false;
   	  else if ($InstrumentationInfo.size()>0)
      	     $InstrumentationInfo::isBranch = true;
	}
}

translation_unit
scope Symbols; // entire file is a scope
scope InstrumentationStats;
@init {
  $Symbols::types = new HashSet();
} 
@after {
  System.out.println("Probes installed:\n\tBranches: " + $InstrumentationStats::labelNumber);
}
	: external_declaration+
	;

/** Either a function definition or any other kind of C decl/def.
 *  The LL(*) analysis algorithm fails to deal with this due to
 *  recursion in the declarator rules.  I'm putting in a
 *  manual predicate here so that we don't backtrack over
 *  the entire function.  Further, you get a better error
 *  as errors within the function itself don't make it fail
 *  to predict that it's a function.  Weird errors previously.
 *  Remember: the goal is to avoid backtrack like the plague
 *  because it makes debugging, actions, and errors harder.
 *
 *  Note that k=1 results in a much smaller predictor for the 
 *  fixed lookahead; k=2 made a few extra thousand lines. ;)
 *  I'll have to optimize that in the future.
 */
external_declaration
options {k=1;}
scope Attribute;
	: attribute?  ( declaration_specifiers? declarator declaration* '{' )=> function_definition
	| '__extension__' declaration
	| declaration
	| assembly_definition
	;

function_definition
scope Symbols; // put parameters and locals into same scope for now
scope InstrumentationMain;
@init { 
  $Symbols::types = new HashSet();
  $InstrumentationMain::isFunction = true;
}
	: declaration_specifiers? declarator 	( declaration+ compound_statement	// K&R style
				| compound_statement		// ANSI style
				)
	;

attribute 
	: '[' IDENTIFIER  ']' { $Attribute::attr_name = $IDENTIFIER.text; } -> template() ""

	;

declaration
scope {
  boolean isTypedef;
}
@init {
  $declaration::isTypedef = false;
}
	: 'typedef' declaration_specifiers? {$declaration::isTypedef=true;} init_declarator_list ';' // special case, looking for typedef	
	| declaration_specifiers init_declarator_list? simple_assembly_expression? ';'
	;
	
assembly_definition 
	: simple_assembly_expression ';'
  	;

simple_assembly_expression
 	: asm_keyword '(' STRING_LITERAL ')'
  	;

assembly_statement 
 	: asm_keyword type_qualifier? '(' assembly_argument ')' ';'
	;

assembly_argument :
    STRING_LITERAL (STRING_LITERAL)* ':' assembly_operands? ':' assembly_operands? ':' assembly_clobbers
  | STRING_LITERAL (STRING_LITERAL)* ':' assembly_operands? ':' assembly_operands?
  | STRING_LITERAL (STRING_LITERAL)* ':' assembly_operands?
  | STRING_LITERAL (STRING_LITERAL)*
  ;

assembly_operands :
  assembly_operand (  
    ',' assembly_operand
  )*
  ;

assembly_operand :
  (  
    '[' IDENTIFIER ']'
  )? STRING_LITERAL '(' expression ')'
  ;

assembly_clobbers :
  STRING_LITERAL (  
    ',' STRING_LITERAL
  )*
  ;

STRING_LITERAL
	: STRING (WS STRING)* WS?
	;

fragment
STRING
    :  '"' ( EscapeSequence | ~('\\'|'"') )* '"'
    ;

asm_keyword
	:'asm'
 	| '__asm'
  	| '__asm__'
  	;
	
declaration_specifiers
	: ( storage_class_specifier | type_specifier | type_qualifier )+
	;

init_declarator_list
	: init_declarator (',' init_declarator)*
	;

init_declarator
	: declarator ('=' initializer)?
	;

storage_class_specifier
	: 'extern'
	| 'static'
	| 'auto'
	| 'register'
	;
	
type_qualifier 
	: volatile_qualifier
	| constant_qualifier
	| restrict_qualifier
  	;

volatile_qualifier
	: 'volatile'
	| '__volatile'
  	| '__volatile__'
  	;

constant_qualifier 
	:'const'
  	| '__const'
  	| '__const__'
	;

restrict_qualifier 
  	:'restrict'
  	| '__restrict'
  	| '__restrict__'
  	;
  	
type_specifier
	: 'void'
	| 'char'
	| 'short'
	| 'int'
	| 'long'
	| 'float'
	| 'double'
	| 'signed'
	| 'unsigned'
	| '__builtin_va_list'
	| struct_or_union_specifier
	| enum_specifier
	| type_id
	;

type_id
    :   {isTypeName(input.LT(1).getText())}? IDENTIFIER
//    	{System.out.println($IDENTIFIER.text+" is a type");}
    ;

struct_or_union_specifier
options {k=3;}
scope Symbols; // structs are scopes
@init {
  $Symbols::types = new HashSet();
}
	: struct_or_union IDENTIFIER? '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: 'struct'
	| 'union'
	;

struct_declaration_list
	: struct_declaration+
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: ( type_qualifier | type_specifier )+
	;

struct_declarator_list
	: struct_declarator (',' struct_declarator)*
	;

struct_declarator
	: declarator (':' constant_expression)?
	| ':' constant_expression
	;

enum_specifier
options {k=3;}
	: 'enum' '{' enumerator_list '}'
	| 'enum' IDENTIFIER '{' enumerator_list '}'
	| 'enum' IDENTIFIER
	;

enumerator_list
	: enumerator (',' enumerator)*
	;

enumerator
	: IDENTIFIER ('=' constant_expression)?
	;

declarator
	: pointer? direct_declarator
	| pointer
	;

direct_declarator
	:   (	IDENTIFIER
			{
			if ($declaration.size()>0&&$declaration::isTypedef) {
				$Symbols::types.add($IDENTIFIER.text);
				//System.out.println("define type "+$IDENTIFIER.text);
			}
			if ( $InstrumentationMain.size()>0 &&  $InstrumentationMain::isFunction && $IDENTIFIER.text.toLowerCase().equals("main") ) {
				$InstrumentationMain::isMain = true;
				$Symbols::hasMainEntryPoint = true;
			}
			}
		|	'(' declarator ')'
		)
        declarator_suffix*
	;

declarator_suffix
	:   '[' constant_expression ']'
    |   '[' ']'
    |   '(' parameter_type_list ')'
    |   '(' identifier_list ')'
    |   '(' ')'
	;

pointer
	: '*' type_qualifier+ pointer?
	| '*' pointer
	| '*'
	;

parameter_type_list
	: parameter_list (',' '...')?
	;

parameter_list
	: parameter_declaration (',' parameter_declaration)*
	;

parameter_declaration
	: declaration_specifiers (declarator|abstract_declarator)*
	;

identifier_list
	: IDENTIFIER (',' IDENTIFIER)*
	;

type_name
	: specifier_qualifier_list abstract_declarator?
	;

abstract_declarator
	: pointer direct_abstract_declarator?
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: ( '(' abstract_declarator ')' | abstract_declarator_suffix ) abstract_declarator_suffix*
	;

abstract_declarator_suffix
	: '[' ']'
	| '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	;
	
initializer
	: assignment_expression
	| '{' initializer_list ','? '}'
	;

initializer_list
	: initializer (',' initializer)*
	;

// E x p r e s s i o n s

argument_expression_list
	: assignment_expression (',' assignment_expression)*
	;

additive_expression
	: (multiplicative_expression) ('+' multiplicative_expression | '-' multiplicative_expression)*
	;

multiplicative_expression
	: (cast_expression) ('*' cast_expression | '/' cast_expression | '%' cast_expression)*
	;

cast_expression
	: '(' type_name ')' cast_expression
	| unary_expression
	;

unary_expression
	: postfix_expression
	| '++' unary_expression
	| '--' unary_expression
	| unary_operator cast_expression
	| 'sizeof' unary_expression
	| 'sizeof' '(' type_name ')'
	;

postfix_expression
	:   primary_expression
        (   '[' expression ']'
        |   '(' ')'
        |   '(' argument_expression_list ')'
        |   '.' IDENTIFIER
        |   '->' IDENTIFIER
        |   '++'
        |   '--'
        )*
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

primary_expression
	: IDENTIFIER
	| constant
	| '(' expression ')'
	;

constant
    :   HEX_LITERAL
    |   OCTAL_LITERAL
    |   DECIMAL_LITERAL
    |   CHARACTER_LITERAL
    |   STRING_LITERAL (STRING_LITERAL)*
    |   FLOATING_POINT_LITERAL
    ;

expression
	: assignment_expression (',' assignment_expression)*
	;

constant_expression
	: conditional_expression
	;

assignment_expression
	: lvalue assignment_operator assignment_expression
	| conditional_expression
	;
	
lvalue
	: unary_expression
	;

assignment_operator
	: '='
	| '*='
	| '/='
	| '%='
	| '+='
	| '-='
	| '<<='
	| '>>='
	| '&='
	| '^='
	| '|='
	;

conditional_expression
	: logical_or_expression ('?' expression ':' conditional_expression)?
	;

logical_or_expression
	: logical_and_expression ('||' logical_and_expression)*
	;

logical_and_expression
	: inclusive_or_expression ('&&' inclusive_or_expression)*
	;

inclusive_or_expression
	: exclusive_or_expression ('|' exclusive_or_expression)*
	;

exclusive_or_expression
	: and_expression ('^' and_expression)*
	;

and_expression
	: equality_expression ('&' equality_expression)*
	;
equality_expression
	: relational_expression (('=='|'!=') relational_expression)*
	;

relational_expression
	: shift_expression (('<'|'>'|'<='|'>=') shift_expression)*
	;

shift_expression
	: additive_expression (('<<'|'>>') additive_expression)*
	;

// S t a t e m e n t s
statement
	: labeled_statement
	| compound_statement 
	| {$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch}? expression_statement  {$InstrumentationStats::labelNumber++;}
		-> instrument_statement(label_number={$InstrumentationStats::labelNumber}, statement={$expression_statement.text})
	| expression_statement
	| {$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch}? selection_statement  {$InstrumentationStats::labelNumber++;}
		-> instrument_statement(label_number={$InstrumentationStats::labelNumber}, statement={$selection_statement.text})
	| selection_statement
	| {$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch}? iteration_statement  {$InstrumentationStats::labelNumber++;}
		-> instrument_statement(label_number={$InstrumentationStats::labelNumber}, statement={$iteration_statement.text})
	| iteration_statement
	| {$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch}? jump_statement  {$InstrumentationStats::labelNumber++;}
		-> instrument_statement(label_number={$InstrumentationStats::labelNumber}, statement={$jump_statement.text})

	| jump_statement
	| assembly_statement
	;

labeled_statement
@init{
  setupScopeVarsIfBranchWithPassingAttribute();
}
	: IDENTIFIER ':' statement
	| {$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch}? 'case'  constant_expression ':'  {$InstrumentationInfo::isBranch = false;} statement {$InstrumentationStats::labelNumber++;} 
		-> instrument_labeled_statement(label_number={$InstrumentationStats::labelNumber}, constant_expression={$constant_expression.text}, statement={$statement.text})
	| 'case'  constant_expression ':' statement 
	| {$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch}? 'default' ':' {$InstrumentationInfo::isBranch = false;} statement {$InstrumentationStats::labelNumber++;} 
		-> instrument_default_labeled_statement(label_number={$InstrumentationStats::labelNumber}, statement={$statement.text})
	| 'default' ':' statement
	;

compound_statement
scope Symbols; // blocks have a scope of symbols
@init {
  $Symbols::types = new HashSet();
}
	:  '{' {$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch}? declarations {$InstrumentationInfo::isBranch = false;} statement_list? {$InstrumentationStats::labelNumber++;}  '}'
	   	-> instrument_compound_statement(label_number={$InstrumentationStats::labelNumber}, declarations={$declarations.text}, statement_list = {$statement_list.text})
	|  '{' {$InstrumentationMain.size()>0 && $InstrumentationMain::isMain}? {$InstrumentationMain::isMain = false;} declarations statement_list? '}'
	   	-> instrument_main(declarations={$declarations.text}, statement_list = {$statement_list.text})
	|  '{'  declaration* statement_list? '}'  //The case where a block is defined but not as part of another statement.
	;
	
declarations
	: declaration*
	;
	
statement_list
	: statement+
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement 
scope InstrumentationInfo;
	: 'if' '(' expression ')' {setupScopeVarsIfBranchWithPassingAttribute();} statement (options {k=1; backtrack=false;}:'else' {setupScopeVarsIfBranchWithPassingAttribute();} statement)?
	| 'switch' '(' expression ')' statement
	;

iteration_statement
scope InstrumentationInfo;
@init{
  setupScopeVarsIfBranchWithPassingAttribute();
}
	: 'while' '(' expression ')' statement
	| 'do' statement 'while' '(' expression ')' ';'
	| 'for' '(' expression_statement expression_statement expression? ')' statement
	;

jump_statement
	: 'goto' IDENTIFIER ';'
	| 'continue' ';'
	| 'break' ';'
	| 'return' ';'
	| 'return' expression ';'
	;

IDENTIFIER
	: LETTER (LETTER|'0'..'9')*
	;
	
fragment
LETTER
	: '$'
	| 'A'..'Z'
	| 'a'..'z'
	| '_'
	;
	
CHARACTER_LITERAL
    :   '\'' ( EscapeSequence | ~('\''|'\\') ) '\''
    ;

HEX_LITERAL : '0' ('x'|'X') HexDigit+ IntegerTypeSuffix? ;

DECIMAL_LITERAL : ('0' | '1'..'9' '0'..'9'*) IntegerTypeSuffix? ;

OCTAL_LITERAL : '0' ('0'..'7')+ IntegerTypeSuffix? ;

fragment
HexDigit : ('0'..'9'|'a'..'f'|'A'..'F') ;

fragment
IntegerTypeSuffix
	: ('u'|'U')? ('l'|'L')
	| ('u'|'U')  ('l'|'L')?
	;

FLOATING_POINT_LITERAL
    :   ('0'..'9')+ '.' ('0'..'9')* Exponent? FloatTypeSuffix?
    |   '.' ('0'..'9')+ Exponent? FloatTypeSuffix?
    |   ('0'..'9')+ Exponent FloatTypeSuffix?
    |   ('0'..'9')+ Exponent? FloatTypeSuffix
	;

fragment
Exponent : ('e'|'E') ('+'|'-')? ('0'..'9')+ ;

fragment
FloatTypeSuffix : ('f'|'F'|'d'|'D') ;

fragment
EscapeSequence
    :   '\\' ('b'|'t'|'n'|'f'|'r'|'\"'|'\''|'\\')
    |   OctalEscape
    ;

fragment
OctalEscape
    :   '\\' ('0'..'3') ('0'..'7') ('0'..'7')
    |   '\\' ('0'..'7') ('0'..'7')
    |   '\\' ('0'..'7')
    ;

fragment
UnicodeEscape
    :   '\\' 'u' HexDigit HexDigit HexDigit HexDigit
    ;

WS  :  (' '|'\r'|'\t'|'\u000C'|'\n') {$channel=HIDDEN;}
    ;

COMMENT
    :   '/*' ( options {greedy=false;} : . )* '*/' {$channel=HIDDEN;}
    ;

LINE_COMMENT
    : '//' ~('\n'|'\r')* '\r'? '\n' {$channel=HIDDEN;}
    ;

// ignore #line info for now
LINE_COMMAND 
    : '#' ~('\n'|'\r')* '\r'? '\n' {$channel=HIDDEN;}
    ;
