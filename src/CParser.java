// $ANTLR 3.4 C.g 2012-10-03 01:33:17

import java.util.Set;
import java.util.HashSet;


import org.antlr.runtime.*;
import java.util.Stack;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;

import org.antlr.stringtemplate.*;
import org.antlr.stringtemplate.language.*;
import java.util.HashMap;
/** ANSI C ANTLR v3 grammar

Translated from Jutta Degener's 1995 ANSI C yacc grammar by Terence Parr
July 2006.  The lexical rules were taken from the Java grammar.

Jutta says: "In 1985, Jeff Lee published his Yacc grammar (which
is accompanied by a matching Lex specification) for the April 30, 1985 draft
version of the ANSI C standard.  Tom Stockfisch reposted it to net.sources in
1987; that original, as mentioned in the answer to question 17.25 of the
comp.lang.c FAQ, can be ftp'ed from ftp.uu.net,
   file usenet/net.sources/ansi.c.grammar.Z.
I intend to keep this version as close to the current C Standard grammar as
possible; please let me know if you discover discrepancies. Jutta Degener, 1995"

Generally speaking, you need symbol table info to parse C; typedefs
define types and then IDENTIFIERS are either types or plain IDs.  I'm doing
the min necessary here tracking only type names.  This is a good example
of the global scope (called Symbols).  Every rule that declares its usage
of Symbols pushes a new copy on the stack effectively creating a new
symbol scope.  Also note rule declaration declares a rule scope that
lets any invoked rule see isTypedef boolean.  It's much easier than
passing that info down as parameters.  Very clean.  Rule
direct_declarator can then easily determine whether the IDENTIFIER
should be declared as a type name.

I have only tested this on a single file, though it is 3500 lines.

This grammar requires ANTLR v3.0.1 or higher.

Terence Parr
July 2006
*/
@SuppressWarnings({"all", "warnings", "unchecked"})
public class CParser extends Parser {
    public static final String[] tokenNames = new String[] {
        "<invalid>", "<EOR>", "<DOWN>", "<UP>", "CHARACTER_LITERAL", "COMMENT", "DECIMAL_LITERAL", "EscapeSequence", "Exponent", "FLOATING_POINT_LITERAL", "FloatTypeSuffix", "HEX_LITERAL", "HexDigit", "IDENTIFIER", "IntegerTypeSuffix", "LETTER", "LINE_COMMAND", "LINE_COMMENT", "OCTAL_LITERAL", "OctalEscape", "STRING_LITERAL", "UnicodeEscape", "WS", "'!'", "'!='", "'%'", "'%='", "'&&'", "'&'", "'&='", "'('", "')'", "'*'", "'*='", "'+'", "'++'", "'+='", "','", "'-'", "'--'", "'-='", "'->'", "'.'", "'...'", "'/'", "'/='", "':'", "';'", "'<'", "'<<'", "'<<='", "'<='", "'='", "'=='", "'>'", "'>='", "'>>'", "'>>='", "'?'", "'['", "']'", "'^'", "'^='", "'__asm__'", "'__builtin_va_list'", "'__const'", "'__extension__'", "'auto'", "'break'", "'case'", "'char'", "'const'", "'continue'", "'default'", "'do'", "'double'", "'else'", "'enum'", "'extern'", "'float'", "'for'", "'goto'", "'if'", "'int'", "'long'", "'register'", "'return'", "'short'", "'signed'", "'sizeof'", "'static'", "'struct'", "'switch'", "'typedef'", "'union'", "'unsigned'", "'void'", "'volatile'", "'while'", "'{'", "'|'", "'|='", "'||'", "'}'", "'~'"
    };

    public static final int EOF=-1;
    public static final int T__23=23;
    public static final int T__24=24;
    public static final int T__25=25;
    public static final int T__26=26;
    public static final int T__27=27;
    public static final int T__28=28;
    public static final int T__29=29;
    public static final int T__30=30;
    public static final int T__31=31;
    public static final int T__32=32;
    public static final int T__33=33;
    public static final int T__34=34;
    public static final int T__35=35;
    public static final int T__36=36;
    public static final int T__37=37;
    public static final int T__38=38;
    public static final int T__39=39;
    public static final int T__40=40;
    public static final int T__41=41;
    public static final int T__42=42;
    public static final int T__43=43;
    public static final int T__44=44;
    public static final int T__45=45;
    public static final int T__46=46;
    public static final int T__47=47;
    public static final int T__48=48;
    public static final int T__49=49;
    public static final int T__50=50;
    public static final int T__51=51;
    public static final int T__52=52;
    public static final int T__53=53;
    public static final int T__54=54;
    public static final int T__55=55;
    public static final int T__56=56;
    public static final int T__57=57;
    public static final int T__58=58;
    public static final int T__59=59;
    public static final int T__60=60;
    public static final int T__61=61;
    public static final int T__62=62;
    public static final int T__63=63;
    public static final int T__64=64;
    public static final int T__65=65;
    public static final int T__66=66;
    public static final int T__67=67;
    public static final int T__68=68;
    public static final int T__69=69;
    public static final int T__70=70;
    public static final int T__71=71;
    public static final int T__72=72;
    public static final int T__73=73;
    public static final int T__74=74;
    public static final int T__75=75;
    public static final int T__76=76;
    public static final int T__77=77;
    public static final int T__78=78;
    public static final int T__79=79;
    public static final int T__80=80;
    public static final int T__81=81;
    public static final int T__82=82;
    public static final int T__83=83;
    public static final int T__84=84;
    public static final int T__85=85;
    public static final int T__86=86;
    public static final int T__87=87;
    public static final int T__88=88;
    public static final int T__89=89;
    public static final int T__90=90;
    public static final int T__91=91;
    public static final int T__92=92;
    public static final int T__93=93;
    public static final int T__94=94;
    public static final int T__95=95;
    public static final int T__96=96;
    public static final int T__97=97;
    public static final int T__98=98;
    public static final int T__99=99;
    public static final int T__100=100;
    public static final int T__101=101;
    public static final int T__102=102;
    public static final int T__103=103;
    public static final int T__104=104;
    public static final int CHARACTER_LITERAL=4;
    public static final int COMMENT=5;
    public static final int DECIMAL_LITERAL=6;
    public static final int EscapeSequence=7;
    public static final int Exponent=8;
    public static final int FLOATING_POINT_LITERAL=9;
    public static final int FloatTypeSuffix=10;
    public static final int HEX_LITERAL=11;
    public static final int HexDigit=12;
    public static final int IDENTIFIER=13;
    public static final int IntegerTypeSuffix=14;
    public static final int LETTER=15;
    public static final int LINE_COMMAND=16;
    public static final int LINE_COMMENT=17;
    public static final int OCTAL_LITERAL=18;
    public static final int OctalEscape=19;
    public static final int STRING_LITERAL=20;
    public static final int UnicodeEscape=21;
    public static final int WS=22;

    // delegates
    public Parser[] getDelegates() {
        return new Parser[] {};
    }

    // delegators

    protected static class InstrumentationStats_scope {
        int labelNumber;
    }
    protected Stack InstrumentationStats_stack = new Stack();


    protected static class Symbols_scope {
        Set types;
    }
    protected Stack Symbols_stack = new Stack();


    protected static class StatementType_scope {
        boolean isCompound;
    }
    protected Stack StatementType_stack = new Stack();


    protected static class Attribute_scope {
        String attr_name;
    }
    protected Stack Attribute_stack = new Stack();


    protected static class InstrumentationInfo_scope {
        boolean isBranch;
        boolean isMain;
    }
    protected Stack InstrumentationInfo_stack = new Stack();



    public CParser(TokenStream input) {
        this(input, new RecognizerSharedState());
    }
    public CParser(TokenStream input, RecognizerSharedState state) {
        super(input, state);
        this.state.ruleMemo = new HashMap[233+1];
         

    }

protected StringTemplateGroup templateLib =
  new StringTemplateGroup("CParserTemplates", AngleBracketTemplateLexer.class);

public void setTemplateLib(StringTemplateGroup templateLib) {
  this.templateLib = templateLib;
}
public StringTemplateGroup getTemplateLib() {
  return templateLib;
}
/** allows convenient multi-value initialization:
 *  "new STAttrMap().put(...).put(...)"
 */
public static class STAttrMap extends HashMap {
  public STAttrMap put(String attrName, Object value) {
    super.put(attrName, value);
    return this;
  }
  public STAttrMap put(String attrName, int value) {
    super.put(attrName, new Integer(value));
    return this;
  }
}
    public String[] getTokenNames() { return CParser.tokenNames; }
    public String getGrammarFileName() { return "C.g"; }



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
    	  if(Attribute_stack.size()>0 && ((Attribute_scope)Attribute_stack.peek()).attr_name!=null && ((Attribute_scope)Attribute_stack.peek()).attr_name.equals("NotInstrumented"))
         	     ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch = false;
       	  else
          	     ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch = true;
    	}


    public static class translation_unit_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "translation_unit"
    // C.g:88:1: translation_unit : ( external_declaration )+ ;
    public final CParser.translation_unit_return translation_unit() throws RecognitionException {
        Symbols_stack.push(new Symbols_scope());
        InstrumentationStats_stack.push(new InstrumentationStats_scope());

        CParser.translation_unit_return retval = new CParser.translation_unit_return();
        retval.start = input.LT(1);

        int translation_unit_StartIndex = input.index();


          ((Symbols_scope)Symbols_stack.peek()).types = new HashSet();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 1) ) { return retval; }

            // C.g:94:2: ( ( external_declaration )+ )
            // C.g:94:4: ( external_declaration )+
            {
            // C.g:94:4: ( external_declaration )+
            int cnt1=0;
            loop1:
            do {
                int alt1=2;
                int LA1_0 = input.LA(1);

                if ( (LA1_0==IDENTIFIER||LA1_0==30||LA1_0==32||LA1_0==59||(LA1_0 >= 64 && LA1_0 <= 67)||(LA1_0 >= 70 && LA1_0 <= 71)||LA1_0==75||(LA1_0 >= 77 && LA1_0 <= 79)||(LA1_0 >= 83 && LA1_0 <= 85)||(LA1_0 >= 87 && LA1_0 <= 88)||(LA1_0 >= 90 && LA1_0 <= 91)||(LA1_0 >= 93 && LA1_0 <= 97)) ) {
                    alt1=1;
                }


                switch (alt1) {
            	case 1 :
            	    // C.g:94:4: external_declaration
            	    {
            	    pushFollow(FOLLOW_external_declaration_in_translation_unit125);
            	    external_declaration();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    if ( cnt1 >= 1 ) break loop1;
            	    if (state.backtracking>0) {state.failed=true; return retval;}
                        EarlyExitException eee =
                            new EarlyExitException(1, input);
                        throw eee;
                }
                cnt1++;
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 1, translation_unit_StartIndex); }

            Symbols_stack.pop();
            InstrumentationStats_stack.pop();

        }
        return retval;
    }
    // $ANTLR end "translation_unit"


    public static class external_declaration_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "external_declaration"
    // C.g:111:1: external_declaration options {k=1; } : ( ( attribute )? ( ( declaration_specifiers )? declarator ( declaration )* '{' )=> function_definition | '__extension__' declaration | declaration );
    public final CParser.external_declaration_return external_declaration() throws RecognitionException {
        Attribute_stack.push(new Attribute_scope());

        CParser.external_declaration_return retval = new CParser.external_declaration_return();
        retval.start = input.LT(1);

        int external_declaration_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 2) ) { return retval; }

            // C.g:114:2: ( ( attribute )? ( ( declaration_specifiers )? declarator ( declaration )* '{' )=> function_definition | '__extension__' declaration | declaration )
            int alt3=3;
            switch ( input.LA(1) ) {
            case 30:
            case 32:
            case 59:
                {
                alt3=1;
                }
                break;
            case 67:
            case 78:
            case 85:
            case 90:
                {
                int LA3_2 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 2, input);

                    throw nvae;

                }
                }
                break;
            case 96:
                {
                int LA3_3 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 3, input);

                    throw nvae;

                }
                }
                break;
            case 70:
                {
                int LA3_4 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 4, input);

                    throw nvae;

                }
                }
                break;
            case 87:
                {
                int LA3_5 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 5, input);

                    throw nvae;

                }
                }
                break;
            case 83:
                {
                int LA3_6 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 6, input);

                    throw nvae;

                }
                }
                break;
            case 84:
                {
                int LA3_7 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 7, input);

                    throw nvae;

                }
                }
                break;
            case 79:
                {
                int LA3_8 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 8, input);

                    throw nvae;

                }
                }
                break;
            case 75:
                {
                int LA3_9 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 9, input);

                    throw nvae;

                }
                }
                break;
            case 88:
                {
                int LA3_10 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 10, input);

                    throw nvae;

                }
                }
                break;
            case 95:
                {
                int LA3_11 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 11, input);

                    throw nvae;

                }
                }
                break;
            case 64:
                {
                int LA3_12 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 12, input);

                    throw nvae;

                }
                }
                break;
            case 91:
            case 94:
                {
                int LA3_13 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 13, input);

                    throw nvae;

                }
                }
                break;
            case 77:
                {
                int LA3_14 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 14, input);

                    throw nvae;

                }
                }
                break;
            case IDENTIFIER:
                {
                int LA3_15 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( ((isTypeName(input.LT(1).getText()))) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 15, input);

                    throw nvae;

                }
                }
                break;
            case 65:
            case 71:
            case 97:
                {
                int LA3_16 = input.LA(2);

                if ( (synpred6_C()) ) {
                    alt3=1;
                }
                else if ( (true) ) {
                    alt3=3;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 3, 16, input);

                    throw nvae;

                }
                }
                break;
            case 66:
                {
                alt3=2;
                }
                break;
            case 93:
                {
                alt3=3;
                }
                break;
            default:
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 3, 0, input);

                throw nvae;

            }

            switch (alt3) {
                case 1 :
                    // C.g:114:4: ( attribute )? ( ( declaration_specifiers )? declarator ( declaration )* '{' )=> function_definition
                    {
                    // C.g:114:4: ( attribute )?
                    int alt2=2;
                    int LA2_0 = input.LA(1);

                    if ( (LA2_0==59) ) {
                        alt2=1;
                    }
                    switch (alt2) {
                        case 1 :
                            // C.g:114:4: attribute
                            {
                            pushFollow(FOLLOW_attribute_in_external_declaration151);
                            attribute();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    pushFollow(FOLLOW_function_definition_in_external_declaration170);
                    function_definition();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:115:4: '__extension__' declaration
                    {
                    match(input,66,FOLLOW_66_in_external_declaration175); if (state.failed) return retval;

                    pushFollow(FOLLOW_declaration_in_external_declaration177);
                    declaration();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:116:4: declaration
                    {
                    pushFollow(FOLLOW_declaration_in_external_declaration182);
                    declaration();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 2, external_declaration_StartIndex); }

            Attribute_stack.pop();

        }
        return retval;
    }
    // $ANTLR end "external_declaration"


    public static class function_definition_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "function_definition"
    // C.g:119:1: function_definition : ( declaration_specifiers )? declarator ( ( declaration )+ compound_statement | compound_statement ) ;
    public final CParser.function_definition_return function_definition() throws RecognitionException {
        Symbols_stack.push(new Symbols_scope());

        CParser.function_definition_return retval = new CParser.function_definition_return();
        retval.start = input.LT(1);

        int function_definition_StartIndex = input.index();

         
          ((Symbols_scope)Symbols_stack.peek()).types = new HashSet();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 3) ) { return retval; }

            // C.g:124:2: ( ( declaration_specifiers )? declarator ( ( declaration )+ compound_statement | compound_statement ) )
            // C.g:124:4: ( declaration_specifiers )? declarator ( ( declaration )+ compound_statement | compound_statement )
            {
            // C.g:124:4: ( declaration_specifiers )?
            int alt4=2;
            int LA4_0 = input.LA(1);

            if ( ((LA4_0 >= 64 && LA4_0 <= 65)||LA4_0==67||(LA4_0 >= 70 && LA4_0 <= 71)||LA4_0==75||(LA4_0 >= 77 && LA4_0 <= 79)||(LA4_0 >= 83 && LA4_0 <= 85)||(LA4_0 >= 87 && LA4_0 <= 88)||(LA4_0 >= 90 && LA4_0 <= 91)||(LA4_0 >= 94 && LA4_0 <= 97)) ) {
                alt4=1;
            }
            else if ( (LA4_0==IDENTIFIER) ) {
                switch ( input.LA(2) ) {
                    case 32:
                        {
                        alt4=1;
                        }
                        break;
                    case IDENTIFIER:
                        {
                        int LA4_19 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 30:
                        {
                        int LA4_20 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 67:
                    case 78:
                    case 85:
                    case 90:
                        {
                        int LA4_21 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 96:
                        {
                        int LA4_22 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 70:
                        {
                        int LA4_23 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 87:
                        {
                        int LA4_24 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 83:
                        {
                        int LA4_25 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 84:
                        {
                        int LA4_26 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 79:
                        {
                        int LA4_27 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 75:
                        {
                        int LA4_28 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 88:
                        {
                        int LA4_29 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 95:
                        {
                        int LA4_30 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 64:
                        {
                        int LA4_31 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 91:
                    case 94:
                        {
                        int LA4_32 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 77:
                        {
                        int LA4_33 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                    case 65:
                    case 71:
                    case 97:
                        {
                        int LA4_34 = input.LA(3);

                        if ( ((((isTypeName(input.LT(1).getText()))&&(isTypeName(input.LT(1).getText())))&&synpred8_C())) ) {
                            alt4=1;
                        }
                        }
                        break;
                }

            }
            switch (alt4) {
                case 1 :
                    // C.g:124:4: declaration_specifiers
                    {
                    pushFollow(FOLLOW_declaration_specifiers_in_function_definition204);
                    declaration_specifiers();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }


            pushFollow(FOLLOW_declarator_in_function_definition207);
            declarator();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:124:40: ( ( declaration )+ compound_statement | compound_statement )
            int alt6=2;
            int LA6_0 = input.LA(1);

            if ( (LA6_0==IDENTIFIER||(LA6_0 >= 64 && LA6_0 <= 65)||LA6_0==67||(LA6_0 >= 70 && LA6_0 <= 71)||LA6_0==75||(LA6_0 >= 77 && LA6_0 <= 79)||(LA6_0 >= 83 && LA6_0 <= 85)||(LA6_0 >= 87 && LA6_0 <= 88)||(LA6_0 >= 90 && LA6_0 <= 91)||(LA6_0 >= 93 && LA6_0 <= 97)) ) {
                alt6=1;
            }
            else if ( (LA6_0==99) ) {
                alt6=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 6, 0, input);

                throw nvae;

            }
            switch (alt6) {
                case 1 :
                    // C.g:124:42: ( declaration )+ compound_statement
                    {
                    // C.g:124:42: ( declaration )+
                    int cnt5=0;
                    loop5:
                    do {
                        int alt5=2;
                        int LA5_0 = input.LA(1);

                        if ( (LA5_0==IDENTIFIER||(LA5_0 >= 64 && LA5_0 <= 65)||LA5_0==67||(LA5_0 >= 70 && LA5_0 <= 71)||LA5_0==75||(LA5_0 >= 77 && LA5_0 <= 79)||(LA5_0 >= 83 && LA5_0 <= 85)||(LA5_0 >= 87 && LA5_0 <= 88)||(LA5_0 >= 90 && LA5_0 <= 91)||(LA5_0 >= 93 && LA5_0 <= 97)) ) {
                            alt5=1;
                        }


                        switch (alt5) {
                    	case 1 :
                    	    // C.g:124:42: declaration
                    	    {
                    	    pushFollow(FOLLOW_declaration_in_function_definition212);
                    	    declaration();

                    	    state._fsp--;
                    	    if (state.failed) return retval;

                    	    }
                    	    break;

                    	default :
                    	    if ( cnt5 >= 1 ) break loop5;
                    	    if (state.backtracking>0) {state.failed=true; return retval;}
                                EarlyExitException eee =
                                    new EarlyExitException(5, input);
                                throw eee;
                        }
                        cnt5++;
                    } while (true);


                    pushFollow(FOLLOW_compound_statement_in_function_definition215);
                    compound_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:125:7: compound_statement
                    {
                    pushFollow(FOLLOW_compound_statement_in_function_definition224);
                    compound_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 3, function_definition_StartIndex); }

            Symbols_stack.pop();

        }
        return retval;
    }
    // $ANTLR end "function_definition"


    public static class attribute_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "attribute"
    // C.g:129:1: attribute : '[' IDENTIFIER ']' -> template( \"\";
    public final CParser.attribute_return attribute() throws RecognitionException {
        CParser.attribute_return retval = new CParser.attribute_return();
        retval.start = input.LT(1);

        int attribute_StartIndex = input.index();

        Token IDENTIFIER1=null;

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 4) ) { return retval; }

            // C.g:130:2: ( '[' IDENTIFIER ']' -> template( \"\")
            // C.g:130:4: '[' IDENTIFIER ']'
            {
            match(input,59,FOLLOW_59_in_attribute244); if (state.failed) return retval;

            IDENTIFIER1=(Token)match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_attribute246); if (state.failed) return retval;

            match(input,60,FOLLOW_60_in_attribute249); if (state.failed) return retval;

            if ( state.backtracking==0 ) { ((Attribute_scope)Attribute_stack.peek()).attr_name = (IDENTIFIER1!=null?IDENTIFIER1.getText():null); }

            // TEMPLATE REWRITE
            if ( state.backtracking==0 ) {
              // 130:70: -> template( \"\"
              {
                  retval.st = new StringTemplate(templateLib, "");
              }


              ((TokenRewriteStream)input).replace(
                ((Token)retval.start).getTokenIndex(),
                input.LT(-1).getTokenIndex(),
                retval.st);

            }

            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 4, attribute_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "attribute"


    protected static class declaration_scope {
        boolean isTypedef;
    }
    protected Stack declaration_stack = new Stack();


    public static class declaration_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "declaration"
    // C.g:134:1: declaration : ( 'typedef' ( declaration_specifiers )? init_declarator_list ';' | declaration_specifiers ( init_declarator_list )? ( asm_definition )? ';' );
    public final CParser.declaration_return declaration() throws RecognitionException {
        declaration_stack.push(new declaration_scope());
        CParser.declaration_return retval = new CParser.declaration_return();
        retval.start = input.LT(1);

        int declaration_StartIndex = input.index();


          ((declaration_scope)declaration_stack.peek()).isTypedef = false;

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 5) ) { return retval; }

            // C.g:141:2: ( 'typedef' ( declaration_specifiers )? init_declarator_list ';' | declaration_specifiers ( init_declarator_list )? ( asm_definition )? ';' )
            int alt10=2;
            int LA10_0 = input.LA(1);

            if ( (LA10_0==93) ) {
                alt10=1;
            }
            else if ( (LA10_0==IDENTIFIER||(LA10_0 >= 64 && LA10_0 <= 65)||LA10_0==67||(LA10_0 >= 70 && LA10_0 <= 71)||LA10_0==75||(LA10_0 >= 77 && LA10_0 <= 79)||(LA10_0 >= 83 && LA10_0 <= 85)||(LA10_0 >= 87 && LA10_0 <= 88)||(LA10_0 >= 90 && LA10_0 <= 91)||(LA10_0 >= 94 && LA10_0 <= 97)) ) {
                alt10=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 10, 0, input);

                throw nvae;

            }
            switch (alt10) {
                case 1 :
                    // C.g:141:4: 'typedef' ( declaration_specifiers )? init_declarator_list ';'
                    {
                    match(input,93,FOLLOW_93_in_declaration280); if (state.failed) return retval;

                    // C.g:141:14: ( declaration_specifiers )?
                    int alt7=2;
                    int LA7_0 = input.LA(1);

                    if ( ((LA7_0 >= 64 && LA7_0 <= 65)||LA7_0==67||(LA7_0 >= 70 && LA7_0 <= 71)||LA7_0==75||(LA7_0 >= 77 && LA7_0 <= 79)||(LA7_0 >= 83 && LA7_0 <= 85)||(LA7_0 >= 87 && LA7_0 <= 88)||(LA7_0 >= 90 && LA7_0 <= 91)||(LA7_0 >= 94 && LA7_0 <= 97)) ) {
                        alt7=1;
                    }
                    else if ( (LA7_0==IDENTIFIER) ) {
                        int LA7_14 = input.LA(2);

                        if ( (LA7_14==IDENTIFIER||LA7_14==32||(LA7_14 >= 64 && LA7_14 <= 65)||LA7_14==67||(LA7_14 >= 70 && LA7_14 <= 71)||LA7_14==75||(LA7_14 >= 77 && LA7_14 <= 79)||(LA7_14 >= 83 && LA7_14 <= 85)||(LA7_14 >= 87 && LA7_14 <= 88)||(LA7_14 >= 90 && LA7_14 <= 91)||(LA7_14 >= 94 && LA7_14 <= 97)) ) {
                            alt7=1;
                        }
                        else if ( (LA7_14==30) ) {
                            int LA7_20 = input.LA(3);

                            if ( (((synpred11_C()&&synpred11_C())&&(isTypeName(input.LT(1).getText())))) ) {
                                alt7=1;
                            }
                        }
                    }
                    switch (alt7) {
                        case 1 :
                            // C.g:141:14: declaration_specifiers
                            {
                            pushFollow(FOLLOW_declaration_specifiers_in_declaration282);
                            declaration_specifiers();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    if ( state.backtracking==0 ) {((declaration_scope)declaration_stack.peek()).isTypedef =true;}

                    pushFollow(FOLLOW_init_declarator_list_in_declaration287);
                    init_declarator_list();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,47,FOLLOW_47_in_declaration289); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:142:4: declaration_specifiers ( init_declarator_list )? ( asm_definition )? ';'
                    {
                    pushFollow(FOLLOW_declaration_specifiers_in_declaration295);
                    declaration_specifiers();

                    state._fsp--;
                    if (state.failed) return retval;

                    // C.g:142:27: ( init_declarator_list )?
                    int alt8=2;
                    int LA8_0 = input.LA(1);

                    if ( (LA8_0==IDENTIFIER||LA8_0==30||LA8_0==32) ) {
                        alt8=1;
                    }
                    switch (alt8) {
                        case 1 :
                            // C.g:142:27: init_declarator_list
                            {
                            pushFollow(FOLLOW_init_declarator_list_in_declaration297);
                            init_declarator_list();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    // C.g:142:49: ( asm_definition )?
                    int alt9=2;
                    int LA9_0 = input.LA(1);

                    if ( (LA9_0==63) ) {
                        alt9=1;
                    }
                    switch (alt9) {
                        case 1 :
                            // C.g:142:49: asm_definition
                            {
                            pushFollow(FOLLOW_asm_definition_in_declaration300);
                            asm_definition();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    match(input,47,FOLLOW_47_in_declaration303); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 5, declaration_StartIndex); }

            declaration_stack.pop();
        }
        return retval;
    }
    // $ANTLR end "declaration"


    public static class asm_definition_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "asm_definition"
    // C.g:145:1: asm_definition : '__asm__' '(' multiline_string_literal ')' ;
    public final CParser.asm_definition_return asm_definition() throws RecognitionException {
        CParser.asm_definition_return retval = new CParser.asm_definition_return();
        retval.start = input.LT(1);

        int asm_definition_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 6) ) { return retval; }

            // C.g:146:2: ( '__asm__' '(' multiline_string_literal ')' )
            // C.g:146:4: '__asm__' '(' multiline_string_literal ')'
            {
            match(input,63,FOLLOW_63_in_asm_definition314); if (state.failed) return retval;

            match(input,30,FOLLOW_30_in_asm_definition316); if (state.failed) return retval;

            pushFollow(FOLLOW_multiline_string_literal_in_asm_definition318);
            multiline_string_literal();

            state._fsp--;
            if (state.failed) return retval;

            match(input,31,FOLLOW_31_in_asm_definition320); if (state.failed) return retval;

            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 6, asm_definition_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "asm_definition"


    public static class multiline_string_literal_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "multiline_string_literal"
    // C.g:149:1: multiline_string_literal : ( STRING_LITERAL )* ;
    public final CParser.multiline_string_literal_return multiline_string_literal() throws RecognitionException {
        CParser.multiline_string_literal_return retval = new CParser.multiline_string_literal_return();
        retval.start = input.LT(1);

        int multiline_string_literal_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 7) ) { return retval; }

            // C.g:150:2: ( ( STRING_LITERAL )* )
            // C.g:150:4: ( STRING_LITERAL )*
            {
            // C.g:150:4: ( STRING_LITERAL )*
            loop11:
            do {
                int alt11=2;
                int LA11_0 = input.LA(1);

                if ( (LA11_0==STRING_LITERAL) ) {
                    alt11=1;
                }


                switch (alt11) {
            	case 1 :
            	    // C.g:150:4: STRING_LITERAL
            	    {
            	    match(input,STRING_LITERAL,FOLLOW_STRING_LITERAL_in_multiline_string_literal332); if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop11;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 7, multiline_string_literal_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "multiline_string_literal"


    public static class declaration_specifiers_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "declaration_specifiers"
    // C.g:153:1: declaration_specifiers : ( storage_class_specifier | type_specifier | type_qualifier )+ ;
    public final CParser.declaration_specifiers_return declaration_specifiers() throws RecognitionException {
        CParser.declaration_specifiers_return retval = new CParser.declaration_specifiers_return();
        retval.start = input.LT(1);

        int declaration_specifiers_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 8) ) { return retval; }

            // C.g:154:2: ( ( storage_class_specifier | type_specifier | type_qualifier )+ )
            // C.g:154:4: ( storage_class_specifier | type_specifier | type_qualifier )+
            {
            // C.g:154:4: ( storage_class_specifier | type_specifier | type_qualifier )+
            int cnt12=0;
            loop12:
            do {
                int alt12=4;
                switch ( input.LA(1) ) {
                case IDENTIFIER:
                    {
                    int LA12_2 = input.LA(2);

                    if ( (((synpred17_C()&&synpred17_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt12=2;
                    }


                    }
                    break;
                case 67:
                case 78:
                case 85:
                case 90:
                    {
                    alt12=1;
                    }
                    break;
                case 64:
                case 70:
                case 75:
                case 77:
                case 79:
                case 83:
                case 84:
                case 87:
                case 88:
                case 91:
                case 94:
                case 95:
                case 96:
                    {
                    alt12=2;
                    }
                    break;
                case 65:
                case 71:
                case 97:
                    {
                    alt12=3;
                    }
                    break;

                }

                switch (alt12) {
            	case 1 :
            	    // C.g:154:6: storage_class_specifier
            	    {
            	    pushFollow(FOLLOW_storage_class_specifier_in_declaration_specifiers347);
            	    storage_class_specifier();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;
            	case 2 :
            	    // C.g:154:32: type_specifier
            	    {
            	    pushFollow(FOLLOW_type_specifier_in_declaration_specifiers351);
            	    type_specifier();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;
            	case 3 :
            	    // C.g:154:49: type_qualifier
            	    {
            	    pushFollow(FOLLOW_type_qualifier_in_declaration_specifiers355);
            	    type_qualifier();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    if ( cnt12 >= 1 ) break loop12;
            	    if (state.backtracking>0) {state.failed=true; return retval;}
                        EarlyExitException eee =
                            new EarlyExitException(12, input);
                        throw eee;
                }
                cnt12++;
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 8, declaration_specifiers_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "declaration_specifiers"


    public static class init_declarator_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "init_declarator_list"
    // C.g:157:1: init_declarator_list : init_declarator ( ',' init_declarator )* ;
    public final CParser.init_declarator_list_return init_declarator_list() throws RecognitionException {
        CParser.init_declarator_list_return retval = new CParser.init_declarator_list_return();
        retval.start = input.LT(1);

        int init_declarator_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 9) ) { return retval; }

            // C.g:158:2: ( init_declarator ( ',' init_declarator )* )
            // C.g:158:4: init_declarator ( ',' init_declarator )*
            {
            pushFollow(FOLLOW_init_declarator_in_init_declarator_list369);
            init_declarator();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:158:20: ( ',' init_declarator )*
            loop13:
            do {
                int alt13=2;
                int LA13_0 = input.LA(1);

                if ( (LA13_0==37) ) {
                    alt13=1;
                }


                switch (alt13) {
            	case 1 :
            	    // C.g:158:21: ',' init_declarator
            	    {
            	    match(input,37,FOLLOW_37_in_init_declarator_list372); if (state.failed) return retval;

            	    pushFollow(FOLLOW_init_declarator_in_init_declarator_list374);
            	    init_declarator();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop13;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 9, init_declarator_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "init_declarator_list"


    public static class init_declarator_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "init_declarator"
    // C.g:161:1: init_declarator : declarator ( '=' initializer )? ;
    public final CParser.init_declarator_return init_declarator() throws RecognitionException {
        CParser.init_declarator_return retval = new CParser.init_declarator_return();
        retval.start = input.LT(1);

        int init_declarator_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 10) ) { return retval; }

            // C.g:162:2: ( declarator ( '=' initializer )? )
            // C.g:162:4: declarator ( '=' initializer )?
            {
            pushFollow(FOLLOW_declarator_in_init_declarator387);
            declarator();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:162:15: ( '=' initializer )?
            int alt14=2;
            int LA14_0 = input.LA(1);

            if ( (LA14_0==52) ) {
                alt14=1;
            }
            switch (alt14) {
                case 1 :
                    // C.g:162:16: '=' initializer
                    {
                    match(input,52,FOLLOW_52_in_init_declarator390); if (state.failed) return retval;

                    pushFollow(FOLLOW_initializer_in_init_declarator392);
                    initializer();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 10, init_declarator_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "init_declarator"


    public static class storage_class_specifier_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "storage_class_specifier"
    // C.g:165:1: storage_class_specifier : ( 'extern' | 'static' | 'auto' | 'register' );
    public final CParser.storage_class_specifier_return storage_class_specifier() throws RecognitionException {
        CParser.storage_class_specifier_return retval = new CParser.storage_class_specifier_return();
        retval.start = input.LT(1);

        int storage_class_specifier_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 11) ) { return retval; }

            // C.g:166:2: ( 'extern' | 'static' | 'auto' | 'register' )
            // C.g:
            {
            if ( input.LA(1)==67||input.LA(1)==78||input.LA(1)==85||input.LA(1)==90 ) {
                input.consume();
                state.errorRecovery=false;
                state.failed=false;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                MismatchedSetException mse = new MismatchedSetException(null,input);
                throw mse;
            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 11, storage_class_specifier_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "storage_class_specifier"


    public static class type_specifier_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "type_specifier"
    // C.g:172:1: type_specifier : ( 'void' | 'char' | 'short' | 'int' | 'long' | 'float' | 'double' | 'signed' | 'unsigned' | '__builtin_va_list' | struct_or_union_specifier | enum_specifier | type_id );
    public final CParser.type_specifier_return type_specifier() throws RecognitionException {
        CParser.type_specifier_return retval = new CParser.type_specifier_return();
        retval.start = input.LT(1);

        int type_specifier_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 12) ) { return retval; }

            // C.g:173:2: ( 'void' | 'char' | 'short' | 'int' | 'long' | 'float' | 'double' | 'signed' | 'unsigned' | '__builtin_va_list' | struct_or_union_specifier | enum_specifier | type_id )
            int alt15=13;
            switch ( input.LA(1) ) {
            case 96:
                {
                alt15=1;
                }
                break;
            case 70:
                {
                alt15=2;
                }
                break;
            case 87:
                {
                alt15=3;
                }
                break;
            case 83:
                {
                alt15=4;
                }
                break;
            case 84:
                {
                alt15=5;
                }
                break;
            case 79:
                {
                alt15=6;
                }
                break;
            case 75:
                {
                alt15=7;
                }
                break;
            case 88:
                {
                alt15=8;
                }
                break;
            case 95:
                {
                alt15=9;
                }
                break;
            case 64:
                {
                alt15=10;
                }
                break;
            case 91:
            case 94:
                {
                alt15=11;
                }
                break;
            case 77:
                {
                alt15=12;
                }
                break;
            case IDENTIFIER:
                {
                alt15=13;
                }
                break;
            default:
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 15, 0, input);

                throw nvae;

            }

            switch (alt15) {
                case 1 :
                    // C.g:173:4: 'void'
                    {
                    match(input,96,FOLLOW_96_in_type_specifier431); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:174:4: 'char'
                    {
                    match(input,70,FOLLOW_70_in_type_specifier436); if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:175:4: 'short'
                    {
                    match(input,87,FOLLOW_87_in_type_specifier441); if (state.failed) return retval;

                    }
                    break;
                case 4 :
                    // C.g:176:4: 'int'
                    {
                    match(input,83,FOLLOW_83_in_type_specifier446); if (state.failed) return retval;

                    }
                    break;
                case 5 :
                    // C.g:177:4: 'long'
                    {
                    match(input,84,FOLLOW_84_in_type_specifier451); if (state.failed) return retval;

                    }
                    break;
                case 6 :
                    // C.g:178:4: 'float'
                    {
                    match(input,79,FOLLOW_79_in_type_specifier456); if (state.failed) return retval;

                    }
                    break;
                case 7 :
                    // C.g:179:4: 'double'
                    {
                    match(input,75,FOLLOW_75_in_type_specifier461); if (state.failed) return retval;

                    }
                    break;
                case 8 :
                    // C.g:180:4: 'signed'
                    {
                    match(input,88,FOLLOW_88_in_type_specifier466); if (state.failed) return retval;

                    }
                    break;
                case 9 :
                    // C.g:181:4: 'unsigned'
                    {
                    match(input,95,FOLLOW_95_in_type_specifier471); if (state.failed) return retval;

                    }
                    break;
                case 10 :
                    // C.g:182:4: '__builtin_va_list'
                    {
                    match(input,64,FOLLOW_64_in_type_specifier476); if (state.failed) return retval;

                    }
                    break;
                case 11 :
                    // C.g:183:4: struct_or_union_specifier
                    {
                    pushFollow(FOLLOW_struct_or_union_specifier_in_type_specifier481);
                    struct_or_union_specifier();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 12 :
                    // C.g:184:4: enum_specifier
                    {
                    pushFollow(FOLLOW_enum_specifier_in_type_specifier486);
                    enum_specifier();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 13 :
                    // C.g:185:4: type_id
                    {
                    pushFollow(FOLLOW_type_id_in_type_specifier491);
                    type_id();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 12, type_specifier_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "type_specifier"


    public static class type_id_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "type_id"
    // C.g:188:1: type_id :{...}? IDENTIFIER ;
    public final CParser.type_id_return type_id() throws RecognitionException {
        CParser.type_id_return retval = new CParser.type_id_return();
        retval.start = input.LT(1);

        int type_id_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 13) ) { return retval; }

            // C.g:189:5: ({...}? IDENTIFIER )
            // C.g:189:9: {...}? IDENTIFIER
            {
            if ( !((isTypeName(input.LT(1).getText()))) ) {
                if (state.backtracking>0) {state.failed=true; return retval;}
                throw new FailedPredicateException(input, "type_id", "isTypeName(input.LT(1).getText())");
            }

            match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_type_id509); if (state.failed) return retval;

            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 13, type_id_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "type_id"


    public static class struct_or_union_specifier_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "struct_or_union_specifier"
    // C.g:193:1: struct_or_union_specifier options {k=3; } : ( struct_or_union ( IDENTIFIER )? '{' struct_declaration_list '}' | struct_or_union IDENTIFIER );
    public final CParser.struct_or_union_specifier_return struct_or_union_specifier() throws RecognitionException {
        Symbols_stack.push(new Symbols_scope());

        CParser.struct_or_union_specifier_return retval = new CParser.struct_or_union_specifier_return();
        retval.start = input.LT(1);

        int struct_or_union_specifier_StartIndex = input.index();


          ((Symbols_scope)Symbols_stack.peek()).types = new HashSet();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 14) ) { return retval; }

            // C.g:199:2: ( struct_or_union ( IDENTIFIER )? '{' struct_declaration_list '}' | struct_or_union IDENTIFIER )
            int alt17=2;
            int LA17_0 = input.LA(1);

            if ( (LA17_0==91||LA17_0==94) ) {
                int LA17_1 = input.LA(2);

                if ( (LA17_1==IDENTIFIER) ) {
                    int LA17_2 = input.LA(3);

                    if ( (LA17_2==99) ) {
                        alt17=1;
                    }
                    else if ( (LA17_2==EOF||LA17_2==IDENTIFIER||(LA17_2 >= 30 && LA17_2 <= 32)||LA17_2==37||(LA17_2 >= 46 && LA17_2 <= 47)||LA17_2==59||(LA17_2 >= 63 && LA17_2 <= 65)||LA17_2==67||(LA17_2 >= 70 && LA17_2 <= 71)||LA17_2==75||(LA17_2 >= 77 && LA17_2 <= 79)||(LA17_2 >= 83 && LA17_2 <= 85)||(LA17_2 >= 87 && LA17_2 <= 88)||(LA17_2 >= 90 && LA17_2 <= 91)||(LA17_2 >= 94 && LA17_2 <= 97)) ) {
                        alt17=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 17, 2, input);

                        throw nvae;

                    }
                }
                else if ( (LA17_1==99) ) {
                    alt17=1;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 17, 1, input);

                    throw nvae;

                }
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 17, 0, input);

                throw nvae;

            }
            switch (alt17) {
                case 1 :
                    // C.g:199:4: struct_or_union ( IDENTIFIER )? '{' struct_declaration_list '}'
                    {
                    pushFollow(FOLLOW_struct_or_union_in_struct_or_union_specifier542);
                    struct_or_union();

                    state._fsp--;
                    if (state.failed) return retval;

                    // C.g:199:20: ( IDENTIFIER )?
                    int alt16=2;
                    int LA16_0 = input.LA(1);

                    if ( (LA16_0==IDENTIFIER) ) {
                        alt16=1;
                    }
                    switch (alt16) {
                        case 1 :
                            // C.g:199:20: IDENTIFIER
                            {
                            match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_struct_or_union_specifier544); if (state.failed) return retval;

                            }
                            break;

                    }


                    match(input,99,FOLLOW_99_in_struct_or_union_specifier547); if (state.failed) return retval;

                    pushFollow(FOLLOW_struct_declaration_list_in_struct_or_union_specifier549);
                    struct_declaration_list();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,103,FOLLOW_103_in_struct_or_union_specifier551); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:200:4: struct_or_union IDENTIFIER
                    {
                    pushFollow(FOLLOW_struct_or_union_in_struct_or_union_specifier556);
                    struct_or_union();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_struct_or_union_specifier558); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 14, struct_or_union_specifier_StartIndex); }

            Symbols_stack.pop();

        }
        return retval;
    }
    // $ANTLR end "struct_or_union_specifier"


    public static class struct_or_union_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "struct_or_union"
    // C.g:203:1: struct_or_union : ( 'struct' | 'union' );
    public final CParser.struct_or_union_return struct_or_union() throws RecognitionException {
        CParser.struct_or_union_return retval = new CParser.struct_or_union_return();
        retval.start = input.LT(1);

        int struct_or_union_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 15) ) { return retval; }

            // C.g:204:2: ( 'struct' | 'union' )
            // C.g:
            {
            if ( input.LA(1)==91||input.LA(1)==94 ) {
                input.consume();
                state.errorRecovery=false;
                state.failed=false;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                MismatchedSetException mse = new MismatchedSetException(null,input);
                throw mse;
            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 15, struct_or_union_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "struct_or_union"


    public static class struct_declaration_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "struct_declaration_list"
    // C.g:208:1: struct_declaration_list : ( struct_declaration )+ ;
    public final CParser.struct_declaration_list_return struct_declaration_list() throws RecognitionException {
        CParser.struct_declaration_list_return retval = new CParser.struct_declaration_list_return();
        retval.start = input.LT(1);

        int struct_declaration_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 16) ) { return retval; }

            // C.g:209:2: ( ( struct_declaration )+ )
            // C.g:209:4: ( struct_declaration )+
            {
            // C.g:209:4: ( struct_declaration )+
            int cnt18=0;
            loop18:
            do {
                int alt18=2;
                int LA18_0 = input.LA(1);

                if ( (LA18_0==IDENTIFIER||(LA18_0 >= 64 && LA18_0 <= 65)||(LA18_0 >= 70 && LA18_0 <= 71)||LA18_0==75||LA18_0==77||LA18_0==79||(LA18_0 >= 83 && LA18_0 <= 84)||(LA18_0 >= 87 && LA18_0 <= 88)||LA18_0==91||(LA18_0 >= 94 && LA18_0 <= 97)) ) {
                    alt18=1;
                }


                switch (alt18) {
            	case 1 :
            	    // C.g:209:4: struct_declaration
            	    {
            	    pushFollow(FOLLOW_struct_declaration_in_struct_declaration_list585);
            	    struct_declaration();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    if ( cnt18 >= 1 ) break loop18;
            	    if (state.backtracking>0) {state.failed=true; return retval;}
                        EarlyExitException eee =
                            new EarlyExitException(18, input);
                        throw eee;
                }
                cnt18++;
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 16, struct_declaration_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "struct_declaration_list"


    public static class struct_declaration_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "struct_declaration"
    // C.g:212:1: struct_declaration : specifier_qualifier_list struct_declarator_list ';' ;
    public final CParser.struct_declaration_return struct_declaration() throws RecognitionException {
        CParser.struct_declaration_return retval = new CParser.struct_declaration_return();
        retval.start = input.LT(1);

        int struct_declaration_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 17) ) { return retval; }

            // C.g:213:2: ( specifier_qualifier_list struct_declarator_list ';' )
            // C.g:213:4: specifier_qualifier_list struct_declarator_list ';'
            {
            pushFollow(FOLLOW_specifier_qualifier_list_in_struct_declaration597);
            specifier_qualifier_list();

            state._fsp--;
            if (state.failed) return retval;

            pushFollow(FOLLOW_struct_declarator_list_in_struct_declaration599);
            struct_declarator_list();

            state._fsp--;
            if (state.failed) return retval;

            match(input,47,FOLLOW_47_in_struct_declaration601); if (state.failed) return retval;

            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 17, struct_declaration_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "struct_declaration"


    public static class specifier_qualifier_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "specifier_qualifier_list"
    // C.g:216:1: specifier_qualifier_list : ( type_qualifier | type_specifier )+ ;
    public final CParser.specifier_qualifier_list_return specifier_qualifier_list() throws RecognitionException {
        CParser.specifier_qualifier_list_return retval = new CParser.specifier_qualifier_list_return();
        retval.start = input.LT(1);

        int specifier_qualifier_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 18) ) { return retval; }

            // C.g:217:2: ( ( type_qualifier | type_specifier )+ )
            // C.g:217:4: ( type_qualifier | type_specifier )+
            {
            // C.g:217:4: ( type_qualifier | type_specifier )+
            int cnt19=0;
            loop19:
            do {
                int alt19=3;
                switch ( input.LA(1) ) {
                case IDENTIFIER:
                    {
                    switch ( input.LA(2) ) {
                    case 59:
                        {
                        int LA19_20 = input.LA(3);

                        if ( (((synpred41_C()&&synpred41_C())&&(isTypeName(input.LT(1).getText())))) ) {
                            alt19=2;
                        }


                        }
                        break;
                    case 30:
                        {
                        int LA19_21 = input.LA(3);

                        if ( (((synpred41_C()&&synpred41_C())&&(isTypeName(input.LT(1).getText())))) ) {
                            alt19=2;
                        }


                        }
                        break;
                    case 46:
                        {
                        int LA19_22 = input.LA(3);

                        if ( (((synpred41_C()&&synpred41_C())&&(isTypeName(input.LT(1).getText())))) ) {
                            alt19=2;
                        }


                        }
                        break;
                    case IDENTIFIER:
                    case 31:
                    case 32:
                    case 64:
                    case 65:
                    case 70:
                    case 71:
                    case 75:
                    case 77:
                    case 79:
                    case 83:
                    case 84:
                    case 87:
                    case 88:
                    case 91:
                    case 94:
                    case 95:
                    case 96:
                    case 97:
                        {
                        alt19=2;
                        }
                        break;

                    }

                    }
                    break;
                case 65:
                case 71:
                case 97:
                    {
                    alt19=1;
                    }
                    break;
                case 64:
                case 70:
                case 75:
                case 77:
                case 79:
                case 83:
                case 84:
                case 87:
                case 88:
                case 91:
                case 94:
                case 95:
                case 96:
                    {
                    alt19=2;
                    }
                    break;

                }

                switch (alt19) {
            	case 1 :
            	    // C.g:217:6: type_qualifier
            	    {
            	    pushFollow(FOLLOW_type_qualifier_in_specifier_qualifier_list614);
            	    type_qualifier();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;
            	case 2 :
            	    // C.g:217:23: type_specifier
            	    {
            	    pushFollow(FOLLOW_type_specifier_in_specifier_qualifier_list618);
            	    type_specifier();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    if ( cnt19 >= 1 ) break loop19;
            	    if (state.backtracking>0) {state.failed=true; return retval;}
                        EarlyExitException eee =
                            new EarlyExitException(19, input);
                        throw eee;
                }
                cnt19++;
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 18, specifier_qualifier_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "specifier_qualifier_list"


    public static class struct_declarator_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "struct_declarator_list"
    // C.g:220:1: struct_declarator_list : struct_declarator ( ',' struct_declarator )* ;
    public final CParser.struct_declarator_list_return struct_declarator_list() throws RecognitionException {
        CParser.struct_declarator_list_return retval = new CParser.struct_declarator_list_return();
        retval.start = input.LT(1);

        int struct_declarator_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 19) ) { return retval; }

            // C.g:221:2: ( struct_declarator ( ',' struct_declarator )* )
            // C.g:221:4: struct_declarator ( ',' struct_declarator )*
            {
            pushFollow(FOLLOW_struct_declarator_in_struct_declarator_list632);
            struct_declarator();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:221:22: ( ',' struct_declarator )*
            loop20:
            do {
                int alt20=2;
                int LA20_0 = input.LA(1);

                if ( (LA20_0==37) ) {
                    alt20=1;
                }


                switch (alt20) {
            	case 1 :
            	    // C.g:221:23: ',' struct_declarator
            	    {
            	    match(input,37,FOLLOW_37_in_struct_declarator_list635); if (state.failed) return retval;

            	    pushFollow(FOLLOW_struct_declarator_in_struct_declarator_list637);
            	    struct_declarator();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop20;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 19, struct_declarator_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "struct_declarator_list"


    public static class struct_declarator_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "struct_declarator"
    // C.g:224:1: struct_declarator : ( declarator ( ':' constant_expression )? | ':' constant_expression );
    public final CParser.struct_declarator_return struct_declarator() throws RecognitionException {
        CParser.struct_declarator_return retval = new CParser.struct_declarator_return();
        retval.start = input.LT(1);

        int struct_declarator_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 20) ) { return retval; }

            // C.g:225:2: ( declarator ( ':' constant_expression )? | ':' constant_expression )
            int alt22=2;
            int LA22_0 = input.LA(1);

            if ( (LA22_0==IDENTIFIER||LA22_0==30||LA22_0==32) ) {
                alt22=1;
            }
            else if ( (LA22_0==46) ) {
                alt22=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 22, 0, input);

                throw nvae;

            }
            switch (alt22) {
                case 1 :
                    // C.g:225:4: declarator ( ':' constant_expression )?
                    {
                    pushFollow(FOLLOW_declarator_in_struct_declarator650);
                    declarator();

                    state._fsp--;
                    if (state.failed) return retval;

                    // C.g:225:15: ( ':' constant_expression )?
                    int alt21=2;
                    int LA21_0 = input.LA(1);

                    if ( (LA21_0==46) ) {
                        alt21=1;
                    }
                    switch (alt21) {
                        case 1 :
                            // C.g:225:16: ':' constant_expression
                            {
                            match(input,46,FOLLOW_46_in_struct_declarator653); if (state.failed) return retval;

                            pushFollow(FOLLOW_constant_expression_in_struct_declarator655);
                            constant_expression();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    }
                    break;
                case 2 :
                    // C.g:226:4: ':' constant_expression
                    {
                    match(input,46,FOLLOW_46_in_struct_declarator662); if (state.failed) return retval;

                    pushFollow(FOLLOW_constant_expression_in_struct_declarator664);
                    constant_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 20, struct_declarator_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "struct_declarator"


    public static class enum_specifier_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "enum_specifier"
    // C.g:229:1: enum_specifier options {k=3; } : ( 'enum' '{' enumerator_list '}' | 'enum' IDENTIFIER '{' enumerator_list '}' | 'enum' IDENTIFIER );
    public final CParser.enum_specifier_return enum_specifier() throws RecognitionException {
        CParser.enum_specifier_return retval = new CParser.enum_specifier_return();
        retval.start = input.LT(1);

        int enum_specifier_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 21) ) { return retval; }

            // C.g:231:2: ( 'enum' '{' enumerator_list '}' | 'enum' IDENTIFIER '{' enumerator_list '}' | 'enum' IDENTIFIER )
            int alt23=3;
            int LA23_0 = input.LA(1);

            if ( (LA23_0==77) ) {
                int LA23_1 = input.LA(2);

                if ( (LA23_1==99) ) {
                    alt23=1;
                }
                else if ( (LA23_1==IDENTIFIER) ) {
                    int LA23_3 = input.LA(3);

                    if ( (LA23_3==99) ) {
                        alt23=2;
                    }
                    else if ( (LA23_3==EOF||LA23_3==IDENTIFIER||(LA23_3 >= 30 && LA23_3 <= 32)||LA23_3==37||(LA23_3 >= 46 && LA23_3 <= 47)||LA23_3==59||(LA23_3 >= 63 && LA23_3 <= 65)||LA23_3==67||(LA23_3 >= 70 && LA23_3 <= 71)||LA23_3==75||(LA23_3 >= 77 && LA23_3 <= 79)||(LA23_3 >= 83 && LA23_3 <= 85)||(LA23_3 >= 87 && LA23_3 <= 88)||(LA23_3 >= 90 && LA23_3 <= 91)||(LA23_3 >= 94 && LA23_3 <= 97)) ) {
                        alt23=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 23, 3, input);

                        throw nvae;

                    }
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 23, 1, input);

                    throw nvae;

                }
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 23, 0, input);

                throw nvae;

            }
            switch (alt23) {
                case 1 :
                    // C.g:231:4: 'enum' '{' enumerator_list '}'
                    {
                    match(input,77,FOLLOW_77_in_enum_specifier682); if (state.failed) return retval;

                    match(input,99,FOLLOW_99_in_enum_specifier684); if (state.failed) return retval;

                    pushFollow(FOLLOW_enumerator_list_in_enum_specifier686);
                    enumerator_list();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,103,FOLLOW_103_in_enum_specifier688); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:232:4: 'enum' IDENTIFIER '{' enumerator_list '}'
                    {
                    match(input,77,FOLLOW_77_in_enum_specifier693); if (state.failed) return retval;

                    match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_enum_specifier695); if (state.failed) return retval;

                    match(input,99,FOLLOW_99_in_enum_specifier697); if (state.failed) return retval;

                    pushFollow(FOLLOW_enumerator_list_in_enum_specifier699);
                    enumerator_list();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,103,FOLLOW_103_in_enum_specifier701); if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:233:4: 'enum' IDENTIFIER
                    {
                    match(input,77,FOLLOW_77_in_enum_specifier706); if (state.failed) return retval;

                    match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_enum_specifier708); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 21, enum_specifier_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "enum_specifier"


    public static class enumerator_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "enumerator_list"
    // C.g:236:1: enumerator_list : enumerator ( ',' enumerator )* ;
    public final CParser.enumerator_list_return enumerator_list() throws RecognitionException {
        CParser.enumerator_list_return retval = new CParser.enumerator_list_return();
        retval.start = input.LT(1);

        int enumerator_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 22) ) { return retval; }

            // C.g:237:2: ( enumerator ( ',' enumerator )* )
            // C.g:237:4: enumerator ( ',' enumerator )*
            {
            pushFollow(FOLLOW_enumerator_in_enumerator_list719);
            enumerator();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:237:15: ( ',' enumerator )*
            loop24:
            do {
                int alt24=2;
                int LA24_0 = input.LA(1);

                if ( (LA24_0==37) ) {
                    alt24=1;
                }


                switch (alt24) {
            	case 1 :
            	    // C.g:237:16: ',' enumerator
            	    {
            	    match(input,37,FOLLOW_37_in_enumerator_list722); if (state.failed) return retval;

            	    pushFollow(FOLLOW_enumerator_in_enumerator_list724);
            	    enumerator();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop24;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 22, enumerator_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "enumerator_list"


    public static class enumerator_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "enumerator"
    // C.g:240:1: enumerator : IDENTIFIER ( '=' constant_expression )? ;
    public final CParser.enumerator_return enumerator() throws RecognitionException {
        CParser.enumerator_return retval = new CParser.enumerator_return();
        retval.start = input.LT(1);

        int enumerator_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 23) ) { return retval; }

            // C.g:241:2: ( IDENTIFIER ( '=' constant_expression )? )
            // C.g:241:4: IDENTIFIER ( '=' constant_expression )?
            {
            match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_enumerator737); if (state.failed) return retval;

            // C.g:241:15: ( '=' constant_expression )?
            int alt25=2;
            int LA25_0 = input.LA(1);

            if ( (LA25_0==52) ) {
                alt25=1;
            }
            switch (alt25) {
                case 1 :
                    // C.g:241:16: '=' constant_expression
                    {
                    match(input,52,FOLLOW_52_in_enumerator740); if (state.failed) return retval;

                    pushFollow(FOLLOW_constant_expression_in_enumerator742);
                    constant_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 23, enumerator_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "enumerator"


    public static class type_qualifier_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "type_qualifier"
    // C.g:244:1: type_qualifier : ( 'const' | '__const' | 'volatile' );
    public final CParser.type_qualifier_return type_qualifier() throws RecognitionException {
        CParser.type_qualifier_return retval = new CParser.type_qualifier_return();
        retval.start = input.LT(1);

        int type_qualifier_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 24) ) { return retval; }

            // C.g:245:2: ( 'const' | '__const' | 'volatile' )
            // C.g:
            {
            if ( input.LA(1)==65||input.LA(1)==71||input.LA(1)==97 ) {
                input.consume();
                state.errorRecovery=false;
                state.failed=false;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                MismatchedSetException mse = new MismatchedSetException(null,input);
                throw mse;
            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 24, type_qualifier_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "type_qualifier"


    public static class declarator_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "declarator"
    // C.g:250:1: declarator : ( ( pointer )? direct_declarator | pointer );
    public final CParser.declarator_return declarator() throws RecognitionException {
        CParser.declarator_return retval = new CParser.declarator_return();
        retval.start = input.LT(1);

        int declarator_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 25) ) { return retval; }

            // C.g:251:2: ( ( pointer )? direct_declarator | pointer )
            int alt27=2;
            int LA27_0 = input.LA(1);

            if ( (LA27_0==32) ) {
                int LA27_1 = input.LA(2);

                if ( (synpred52_C()) ) {
                    alt27=1;
                }
                else if ( (true) ) {
                    alt27=2;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 27, 1, input);

                    throw nvae;

                }
            }
            else if ( (LA27_0==IDENTIFIER||LA27_0==30) ) {
                alt27=1;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 27, 0, input);

                throw nvae;

            }
            switch (alt27) {
                case 1 :
                    // C.g:251:4: ( pointer )? direct_declarator
                    {
                    // C.g:251:4: ( pointer )?
                    int alt26=2;
                    int LA26_0 = input.LA(1);

                    if ( (LA26_0==32) ) {
                        alt26=1;
                    }
                    switch (alt26) {
                        case 1 :
                            // C.g:251:4: pointer
                            {
                            pushFollow(FOLLOW_pointer_in_declarator776);
                            pointer();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    pushFollow(FOLLOW_direct_declarator_in_declarator779);
                    direct_declarator();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:252:4: pointer
                    {
                    pushFollow(FOLLOW_pointer_in_declarator784);
                    pointer();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 25, declarator_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "declarator"


    public static class direct_declarator_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "direct_declarator"
    // C.g:255:1: direct_declarator : ( IDENTIFIER | '(' declarator ')' ) ( declarator_suffix )* ;
    public final CParser.direct_declarator_return direct_declarator() throws RecognitionException {
        CParser.direct_declarator_return retval = new CParser.direct_declarator_return();
        retval.start = input.LT(1);

        int direct_declarator_StartIndex = input.index();

        Token IDENTIFIER2=null;

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 26) ) { return retval; }

            // C.g:256:2: ( ( IDENTIFIER | '(' declarator ')' ) ( declarator_suffix )* )
            // C.g:256:6: ( IDENTIFIER | '(' declarator ')' ) ( declarator_suffix )*
            {
            // C.g:256:6: ( IDENTIFIER | '(' declarator ')' )
            int alt28=2;
            int LA28_0 = input.LA(1);

            if ( (LA28_0==IDENTIFIER) ) {
                alt28=1;
            }
            else if ( (LA28_0==30) ) {
                alt28=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 28, 0, input);

                throw nvae;

            }
            switch (alt28) {
                case 1 :
                    // C.g:256:8: IDENTIFIER
                    {
                    IDENTIFIER2=(Token)match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_direct_declarator799); if (state.failed) return retval;

                    if ( state.backtracking==0 ) {
                    			if (declaration_stack.size()>0&&((declaration_scope)declaration_stack.peek()).isTypedef) {
                    				((Symbols_scope)Symbols_stack.peek()).types.add((IDENTIFIER2!=null?IDENTIFIER2.getText():null));
                    				System.out.println("define type "+(IDENTIFIER2!=null?IDENTIFIER2.getText():null));
                    			}
                    			}

                    }
                    break;
                case 2 :
                    // C.g:263:5: '(' declarator ')'
                    {
                    match(input,30,FOLLOW_30_in_direct_declarator810); if (state.failed) return retval;

                    pushFollow(FOLLOW_declarator_in_direct_declarator812);
                    declarator();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_direct_declarator814); if (state.failed) return retval;

                    }
                    break;

            }


            // C.g:265:9: ( declarator_suffix )*
            loop29:
            do {
                int alt29=2;
                int LA29_0 = input.LA(1);

                if ( (LA29_0==30) ) {
                    switch ( input.LA(2) ) {
                    case 31:
                        {
                        int LA29_28 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case IDENTIFIER:
                        {
                        int LA29_30 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 67:
                    case 78:
                    case 85:
                    case 90:
                        {
                        int LA29_33 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 96:
                        {
                        int LA29_34 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 70:
                        {
                        int LA29_35 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 87:
                        {
                        int LA29_36 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 83:
                        {
                        int LA29_37 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 84:
                        {
                        int LA29_38 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 79:
                        {
                        int LA29_39 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 75:
                        {
                        int LA29_40 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 88:
                        {
                        int LA29_41 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 95:
                        {
                        int LA29_42 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 64:
                        {
                        int LA29_43 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 91:
                    case 94:
                        {
                        int LA29_44 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 77:
                        {
                        int LA29_45 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 65:
                    case 71:
                    case 97:
                        {
                        int LA29_46 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;

                    }

                }
                else if ( (LA29_0==59) ) {
                    switch ( input.LA(2) ) {
                    case 60:
                        {
                        int LA29_47 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 30:
                        {
                        int LA29_48 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case IDENTIFIER:
                        {
                        int LA29_49 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case CHARACTER_LITERAL:
                    case DECIMAL_LITERAL:
                    case FLOATING_POINT_LITERAL:
                    case HEX_LITERAL:
                    case OCTAL_LITERAL:
                    case STRING_LITERAL:
                        {
                        int LA29_50 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 35:
                        {
                        int LA29_51 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 39:
                        {
                        int LA29_52 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 23:
                    case 28:
                    case 32:
                    case 34:
                    case 38:
                    case 104:
                        {
                        int LA29_53 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;
                    case 89:
                        {
                        int LA29_54 = input.LA(3);

                        if ( (synpred54_C()) ) {
                            alt29=1;
                        }


                        }
                        break;

                    }

                }


                switch (alt29) {
            	case 1 :
            	    // C.g:265:9: declarator_suffix
            	    {
            	    pushFollow(FOLLOW_declarator_suffix_in_direct_declarator828);
            	    declarator_suffix();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop29;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 26, direct_declarator_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "direct_declarator"


    public static class declarator_suffix_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "declarator_suffix"
    // C.g:268:1: declarator_suffix : ( '[' constant_expression ']' | '[' ']' | '(' parameter_type_list ')' | '(' identifier_list ')' | '(' ')' );
    public final CParser.declarator_suffix_return declarator_suffix() throws RecognitionException {
        CParser.declarator_suffix_return retval = new CParser.declarator_suffix_return();
        retval.start = input.LT(1);

        int declarator_suffix_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 27) ) { return retval; }

            // C.g:269:2: ( '[' constant_expression ']' | '[' ']' | '(' parameter_type_list ')' | '(' identifier_list ')' | '(' ')' )
            int alt30=5;
            int LA30_0 = input.LA(1);

            if ( (LA30_0==59) ) {
                int LA30_1 = input.LA(2);

                if ( (LA30_1==60) ) {
                    alt30=2;
                }
                else if ( (LA30_1==CHARACTER_LITERAL||LA30_1==DECIMAL_LITERAL||LA30_1==FLOATING_POINT_LITERAL||LA30_1==HEX_LITERAL||LA30_1==IDENTIFIER||LA30_1==OCTAL_LITERAL||LA30_1==STRING_LITERAL||LA30_1==23||LA30_1==28||LA30_1==30||LA30_1==32||(LA30_1 >= 34 && LA30_1 <= 35)||(LA30_1 >= 38 && LA30_1 <= 39)||LA30_1==89||LA30_1==104) ) {
                    alt30=1;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 30, 1, input);

                    throw nvae;

                }
            }
            else if ( (LA30_0==30) ) {
                switch ( input.LA(2) ) {
                case 31:
                    {
                    alt30=5;
                    }
                    break;
                case 64:
                case 65:
                case 67:
                case 70:
                case 71:
                case 75:
                case 77:
                case 78:
                case 79:
                case 83:
                case 84:
                case 85:
                case 87:
                case 88:
                case 90:
                case 91:
                case 94:
                case 95:
                case 96:
                case 97:
                    {
                    alt30=3;
                    }
                    break;
                case IDENTIFIER:
                    {
                    int LA30_25 = input.LA(3);

                    if ( (synpred57_C()) ) {
                        alt30=3;
                    }
                    else if ( (synpred58_C()) ) {
                        alt30=4;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 30, 25, input);

                        throw nvae;

                    }
                    }
                    break;
                default:
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 30, 2, input);

                    throw nvae;

                }

            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 30, 0, input);

                throw nvae;

            }
            switch (alt30) {
                case 1 :
                    // C.g:269:6: '[' constant_expression ']'
                    {
                    match(input,59,FOLLOW_59_in_declarator_suffix842); if (state.failed) return retval;

                    pushFollow(FOLLOW_constant_expression_in_declarator_suffix844);
                    constant_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,60,FOLLOW_60_in_declarator_suffix846); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:270:9: '[' ']'
                    {
                    match(input,59,FOLLOW_59_in_declarator_suffix856); if (state.failed) return retval;

                    match(input,60,FOLLOW_60_in_declarator_suffix858); if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:271:9: '(' parameter_type_list ')'
                    {
                    match(input,30,FOLLOW_30_in_declarator_suffix868); if (state.failed) return retval;

                    pushFollow(FOLLOW_parameter_type_list_in_declarator_suffix870);
                    parameter_type_list();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_declarator_suffix872); if (state.failed) return retval;

                    }
                    break;
                case 4 :
                    // C.g:272:9: '(' identifier_list ')'
                    {
                    match(input,30,FOLLOW_30_in_declarator_suffix882); if (state.failed) return retval;

                    pushFollow(FOLLOW_identifier_list_in_declarator_suffix884);
                    identifier_list();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_declarator_suffix886); if (state.failed) return retval;

                    }
                    break;
                case 5 :
                    // C.g:273:9: '(' ')'
                    {
                    match(input,30,FOLLOW_30_in_declarator_suffix896); if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_declarator_suffix898); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 27, declarator_suffix_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "declarator_suffix"


    public static class pointer_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "pointer"
    // C.g:276:1: pointer : ( '*' ( type_qualifier )+ ( pointer )? | '*' pointer | '*' );
    public final CParser.pointer_return pointer() throws RecognitionException {
        CParser.pointer_return retval = new CParser.pointer_return();
        retval.start = input.LT(1);

        int pointer_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 28) ) { return retval; }

            // C.g:277:2: ( '*' ( type_qualifier )+ ( pointer )? | '*' pointer | '*' )
            int alt33=3;
            int LA33_0 = input.LA(1);

            if ( (LA33_0==32) ) {
                switch ( input.LA(2) ) {
                case 65:
                case 71:
                case 97:
                    {
                    int LA33_2 = input.LA(3);

                    if ( (synpred61_C()) ) {
                        alt33=1;
                    }
                    else if ( (true) ) {
                        alt33=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 33, 2, input);

                        throw nvae;

                    }
                    }
                    break;
                case 32:
                    {
                    int LA33_3 = input.LA(3);

                    if ( (synpred62_C()) ) {
                        alt33=2;
                    }
                    else if ( (true) ) {
                        alt33=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 33, 3, input);

                        throw nvae;

                    }
                    }
                    break;
                case EOF:
                case IDENTIFIER:
                case 30:
                case 31:
                case 37:
                case 46:
                case 47:
                case 52:
                case 59:
                case 63:
                case 64:
                case 67:
                case 70:
                case 75:
                case 77:
                case 78:
                case 79:
                case 83:
                case 84:
                case 85:
                case 87:
                case 88:
                case 90:
                case 91:
                case 93:
                case 94:
                case 95:
                case 96:
                case 99:
                    {
                    alt33=3;
                    }
                    break;
                default:
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 33, 1, input);

                    throw nvae;

                }

            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 33, 0, input);

                throw nvae;

            }
            switch (alt33) {
                case 1 :
                    // C.g:277:4: '*' ( type_qualifier )+ ( pointer )?
                    {
                    match(input,32,FOLLOW_32_in_pointer909); if (state.failed) return retval;

                    // C.g:277:8: ( type_qualifier )+
                    int cnt31=0;
                    loop31:
                    do {
                        int alt31=2;
                        int LA31_0 = input.LA(1);

                        if ( (LA31_0==65||LA31_0==71||LA31_0==97) ) {
                            int LA31_18 = input.LA(2);

                            if ( (synpred59_C()) ) {
                                alt31=1;
                            }


                        }


                        switch (alt31) {
                    	case 1 :
                    	    // C.g:277:8: type_qualifier
                    	    {
                    	    pushFollow(FOLLOW_type_qualifier_in_pointer911);
                    	    type_qualifier();

                    	    state._fsp--;
                    	    if (state.failed) return retval;

                    	    }
                    	    break;

                    	default :
                    	    if ( cnt31 >= 1 ) break loop31;
                    	    if (state.backtracking>0) {state.failed=true; return retval;}
                                EarlyExitException eee =
                                    new EarlyExitException(31, input);
                                throw eee;
                        }
                        cnt31++;
                    } while (true);


                    // C.g:277:24: ( pointer )?
                    int alt32=2;
                    int LA32_0 = input.LA(1);

                    if ( (LA32_0==32) ) {
                        int LA32_1 = input.LA(2);

                        if ( (synpred60_C()) ) {
                            alt32=1;
                        }
                    }
                    switch (alt32) {
                        case 1 :
                            // C.g:277:24: pointer
                            {
                            pushFollow(FOLLOW_pointer_in_pointer914);
                            pointer();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    }
                    break;
                case 2 :
                    // C.g:278:4: '*' pointer
                    {
                    match(input,32,FOLLOW_32_in_pointer920); if (state.failed) return retval;

                    pushFollow(FOLLOW_pointer_in_pointer922);
                    pointer();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:279:4: '*'
                    {
                    match(input,32,FOLLOW_32_in_pointer927); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 28, pointer_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "pointer"


    public static class parameter_type_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "parameter_type_list"
    // C.g:282:1: parameter_type_list : parameter_list ( ',' '...' )? ;
    public final CParser.parameter_type_list_return parameter_type_list() throws RecognitionException {
        CParser.parameter_type_list_return retval = new CParser.parameter_type_list_return();
        retval.start = input.LT(1);

        int parameter_type_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 29) ) { return retval; }

            // C.g:283:2: ( parameter_list ( ',' '...' )? )
            // C.g:283:4: parameter_list ( ',' '...' )?
            {
            pushFollow(FOLLOW_parameter_list_in_parameter_type_list938);
            parameter_list();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:283:19: ( ',' '...' )?
            int alt34=2;
            int LA34_0 = input.LA(1);

            if ( (LA34_0==37) ) {
                alt34=1;
            }
            switch (alt34) {
                case 1 :
                    // C.g:283:20: ',' '...'
                    {
                    match(input,37,FOLLOW_37_in_parameter_type_list941); if (state.failed) return retval;

                    match(input,43,FOLLOW_43_in_parameter_type_list943); if (state.failed) return retval;

                    }
                    break;

            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 29, parameter_type_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "parameter_type_list"


    public static class parameter_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "parameter_list"
    // C.g:286:1: parameter_list : parameter_declaration ( ',' parameter_declaration )* ;
    public final CParser.parameter_list_return parameter_list() throws RecognitionException {
        CParser.parameter_list_return retval = new CParser.parameter_list_return();
        retval.start = input.LT(1);

        int parameter_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 30) ) { return retval; }

            // C.g:287:2: ( parameter_declaration ( ',' parameter_declaration )* )
            // C.g:287:4: parameter_declaration ( ',' parameter_declaration )*
            {
            pushFollow(FOLLOW_parameter_declaration_in_parameter_list956);
            parameter_declaration();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:287:26: ( ',' parameter_declaration )*
            loop35:
            do {
                int alt35=2;
                int LA35_0 = input.LA(1);

                if ( (LA35_0==37) ) {
                    int LA35_1 = input.LA(2);

                    if ( (LA35_1==IDENTIFIER||(LA35_1 >= 64 && LA35_1 <= 65)||LA35_1==67||(LA35_1 >= 70 && LA35_1 <= 71)||LA35_1==75||(LA35_1 >= 77 && LA35_1 <= 79)||(LA35_1 >= 83 && LA35_1 <= 85)||(LA35_1 >= 87 && LA35_1 <= 88)||(LA35_1 >= 90 && LA35_1 <= 91)||(LA35_1 >= 94 && LA35_1 <= 97)) ) {
                        alt35=1;
                    }


                }


                switch (alt35) {
            	case 1 :
            	    // C.g:287:27: ',' parameter_declaration
            	    {
            	    match(input,37,FOLLOW_37_in_parameter_list959); if (state.failed) return retval;

            	    pushFollow(FOLLOW_parameter_declaration_in_parameter_list961);
            	    parameter_declaration();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop35;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 30, parameter_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "parameter_list"


    public static class parameter_declaration_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "parameter_declaration"
    // C.g:290:1: parameter_declaration : declaration_specifiers ( declarator | abstract_declarator )* ;
    public final CParser.parameter_declaration_return parameter_declaration() throws RecognitionException {
        CParser.parameter_declaration_return retval = new CParser.parameter_declaration_return();
        retval.start = input.LT(1);

        int parameter_declaration_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 31) ) { return retval; }

            // C.g:291:2: ( declaration_specifiers ( declarator | abstract_declarator )* )
            // C.g:291:4: declaration_specifiers ( declarator | abstract_declarator )*
            {
            pushFollow(FOLLOW_declaration_specifiers_in_parameter_declaration974);
            declaration_specifiers();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:291:27: ( declarator | abstract_declarator )*
            loop36:
            do {
                int alt36=3;
                switch ( input.LA(1) ) {
                case 32:
                    {
                    int LA36_4 = input.LA(2);

                    if ( (synpred65_C()) ) {
                        alt36=1;
                    }
                    else if ( (synpred66_C()) ) {
                        alt36=2;
                    }


                    }
                    break;
                case IDENTIFIER:
                    {
                    alt36=1;
                    }
                    break;
                case 30:
                    {
                    switch ( input.LA(2) ) {
                    case 31:
                    case 59:
                    case 64:
                    case 65:
                    case 67:
                    case 70:
                    case 71:
                    case 75:
                    case 77:
                    case 78:
                    case 79:
                    case 83:
                    case 84:
                    case 85:
                    case 87:
                    case 88:
                    case 90:
                    case 91:
                    case 94:
                    case 95:
                    case 96:
                    case 97:
                        {
                        alt36=2;
                        }
                        break;
                    case 32:
                        {
                        int LA36_17 = input.LA(3);

                        if ( (synpred65_C()) ) {
                            alt36=1;
                        }
                        else if ( (synpred66_C()) ) {
                            alt36=2;
                        }


                        }
                        break;
                    case IDENTIFIER:
                        {
                        int LA36_18 = input.LA(3);

                        if ( (synpred65_C()) ) {
                            alt36=1;
                        }
                        else if ( (synpred66_C()) ) {
                            alt36=2;
                        }


                        }
                        break;
                    case 30:
                        {
                        int LA36_19 = input.LA(3);

                        if ( (synpred65_C()) ) {
                            alt36=1;
                        }
                        else if ( (synpred66_C()) ) {
                            alt36=2;
                        }


                        }
                        break;

                    }

                    }
                    break;
                case 59:
                    {
                    alt36=2;
                    }
                    break;

                }

                switch (alt36) {
            	case 1 :
            	    // C.g:291:28: declarator
            	    {
            	    pushFollow(FOLLOW_declarator_in_parameter_declaration977);
            	    declarator();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;
            	case 2 :
            	    // C.g:291:39: abstract_declarator
            	    {
            	    pushFollow(FOLLOW_abstract_declarator_in_parameter_declaration979);
            	    abstract_declarator();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop36;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 31, parameter_declaration_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "parameter_declaration"


    public static class identifier_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "identifier_list"
    // C.g:294:1: identifier_list : IDENTIFIER ( ',' IDENTIFIER )* ;
    public final CParser.identifier_list_return identifier_list() throws RecognitionException {
        CParser.identifier_list_return retval = new CParser.identifier_list_return();
        retval.start = input.LT(1);

        int identifier_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 32) ) { return retval; }

            // C.g:295:2: ( IDENTIFIER ( ',' IDENTIFIER )* )
            // C.g:295:4: IDENTIFIER ( ',' IDENTIFIER )*
            {
            match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_identifier_list992); if (state.failed) return retval;

            // C.g:295:15: ( ',' IDENTIFIER )*
            loop37:
            do {
                int alt37=2;
                int LA37_0 = input.LA(1);

                if ( (LA37_0==37) ) {
                    alt37=1;
                }


                switch (alt37) {
            	case 1 :
            	    // C.g:295:16: ',' IDENTIFIER
            	    {
            	    match(input,37,FOLLOW_37_in_identifier_list995); if (state.failed) return retval;

            	    match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_identifier_list997); if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop37;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 32, identifier_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "identifier_list"


    public static class type_name_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "type_name"
    // C.g:298:1: type_name : specifier_qualifier_list ( abstract_declarator )? ;
    public final CParser.type_name_return type_name() throws RecognitionException {
        CParser.type_name_return retval = new CParser.type_name_return();
        retval.start = input.LT(1);

        int type_name_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 33) ) { return retval; }

            // C.g:299:2: ( specifier_qualifier_list ( abstract_declarator )? )
            // C.g:299:4: specifier_qualifier_list ( abstract_declarator )?
            {
            pushFollow(FOLLOW_specifier_qualifier_list_in_type_name1010);
            specifier_qualifier_list();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:299:29: ( abstract_declarator )?
            int alt38=2;
            int LA38_0 = input.LA(1);

            if ( (LA38_0==30||LA38_0==32||LA38_0==59) ) {
                alt38=1;
            }
            switch (alt38) {
                case 1 :
                    // C.g:299:29: abstract_declarator
                    {
                    pushFollow(FOLLOW_abstract_declarator_in_type_name1012);
                    abstract_declarator();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 33, type_name_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "type_name"


    public static class abstract_declarator_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "abstract_declarator"
    // C.g:302:1: abstract_declarator : ( pointer ( direct_abstract_declarator )? | direct_abstract_declarator );
    public final CParser.abstract_declarator_return abstract_declarator() throws RecognitionException {
        CParser.abstract_declarator_return retval = new CParser.abstract_declarator_return();
        retval.start = input.LT(1);

        int abstract_declarator_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 34) ) { return retval; }

            // C.g:303:2: ( pointer ( direct_abstract_declarator )? | direct_abstract_declarator )
            int alt40=2;
            int LA40_0 = input.LA(1);

            if ( (LA40_0==32) ) {
                alt40=1;
            }
            else if ( (LA40_0==30||LA40_0==59) ) {
                alt40=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 40, 0, input);

                throw nvae;

            }
            switch (alt40) {
                case 1 :
                    // C.g:303:4: pointer ( direct_abstract_declarator )?
                    {
                    pushFollow(FOLLOW_pointer_in_abstract_declarator1024);
                    pointer();

                    state._fsp--;
                    if (state.failed) return retval;

                    // C.g:303:12: ( direct_abstract_declarator )?
                    int alt39=2;
                    int LA39_0 = input.LA(1);

                    if ( (LA39_0==30) ) {
                        switch ( input.LA(2) ) {
                            case 31:
                                {
                                int LA39_8 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 32:
                                {
                                int LA39_9 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 30:
                                {
                                int LA39_10 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 59:
                                {
                                int LA39_11 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 67:
                            case 78:
                            case 85:
                            case 90:
                                {
                                int LA39_12 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 96:
                                {
                                int LA39_13 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 70:
                                {
                                int LA39_14 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 87:
                                {
                                int LA39_15 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 83:
                                {
                                int LA39_16 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 84:
                                {
                                int LA39_17 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 79:
                                {
                                int LA39_18 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 75:
                                {
                                int LA39_19 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 88:
                                {
                                int LA39_20 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 95:
                                {
                                int LA39_21 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 64:
                                {
                                int LA39_22 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 91:
                            case 94:
                                {
                                int LA39_23 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 77:
                                {
                                int LA39_24 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case IDENTIFIER:
                                {
                                int LA39_25 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 65:
                            case 71:
                            case 97:
                                {
                                int LA39_26 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                        }

                    }
                    else if ( (LA39_0==59) ) {
                        switch ( input.LA(2) ) {
                            case 60:
                                {
                                int LA39_27 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 30:
                                {
                                int LA39_28 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case IDENTIFIER:
                                {
                                int LA39_29 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case CHARACTER_LITERAL:
                            case DECIMAL_LITERAL:
                            case FLOATING_POINT_LITERAL:
                            case HEX_LITERAL:
                            case OCTAL_LITERAL:
                            case STRING_LITERAL:
                                {
                                int LA39_30 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 35:
                                {
                                int LA39_31 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 39:
                                {
                                int LA39_32 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 23:
                            case 28:
                            case 32:
                            case 34:
                            case 38:
                            case 104:
                                {
                                int LA39_33 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                            case 89:
                                {
                                int LA39_34 = input.LA(3);

                                if ( (synpred69_C()) ) {
                                    alt39=1;
                                }
                                }
                                break;
                        }

                    }
                    switch (alt39) {
                        case 1 :
                            // C.g:303:12: direct_abstract_declarator
                            {
                            pushFollow(FOLLOW_direct_abstract_declarator_in_abstract_declarator1026);
                            direct_abstract_declarator();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    }
                    break;
                case 2 :
                    // C.g:304:4: direct_abstract_declarator
                    {
                    pushFollow(FOLLOW_direct_abstract_declarator_in_abstract_declarator1032);
                    direct_abstract_declarator();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 34, abstract_declarator_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "abstract_declarator"


    public static class direct_abstract_declarator_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "direct_abstract_declarator"
    // C.g:307:1: direct_abstract_declarator : ( '(' abstract_declarator ')' | abstract_declarator_suffix ) ( abstract_declarator_suffix )* ;
    public final CParser.direct_abstract_declarator_return direct_abstract_declarator() throws RecognitionException {
        CParser.direct_abstract_declarator_return retval = new CParser.direct_abstract_declarator_return();
        retval.start = input.LT(1);

        int direct_abstract_declarator_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 35) ) { return retval; }

            // C.g:308:2: ( ( '(' abstract_declarator ')' | abstract_declarator_suffix ) ( abstract_declarator_suffix )* )
            // C.g:308:4: ( '(' abstract_declarator ')' | abstract_declarator_suffix ) ( abstract_declarator_suffix )*
            {
            // C.g:308:4: ( '(' abstract_declarator ')' | abstract_declarator_suffix )
            int alt41=2;
            int LA41_0 = input.LA(1);

            if ( (LA41_0==30) ) {
                int LA41_1 = input.LA(2);

                if ( (LA41_1==IDENTIFIER||LA41_1==31||(LA41_1 >= 64 && LA41_1 <= 65)||LA41_1==67||(LA41_1 >= 70 && LA41_1 <= 71)||LA41_1==75||(LA41_1 >= 77 && LA41_1 <= 79)||(LA41_1 >= 83 && LA41_1 <= 85)||(LA41_1 >= 87 && LA41_1 <= 88)||(LA41_1 >= 90 && LA41_1 <= 91)||(LA41_1 >= 94 && LA41_1 <= 97)) ) {
                    alt41=2;
                }
                else if ( (LA41_1==30||LA41_1==32||LA41_1==59) ) {
                    alt41=1;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 41, 1, input);

                    throw nvae;

                }
            }
            else if ( (LA41_0==59) ) {
                alt41=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 41, 0, input);

                throw nvae;

            }
            switch (alt41) {
                case 1 :
                    // C.g:308:6: '(' abstract_declarator ')'
                    {
                    match(input,30,FOLLOW_30_in_direct_abstract_declarator1045); if (state.failed) return retval;

                    pushFollow(FOLLOW_abstract_declarator_in_direct_abstract_declarator1047);
                    abstract_declarator();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_direct_abstract_declarator1049); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:308:36: abstract_declarator_suffix
                    {
                    pushFollow(FOLLOW_abstract_declarator_suffix_in_direct_abstract_declarator1053);
                    abstract_declarator_suffix();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }


            // C.g:308:65: ( abstract_declarator_suffix )*
            loop42:
            do {
                int alt42=2;
                int LA42_0 = input.LA(1);

                if ( (LA42_0==30) ) {
                    switch ( input.LA(2) ) {
                    case 31:
                        {
                        int LA42_8 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case IDENTIFIER:
                        {
                        int LA42_10 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 67:
                    case 78:
                    case 85:
                    case 90:
                        {
                        int LA42_13 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 96:
                        {
                        int LA42_14 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 70:
                        {
                        int LA42_15 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 87:
                        {
                        int LA42_16 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 83:
                        {
                        int LA42_17 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 84:
                        {
                        int LA42_18 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 79:
                        {
                        int LA42_19 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 75:
                        {
                        int LA42_20 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 88:
                        {
                        int LA42_21 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 95:
                        {
                        int LA42_22 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 64:
                        {
                        int LA42_23 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 91:
                    case 94:
                        {
                        int LA42_24 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 77:
                        {
                        int LA42_25 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 65:
                    case 71:
                    case 97:
                        {
                        int LA42_26 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;

                    }

                }
                else if ( (LA42_0==59) ) {
                    switch ( input.LA(2) ) {
                    case 60:
                        {
                        int LA42_27 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 30:
                        {
                        int LA42_28 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case IDENTIFIER:
                        {
                        int LA42_29 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case CHARACTER_LITERAL:
                    case DECIMAL_LITERAL:
                    case FLOATING_POINT_LITERAL:
                    case HEX_LITERAL:
                    case OCTAL_LITERAL:
                    case STRING_LITERAL:
                        {
                        int LA42_30 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 35:
                        {
                        int LA42_31 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 39:
                        {
                        int LA42_32 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 23:
                    case 28:
                    case 32:
                    case 34:
                    case 38:
                    case 104:
                        {
                        int LA42_33 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;
                    case 89:
                        {
                        int LA42_34 = input.LA(3);

                        if ( (synpred72_C()) ) {
                            alt42=1;
                        }


                        }
                        break;

                    }

                }


                switch (alt42) {
            	case 1 :
            	    // C.g:308:65: abstract_declarator_suffix
            	    {
            	    pushFollow(FOLLOW_abstract_declarator_suffix_in_direct_abstract_declarator1057);
            	    abstract_declarator_suffix();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop42;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 35, direct_abstract_declarator_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "direct_abstract_declarator"


    public static class abstract_declarator_suffix_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "abstract_declarator_suffix"
    // C.g:311:1: abstract_declarator_suffix : ( '[' ']' | '[' constant_expression ']' | '(' ')' | '(' parameter_type_list ')' );
    public final CParser.abstract_declarator_suffix_return abstract_declarator_suffix() throws RecognitionException {
        CParser.abstract_declarator_suffix_return retval = new CParser.abstract_declarator_suffix_return();
        retval.start = input.LT(1);

        int abstract_declarator_suffix_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 36) ) { return retval; }

            // C.g:312:2: ( '[' ']' | '[' constant_expression ']' | '(' ')' | '(' parameter_type_list ')' )
            int alt43=4;
            int LA43_0 = input.LA(1);

            if ( (LA43_0==59) ) {
                int LA43_1 = input.LA(2);

                if ( (LA43_1==60) ) {
                    alt43=1;
                }
                else if ( (LA43_1==CHARACTER_LITERAL||LA43_1==DECIMAL_LITERAL||LA43_1==FLOATING_POINT_LITERAL||LA43_1==HEX_LITERAL||LA43_1==IDENTIFIER||LA43_1==OCTAL_LITERAL||LA43_1==STRING_LITERAL||LA43_1==23||LA43_1==28||LA43_1==30||LA43_1==32||(LA43_1 >= 34 && LA43_1 <= 35)||(LA43_1 >= 38 && LA43_1 <= 39)||LA43_1==89||LA43_1==104) ) {
                    alt43=2;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 43, 1, input);

                    throw nvae;

                }
            }
            else if ( (LA43_0==30) ) {
                int LA43_2 = input.LA(2);

                if ( (LA43_2==31) ) {
                    alt43=3;
                }
                else if ( (LA43_2==IDENTIFIER||(LA43_2 >= 64 && LA43_2 <= 65)||LA43_2==67||(LA43_2 >= 70 && LA43_2 <= 71)||LA43_2==75||(LA43_2 >= 77 && LA43_2 <= 79)||(LA43_2 >= 83 && LA43_2 <= 85)||(LA43_2 >= 87 && LA43_2 <= 88)||(LA43_2 >= 90 && LA43_2 <= 91)||(LA43_2 >= 94 && LA43_2 <= 97)) ) {
                    alt43=4;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 43, 2, input);

                    throw nvae;

                }
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 43, 0, input);

                throw nvae;

            }
            switch (alt43) {
                case 1 :
                    // C.g:312:4: '[' ']'
                    {
                    match(input,59,FOLLOW_59_in_abstract_declarator_suffix1069); if (state.failed) return retval;

                    match(input,60,FOLLOW_60_in_abstract_declarator_suffix1071); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:313:4: '[' constant_expression ']'
                    {
                    match(input,59,FOLLOW_59_in_abstract_declarator_suffix1076); if (state.failed) return retval;

                    pushFollow(FOLLOW_constant_expression_in_abstract_declarator_suffix1078);
                    constant_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,60,FOLLOW_60_in_abstract_declarator_suffix1080); if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:314:4: '(' ')'
                    {
                    match(input,30,FOLLOW_30_in_abstract_declarator_suffix1085); if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_abstract_declarator_suffix1087); if (state.failed) return retval;

                    }
                    break;
                case 4 :
                    // C.g:315:4: '(' parameter_type_list ')'
                    {
                    match(input,30,FOLLOW_30_in_abstract_declarator_suffix1092); if (state.failed) return retval;

                    pushFollow(FOLLOW_parameter_type_list_in_abstract_declarator_suffix1094);
                    parameter_type_list();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_abstract_declarator_suffix1096); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 36, abstract_declarator_suffix_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "abstract_declarator_suffix"


    public static class initializer_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "initializer"
    // C.g:318:1: initializer : ( assignment_expression | '{' initializer_list ( ',' )? '}' );
    public final CParser.initializer_return initializer() throws RecognitionException {
        CParser.initializer_return retval = new CParser.initializer_return();
        retval.start = input.LT(1);

        int initializer_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 37) ) { return retval; }

            // C.g:319:2: ( assignment_expression | '{' initializer_list ( ',' )? '}' )
            int alt45=2;
            int LA45_0 = input.LA(1);

            if ( (LA45_0==CHARACTER_LITERAL||LA45_0==DECIMAL_LITERAL||LA45_0==FLOATING_POINT_LITERAL||LA45_0==HEX_LITERAL||LA45_0==IDENTIFIER||LA45_0==OCTAL_LITERAL||LA45_0==STRING_LITERAL||LA45_0==23||LA45_0==28||LA45_0==30||LA45_0==32||(LA45_0 >= 34 && LA45_0 <= 35)||(LA45_0 >= 38 && LA45_0 <= 39)||LA45_0==89||LA45_0==104) ) {
                alt45=1;
            }
            else if ( (LA45_0==99) ) {
                alt45=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 45, 0, input);

                throw nvae;

            }
            switch (alt45) {
                case 1 :
                    // C.g:319:4: assignment_expression
                    {
                    pushFollow(FOLLOW_assignment_expression_in_initializer1108);
                    assignment_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:320:4: '{' initializer_list ( ',' )? '}'
                    {
                    match(input,99,FOLLOW_99_in_initializer1113); if (state.failed) return retval;

                    pushFollow(FOLLOW_initializer_list_in_initializer1115);
                    initializer_list();

                    state._fsp--;
                    if (state.failed) return retval;

                    // C.g:320:25: ( ',' )?
                    int alt44=2;
                    int LA44_0 = input.LA(1);

                    if ( (LA44_0==37) ) {
                        alt44=1;
                    }
                    switch (alt44) {
                        case 1 :
                            // C.g:320:25: ','
                            {
                            match(input,37,FOLLOW_37_in_initializer1117); if (state.failed) return retval;

                            }
                            break;

                    }


                    match(input,103,FOLLOW_103_in_initializer1120); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 37, initializer_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "initializer"


    public static class initializer_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "initializer_list"
    // C.g:323:1: initializer_list : initializer ( ',' initializer )* ;
    public final CParser.initializer_list_return initializer_list() throws RecognitionException {
        CParser.initializer_list_return retval = new CParser.initializer_list_return();
        retval.start = input.LT(1);

        int initializer_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 38) ) { return retval; }

            // C.g:324:2: ( initializer ( ',' initializer )* )
            // C.g:324:4: initializer ( ',' initializer )*
            {
            pushFollow(FOLLOW_initializer_in_initializer_list1131);
            initializer();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:324:16: ( ',' initializer )*
            loop46:
            do {
                int alt46=2;
                int LA46_0 = input.LA(1);

                if ( (LA46_0==37) ) {
                    int LA46_1 = input.LA(2);

                    if ( (LA46_1==CHARACTER_LITERAL||LA46_1==DECIMAL_LITERAL||LA46_1==FLOATING_POINT_LITERAL||LA46_1==HEX_LITERAL||LA46_1==IDENTIFIER||LA46_1==OCTAL_LITERAL||LA46_1==STRING_LITERAL||LA46_1==23||LA46_1==28||LA46_1==30||LA46_1==32||(LA46_1 >= 34 && LA46_1 <= 35)||(LA46_1 >= 38 && LA46_1 <= 39)||LA46_1==89||LA46_1==99||LA46_1==104) ) {
                        alt46=1;
                    }


                }


                switch (alt46) {
            	case 1 :
            	    // C.g:324:17: ',' initializer
            	    {
            	    match(input,37,FOLLOW_37_in_initializer_list1134); if (state.failed) return retval;

            	    pushFollow(FOLLOW_initializer_in_initializer_list1136);
            	    initializer();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop46;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 38, initializer_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "initializer_list"


    public static class argument_expression_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "argument_expression_list"
    // C.g:329:1: argument_expression_list : assignment_expression ( ',' assignment_expression )* ;
    public final CParser.argument_expression_list_return argument_expression_list() throws RecognitionException {
        CParser.argument_expression_list_return retval = new CParser.argument_expression_list_return();
        retval.start = input.LT(1);

        int argument_expression_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 39) ) { return retval; }

            // C.g:330:2: ( assignment_expression ( ',' assignment_expression )* )
            // C.g:330:4: assignment_expression ( ',' assignment_expression )*
            {
            pushFollow(FOLLOW_assignment_expression_in_argument_expression_list1151);
            assignment_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:330:26: ( ',' assignment_expression )*
            loop47:
            do {
                int alt47=2;
                int LA47_0 = input.LA(1);

                if ( (LA47_0==37) ) {
                    alt47=1;
                }


                switch (alt47) {
            	case 1 :
            	    // C.g:330:27: ',' assignment_expression
            	    {
            	    match(input,37,FOLLOW_37_in_argument_expression_list1154); if (state.failed) return retval;

            	    pushFollow(FOLLOW_assignment_expression_in_argument_expression_list1156);
            	    assignment_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop47;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 39, argument_expression_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "argument_expression_list"


    public static class additive_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "additive_expression"
    // C.g:333:1: additive_expression : ( multiplicative_expression ) ( '+' multiplicative_expression | '-' multiplicative_expression )* ;
    public final CParser.additive_expression_return additive_expression() throws RecognitionException {
        CParser.additive_expression_return retval = new CParser.additive_expression_return();
        retval.start = input.LT(1);

        int additive_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 40) ) { return retval; }

            // C.g:334:2: ( ( multiplicative_expression ) ( '+' multiplicative_expression | '-' multiplicative_expression )* )
            // C.g:334:4: ( multiplicative_expression ) ( '+' multiplicative_expression | '-' multiplicative_expression )*
            {
            // C.g:334:4: ( multiplicative_expression )
            // C.g:334:5: multiplicative_expression
            {
            pushFollow(FOLLOW_multiplicative_expression_in_additive_expression1170);
            multiplicative_expression();

            state._fsp--;
            if (state.failed) return retval;

            }


            // C.g:334:32: ( '+' multiplicative_expression | '-' multiplicative_expression )*
            loop48:
            do {
                int alt48=3;
                int LA48_0 = input.LA(1);

                if ( (LA48_0==34) ) {
                    alt48=1;
                }
                else if ( (LA48_0==38) ) {
                    alt48=2;
                }


                switch (alt48) {
            	case 1 :
            	    // C.g:334:33: '+' multiplicative_expression
            	    {
            	    match(input,34,FOLLOW_34_in_additive_expression1174); if (state.failed) return retval;

            	    pushFollow(FOLLOW_multiplicative_expression_in_additive_expression1176);
            	    multiplicative_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;
            	case 2 :
            	    // C.g:334:65: '-' multiplicative_expression
            	    {
            	    match(input,38,FOLLOW_38_in_additive_expression1180); if (state.failed) return retval;

            	    pushFollow(FOLLOW_multiplicative_expression_in_additive_expression1182);
            	    multiplicative_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop48;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 40, additive_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "additive_expression"


    public static class multiplicative_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "multiplicative_expression"
    // C.g:337:1: multiplicative_expression : ( cast_expression ) ( '*' cast_expression | '/' cast_expression | '%' cast_expression )* ;
    public final CParser.multiplicative_expression_return multiplicative_expression() throws RecognitionException {
        CParser.multiplicative_expression_return retval = new CParser.multiplicative_expression_return();
        retval.start = input.LT(1);

        int multiplicative_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 41) ) { return retval; }

            // C.g:338:2: ( ( cast_expression ) ( '*' cast_expression | '/' cast_expression | '%' cast_expression )* )
            // C.g:338:4: ( cast_expression ) ( '*' cast_expression | '/' cast_expression | '%' cast_expression )*
            {
            // C.g:338:4: ( cast_expression )
            // C.g:338:5: cast_expression
            {
            pushFollow(FOLLOW_cast_expression_in_multiplicative_expression1196);
            cast_expression();

            state._fsp--;
            if (state.failed) return retval;

            }


            // C.g:338:22: ( '*' cast_expression | '/' cast_expression | '%' cast_expression )*
            loop49:
            do {
                int alt49=4;
                switch ( input.LA(1) ) {
                case 32:
                    {
                    alt49=1;
                    }
                    break;
                case 44:
                    {
                    alt49=2;
                    }
                    break;
                case 25:
                    {
                    alt49=3;
                    }
                    break;

                }

                switch (alt49) {
            	case 1 :
            	    // C.g:338:23: '*' cast_expression
            	    {
            	    match(input,32,FOLLOW_32_in_multiplicative_expression1200); if (state.failed) return retval;

            	    pushFollow(FOLLOW_cast_expression_in_multiplicative_expression1202);
            	    cast_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;
            	case 2 :
            	    // C.g:338:45: '/' cast_expression
            	    {
            	    match(input,44,FOLLOW_44_in_multiplicative_expression1206); if (state.failed) return retval;

            	    pushFollow(FOLLOW_cast_expression_in_multiplicative_expression1208);
            	    cast_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;
            	case 3 :
            	    // C.g:338:67: '%' cast_expression
            	    {
            	    match(input,25,FOLLOW_25_in_multiplicative_expression1212); if (state.failed) return retval;

            	    pushFollow(FOLLOW_cast_expression_in_multiplicative_expression1214);
            	    cast_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop49;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 41, multiplicative_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "multiplicative_expression"


    public static class cast_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "cast_expression"
    // C.g:341:1: cast_expression : ( '(' type_name ')' cast_expression | unary_expression );
    public final CParser.cast_expression_return cast_expression() throws RecognitionException {
        CParser.cast_expression_return retval = new CParser.cast_expression_return();
        retval.start = input.LT(1);

        int cast_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 42) ) { return retval; }

            // C.g:342:2: ( '(' type_name ')' cast_expression | unary_expression )
            int alt50=2;
            int LA50_0 = input.LA(1);

            if ( (LA50_0==30) ) {
                switch ( input.LA(2) ) {
                case 64:
                case 65:
                case 70:
                case 71:
                case 75:
                case 77:
                case 79:
                case 83:
                case 84:
                case 87:
                case 88:
                case 91:
                case 94:
                case 95:
                case 96:
                case 97:
                    {
                    alt50=1;
                    }
                    break;
                case IDENTIFIER:
                    {
                    int LA50_21 = input.LA(3);

                    if ( (synpred85_C()) ) {
                        alt50=1;
                    }
                    else if ( (true) ) {
                        alt50=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 50, 21, input);

                        throw nvae;

                    }
                    }
                    break;
                case CHARACTER_LITERAL:
                case DECIMAL_LITERAL:
                case FLOATING_POINT_LITERAL:
                case HEX_LITERAL:
                case OCTAL_LITERAL:
                case STRING_LITERAL:
                case 23:
                case 28:
                case 30:
                case 32:
                case 34:
                case 35:
                case 38:
                case 39:
                case 89:
                case 104:
                    {
                    alt50=2;
                    }
                    break;
                default:
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 50, 1, input);

                    throw nvae;

                }

            }
            else if ( (LA50_0==CHARACTER_LITERAL||LA50_0==DECIMAL_LITERAL||LA50_0==FLOATING_POINT_LITERAL||LA50_0==HEX_LITERAL||LA50_0==IDENTIFIER||LA50_0==OCTAL_LITERAL||LA50_0==STRING_LITERAL||LA50_0==23||LA50_0==28||LA50_0==32||(LA50_0 >= 34 && LA50_0 <= 35)||(LA50_0 >= 38 && LA50_0 <= 39)||LA50_0==89||LA50_0==104) ) {
                alt50=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 50, 0, input);

                throw nvae;

            }
            switch (alt50) {
                case 1 :
                    // C.g:342:4: '(' type_name ')' cast_expression
                    {
                    match(input,30,FOLLOW_30_in_cast_expression1227); if (state.failed) return retval;

                    pushFollow(FOLLOW_type_name_in_cast_expression1229);
                    type_name();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_cast_expression1231); if (state.failed) return retval;

                    pushFollow(FOLLOW_cast_expression_in_cast_expression1233);
                    cast_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:343:4: unary_expression
                    {
                    pushFollow(FOLLOW_unary_expression_in_cast_expression1238);
                    unary_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 42, cast_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "cast_expression"


    public static class unary_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "unary_expression"
    // C.g:346:1: unary_expression : ( postfix_expression | '++' unary_expression | '--' unary_expression | unary_operator cast_expression | 'sizeof' unary_expression | 'sizeof' '(' type_name ')' );
    public final CParser.unary_expression_return unary_expression() throws RecognitionException {
        CParser.unary_expression_return retval = new CParser.unary_expression_return();
        retval.start = input.LT(1);

        int unary_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 43) ) { return retval; }

            // C.g:347:2: ( postfix_expression | '++' unary_expression | '--' unary_expression | unary_operator cast_expression | 'sizeof' unary_expression | 'sizeof' '(' type_name ')' )
            int alt51=6;
            switch ( input.LA(1) ) {
            case CHARACTER_LITERAL:
            case DECIMAL_LITERAL:
            case FLOATING_POINT_LITERAL:
            case HEX_LITERAL:
            case IDENTIFIER:
            case OCTAL_LITERAL:
            case STRING_LITERAL:
            case 30:
                {
                alt51=1;
                }
                break;
            case 35:
                {
                alt51=2;
                }
                break;
            case 39:
                {
                alt51=3;
                }
                break;
            case 23:
            case 28:
            case 32:
            case 34:
            case 38:
            case 104:
                {
                alt51=4;
                }
                break;
            case 89:
                {
                int LA51_7 = input.LA(2);

                if ( (LA51_7==30) ) {
                    int LA51_8 = input.LA(3);

                    if ( (synpred90_C()) ) {
                        alt51=5;
                    }
                    else if ( (true) ) {
                        alt51=6;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 51, 8, input);

                        throw nvae;

                    }
                }
                else if ( (LA51_7==CHARACTER_LITERAL||LA51_7==DECIMAL_LITERAL||LA51_7==FLOATING_POINT_LITERAL||LA51_7==HEX_LITERAL||LA51_7==IDENTIFIER||LA51_7==OCTAL_LITERAL||LA51_7==STRING_LITERAL||LA51_7==23||LA51_7==28||LA51_7==32||(LA51_7 >= 34 && LA51_7 <= 35)||(LA51_7 >= 38 && LA51_7 <= 39)||LA51_7==89||LA51_7==104) ) {
                    alt51=5;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 51, 7, input);

                    throw nvae;

                }
                }
                break;
            default:
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 51, 0, input);

                throw nvae;

            }

            switch (alt51) {
                case 1 :
                    // C.g:347:4: postfix_expression
                    {
                    pushFollow(FOLLOW_postfix_expression_in_unary_expression1249);
                    postfix_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:348:4: '++' unary_expression
                    {
                    match(input,35,FOLLOW_35_in_unary_expression1254); if (state.failed) return retval;

                    pushFollow(FOLLOW_unary_expression_in_unary_expression1256);
                    unary_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:349:4: '--' unary_expression
                    {
                    match(input,39,FOLLOW_39_in_unary_expression1261); if (state.failed) return retval;

                    pushFollow(FOLLOW_unary_expression_in_unary_expression1263);
                    unary_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 4 :
                    // C.g:350:4: unary_operator cast_expression
                    {
                    pushFollow(FOLLOW_unary_operator_in_unary_expression1268);
                    unary_operator();

                    state._fsp--;
                    if (state.failed) return retval;

                    pushFollow(FOLLOW_cast_expression_in_unary_expression1270);
                    cast_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 5 :
                    // C.g:351:4: 'sizeof' unary_expression
                    {
                    match(input,89,FOLLOW_89_in_unary_expression1275); if (state.failed) return retval;

                    pushFollow(FOLLOW_unary_expression_in_unary_expression1277);
                    unary_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 6 :
                    // C.g:352:4: 'sizeof' '(' type_name ')'
                    {
                    match(input,89,FOLLOW_89_in_unary_expression1282); if (state.failed) return retval;

                    match(input,30,FOLLOW_30_in_unary_expression1284); if (state.failed) return retval;

                    pushFollow(FOLLOW_type_name_in_unary_expression1286);
                    type_name();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_unary_expression1288); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 43, unary_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "unary_expression"


    public static class mulitline_string_literals_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "mulitline_string_literals"
    // C.g:355:1: mulitline_string_literals : ( STRING_LITERAL )* ;
    public final CParser.mulitline_string_literals_return mulitline_string_literals() throws RecognitionException {
        CParser.mulitline_string_literals_return retval = new CParser.mulitline_string_literals_return();
        retval.start = input.LT(1);

        int mulitline_string_literals_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 44) ) { return retval; }

            // C.g:356:2: ( ( STRING_LITERAL )* )
            // C.g:356:4: ( STRING_LITERAL )*
            {
            // C.g:356:4: ( STRING_LITERAL )*
            loop52:
            do {
                int alt52=2;
                int LA52_0 = input.LA(1);

                if ( (LA52_0==STRING_LITERAL) ) {
                    alt52=1;
                }


                switch (alt52) {
            	case 1 :
            	    // C.g:356:4: STRING_LITERAL
            	    {
            	    match(input,STRING_LITERAL,FOLLOW_STRING_LITERAL_in_mulitline_string_literals1299); if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop52;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 44, mulitline_string_literals_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "mulitline_string_literals"


    public static class postfix_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "postfix_expression"
    // C.g:359:1: postfix_expression : primary_expression ( '[' expression ']' | '(' ')' | '(' argument_expression_list ')' | '.' IDENTIFIER | '->' IDENTIFIER | '++' | '--' )* ;
    public final CParser.postfix_expression_return postfix_expression() throws RecognitionException {
        CParser.postfix_expression_return retval = new CParser.postfix_expression_return();
        retval.start = input.LT(1);

        int postfix_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 45) ) { return retval; }

            // C.g:360:2: ( primary_expression ( '[' expression ']' | '(' ')' | '(' argument_expression_list ')' | '.' IDENTIFIER | '->' IDENTIFIER | '++' | '--' )* )
            // C.g:360:6: primary_expression ( '[' expression ']' | '(' ')' | '(' argument_expression_list ')' | '.' IDENTIFIER | '->' IDENTIFIER | '++' | '--' )*
            {
            pushFollow(FOLLOW_primary_expression_in_postfix_expression1314);
            primary_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:361:9: ( '[' expression ']' | '(' ')' | '(' argument_expression_list ')' | '.' IDENTIFIER | '->' IDENTIFIER | '++' | '--' )*
            loop53:
            do {
                int alt53=8;
                switch ( input.LA(1) ) {
                case 59:
                    {
                    alt53=1;
                    }
                    break;
                case 30:
                    {
                    int LA53_25 = input.LA(2);

                    if ( (LA53_25==31) ) {
                        alt53=2;
                    }
                    else if ( (LA53_25==CHARACTER_LITERAL||LA53_25==DECIMAL_LITERAL||LA53_25==FLOATING_POINT_LITERAL||LA53_25==HEX_LITERAL||LA53_25==IDENTIFIER||LA53_25==OCTAL_LITERAL||LA53_25==STRING_LITERAL||LA53_25==23||LA53_25==28||LA53_25==30||LA53_25==32||(LA53_25 >= 34 && LA53_25 <= 35)||(LA53_25 >= 38 && LA53_25 <= 39)||LA53_25==89||LA53_25==104) ) {
                        alt53=3;
                    }


                    }
                    break;
                case 42:
                    {
                    alt53=4;
                    }
                    break;
                case 41:
                    {
                    alt53=5;
                    }
                    break;
                case 35:
                    {
                    alt53=6;
                    }
                    break;
                case 39:
                    {
                    alt53=7;
                    }
                    break;

                }

                switch (alt53) {
            	case 1 :
            	    // C.g:361:13: '[' expression ']'
            	    {
            	    match(input,59,FOLLOW_59_in_postfix_expression1328); if (state.failed) return retval;

            	    pushFollow(FOLLOW_expression_in_postfix_expression1330);
            	    expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    match(input,60,FOLLOW_60_in_postfix_expression1332); if (state.failed) return retval;

            	    }
            	    break;
            	case 2 :
            	    // C.g:362:13: '(' ')'
            	    {
            	    match(input,30,FOLLOW_30_in_postfix_expression1346); if (state.failed) return retval;

            	    match(input,31,FOLLOW_31_in_postfix_expression1348); if (state.failed) return retval;

            	    }
            	    break;
            	case 3 :
            	    // C.g:363:13: '(' argument_expression_list ')'
            	    {
            	    match(input,30,FOLLOW_30_in_postfix_expression1362); if (state.failed) return retval;

            	    pushFollow(FOLLOW_argument_expression_list_in_postfix_expression1364);
            	    argument_expression_list();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    match(input,31,FOLLOW_31_in_postfix_expression1366); if (state.failed) return retval;

            	    }
            	    break;
            	case 4 :
            	    // C.g:364:13: '.' IDENTIFIER
            	    {
            	    match(input,42,FOLLOW_42_in_postfix_expression1380); if (state.failed) return retval;

            	    match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_postfix_expression1382); if (state.failed) return retval;

            	    }
            	    break;
            	case 5 :
            	    // C.g:365:13: '->' IDENTIFIER
            	    {
            	    match(input,41,FOLLOW_41_in_postfix_expression1396); if (state.failed) return retval;

            	    match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_postfix_expression1398); if (state.failed) return retval;

            	    }
            	    break;
            	case 6 :
            	    // C.g:366:13: '++'
            	    {
            	    match(input,35,FOLLOW_35_in_postfix_expression1412); if (state.failed) return retval;

            	    }
            	    break;
            	case 7 :
            	    // C.g:367:13: '--'
            	    {
            	    match(input,39,FOLLOW_39_in_postfix_expression1426); if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop53;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 45, postfix_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "postfix_expression"


    public static class unary_operator_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "unary_operator"
    // C.g:371:1: unary_operator : ( '&' | '*' | '+' | '-' | '~' | '!' );
    public final CParser.unary_operator_return unary_operator() throws RecognitionException {
        CParser.unary_operator_return retval = new CParser.unary_operator_return();
        retval.start = input.LT(1);

        int unary_operator_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 46) ) { return retval; }

            // C.g:372:2: ( '&' | '*' | '+' | '-' | '~' | '!' )
            // C.g:
            {
            if ( input.LA(1)==23||input.LA(1)==28||input.LA(1)==32||input.LA(1)==34||input.LA(1)==38||input.LA(1)==104 ) {
                input.consume();
                state.errorRecovery=false;
                state.failed=false;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                MismatchedSetException mse = new MismatchedSetException(null,input);
                throw mse;
            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 46, unary_operator_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "unary_operator"


    public static class primary_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "primary_expression"
    // C.g:380:1: primary_expression : ( IDENTIFIER | constant | '(' expression ')' );
    public final CParser.primary_expression_return primary_expression() throws RecognitionException {
        CParser.primary_expression_return retval = new CParser.primary_expression_return();
        retval.start = input.LT(1);

        int primary_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 47) ) { return retval; }

            // C.g:381:2: ( IDENTIFIER | constant | '(' expression ')' )
            int alt54=3;
            switch ( input.LA(1) ) {
            case IDENTIFIER:
                {
                alt54=1;
                }
                break;
            case CHARACTER_LITERAL:
            case DECIMAL_LITERAL:
            case FLOATING_POINT_LITERAL:
            case HEX_LITERAL:
            case OCTAL_LITERAL:
            case STRING_LITERAL:
                {
                alt54=2;
                }
                break;
            case 30:
                {
                alt54=3;
                }
                break;
            default:
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 54, 0, input);

                throw nvae;

            }

            switch (alt54) {
                case 1 :
                    // C.g:381:4: IDENTIFIER
                    {
                    match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_primary_expression1484); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:382:4: constant
                    {
                    pushFollow(FOLLOW_constant_in_primary_expression1489);
                    constant();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:383:4: '(' expression ')'
                    {
                    match(input,30,FOLLOW_30_in_primary_expression1494); if (state.failed) return retval;

                    pushFollow(FOLLOW_expression_in_primary_expression1496);
                    expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_primary_expression1498); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 47, primary_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "primary_expression"


    public static class constant_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "constant"
    // C.g:386:1: constant : ( HEX_LITERAL | OCTAL_LITERAL | DECIMAL_LITERAL | CHARACTER_LITERAL | STRING_LITERAL | FLOATING_POINT_LITERAL );
    public final CParser.constant_return constant() throws RecognitionException {
        CParser.constant_return retval = new CParser.constant_return();
        retval.start = input.LT(1);

        int constant_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 48) ) { return retval; }

            // C.g:387:5: ( HEX_LITERAL | OCTAL_LITERAL | DECIMAL_LITERAL | CHARACTER_LITERAL | STRING_LITERAL | FLOATING_POINT_LITERAL )
            // C.g:
            {
            if ( input.LA(1)==CHARACTER_LITERAL||input.LA(1)==DECIMAL_LITERAL||input.LA(1)==FLOATING_POINT_LITERAL||input.LA(1)==HEX_LITERAL||input.LA(1)==OCTAL_LITERAL||input.LA(1)==STRING_LITERAL ) {
                input.consume();
                state.errorRecovery=false;
                state.failed=false;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                MismatchedSetException mse = new MismatchedSetException(null,input);
                throw mse;
            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 48, constant_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "constant"


    public static class expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "expression"
    // C.g:395:1: expression : assignment_expression ( ',' assignment_expression )* ;
    public final CParser.expression_return expression() throws RecognitionException {
        CParser.expression_return retval = new CParser.expression_return();
        retval.start = input.LT(1);

        int expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 49) ) { return retval; }

            // C.g:396:2: ( assignment_expression ( ',' assignment_expression )* )
            // C.g:396:4: assignment_expression ( ',' assignment_expression )*
            {
            pushFollow(FOLLOW_assignment_expression_in_expression1571);
            assignment_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:396:26: ( ',' assignment_expression )*
            loop55:
            do {
                int alt55=2;
                int LA55_0 = input.LA(1);

                if ( (LA55_0==37) ) {
                    alt55=1;
                }


                switch (alt55) {
            	case 1 :
            	    // C.g:396:27: ',' assignment_expression
            	    {
            	    match(input,37,FOLLOW_37_in_expression1574); if (state.failed) return retval;

            	    pushFollow(FOLLOW_assignment_expression_in_expression1576);
            	    assignment_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop55;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 49, expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "expression"


    public static class constant_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "constant_expression"
    // C.g:399:1: constant_expression : conditional_expression ;
    public final CParser.constant_expression_return constant_expression() throws RecognitionException {
        CParser.constant_expression_return retval = new CParser.constant_expression_return();
        retval.start = input.LT(1);

        int constant_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 50) ) { return retval; }

            // C.g:400:2: ( conditional_expression )
            // C.g:400:4: conditional_expression
            {
            pushFollow(FOLLOW_conditional_expression_in_constant_expression1589);
            conditional_expression();

            state._fsp--;
            if (state.failed) return retval;

            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 50, constant_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "constant_expression"


    public static class assignment_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "assignment_expression"
    // C.g:403:1: assignment_expression : ( lvalue assignment_operator assignment_expression | conditional_expression );
    public final CParser.assignment_expression_return assignment_expression() throws RecognitionException {
        CParser.assignment_expression_return retval = new CParser.assignment_expression_return();
        retval.start = input.LT(1);

        int assignment_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 51) ) { return retval; }

            // C.g:404:2: ( lvalue assignment_operator assignment_expression | conditional_expression )
            int alt56=2;
            alt56 = dfa56.predict(input);
            switch (alt56) {
                case 1 :
                    // C.g:404:4: lvalue assignment_operator assignment_expression
                    {
                    pushFollow(FOLLOW_lvalue_in_assignment_expression1600);
                    lvalue();

                    state._fsp--;
                    if (state.failed) return retval;

                    pushFollow(FOLLOW_assignment_operator_in_assignment_expression1602);
                    assignment_operator();

                    state._fsp--;
                    if (state.failed) return retval;

                    pushFollow(FOLLOW_assignment_expression_in_assignment_expression1604);
                    assignment_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:405:4: conditional_expression
                    {
                    pushFollow(FOLLOW_conditional_expression_in_assignment_expression1609);
                    conditional_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 51, assignment_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "assignment_expression"


    public static class lvalue_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "lvalue"
    // C.g:408:1: lvalue : unary_expression ;
    public final CParser.lvalue_return lvalue() throws RecognitionException {
        CParser.lvalue_return retval = new CParser.lvalue_return();
        retval.start = input.LT(1);

        int lvalue_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 52) ) { return retval; }

            // C.g:409:2: ( unary_expression )
            // C.g:409:4: unary_expression
            {
            pushFollow(FOLLOW_unary_expression_in_lvalue1621);
            unary_expression();

            state._fsp--;
            if (state.failed) return retval;

            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 52, lvalue_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "lvalue"


    public static class assignment_operator_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "assignment_operator"
    // C.g:412:1: assignment_operator : ( '=' | '*=' | '/=' | '%=' | '+=' | '-=' | '<<=' | '>>=' | '&=' | '^=' | '|=' );
    public final CParser.assignment_operator_return assignment_operator() throws RecognitionException {
        CParser.assignment_operator_return retval = new CParser.assignment_operator_return();
        retval.start = input.LT(1);

        int assignment_operator_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 53) ) { return retval; }

            // C.g:413:2: ( '=' | '*=' | '/=' | '%=' | '+=' | '-=' | '<<=' | '>>=' | '&=' | '^=' | '|=' )
            // C.g:
            {
            if ( input.LA(1)==26||input.LA(1)==29||input.LA(1)==33||input.LA(1)==36||input.LA(1)==40||input.LA(1)==45||input.LA(1)==50||input.LA(1)==52||input.LA(1)==57||input.LA(1)==62||input.LA(1)==101 ) {
                input.consume();
                state.errorRecovery=false;
                state.failed=false;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                MismatchedSetException mse = new MismatchedSetException(null,input);
                throw mse;
            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 53, assignment_operator_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "assignment_operator"


    public static class conditional_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "conditional_expression"
    // C.g:426:1: conditional_expression : logical_or_expression ( '?' expression ':' conditional_expression )? ;
    public final CParser.conditional_expression_return conditional_expression() throws RecognitionException {
        CParser.conditional_expression_return retval = new CParser.conditional_expression_return();
        retval.start = input.LT(1);

        int conditional_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 54) ) { return retval; }

            // C.g:427:2: ( logical_or_expression ( '?' expression ':' conditional_expression )? )
            // C.g:427:4: logical_or_expression ( '?' expression ':' conditional_expression )?
            {
            pushFollow(FOLLOW_logical_or_expression_in_conditional_expression1693);
            logical_or_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:427:26: ( '?' expression ':' conditional_expression )?
            int alt57=2;
            int LA57_0 = input.LA(1);

            if ( (LA57_0==58) ) {
                alt57=1;
            }
            switch (alt57) {
                case 1 :
                    // C.g:427:27: '?' expression ':' conditional_expression
                    {
                    match(input,58,FOLLOW_58_in_conditional_expression1696); if (state.failed) return retval;

                    pushFollow(FOLLOW_expression_in_conditional_expression1698);
                    expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,46,FOLLOW_46_in_conditional_expression1700); if (state.failed) return retval;

                    pushFollow(FOLLOW_conditional_expression_in_conditional_expression1702);
                    conditional_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 54, conditional_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "conditional_expression"


    public static class logical_or_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "logical_or_expression"
    // C.g:430:1: logical_or_expression : logical_and_expression ( '||' logical_and_expression )* ;
    public final CParser.logical_or_expression_return logical_or_expression() throws RecognitionException {
        CParser.logical_or_expression_return retval = new CParser.logical_or_expression_return();
        retval.start = input.LT(1);

        int logical_or_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 55) ) { return retval; }

            // C.g:431:2: ( logical_and_expression ( '||' logical_and_expression )* )
            // C.g:431:4: logical_and_expression ( '||' logical_and_expression )*
            {
            pushFollow(FOLLOW_logical_and_expression_in_logical_or_expression1715);
            logical_and_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:431:27: ( '||' logical_and_expression )*
            loop58:
            do {
                int alt58=2;
                int LA58_0 = input.LA(1);

                if ( (LA58_0==102) ) {
                    alt58=1;
                }


                switch (alt58) {
            	case 1 :
            	    // C.g:431:28: '||' logical_and_expression
            	    {
            	    match(input,102,FOLLOW_102_in_logical_or_expression1718); if (state.failed) return retval;

            	    pushFollow(FOLLOW_logical_and_expression_in_logical_or_expression1720);
            	    logical_and_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop58;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 55, logical_or_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "logical_or_expression"


    public static class logical_and_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "logical_and_expression"
    // C.g:434:1: logical_and_expression : inclusive_or_expression ( '&&' inclusive_or_expression )* ;
    public final CParser.logical_and_expression_return logical_and_expression() throws RecognitionException {
        CParser.logical_and_expression_return retval = new CParser.logical_and_expression_return();
        retval.start = input.LT(1);

        int logical_and_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 56) ) { return retval; }

            // C.g:435:2: ( inclusive_or_expression ( '&&' inclusive_or_expression )* )
            // C.g:435:4: inclusive_or_expression ( '&&' inclusive_or_expression )*
            {
            pushFollow(FOLLOW_inclusive_or_expression_in_logical_and_expression1733);
            inclusive_or_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:435:28: ( '&&' inclusive_or_expression )*
            loop59:
            do {
                int alt59=2;
                int LA59_0 = input.LA(1);

                if ( (LA59_0==27) ) {
                    alt59=1;
                }


                switch (alt59) {
            	case 1 :
            	    // C.g:435:29: '&&' inclusive_or_expression
            	    {
            	    match(input,27,FOLLOW_27_in_logical_and_expression1736); if (state.failed) return retval;

            	    pushFollow(FOLLOW_inclusive_or_expression_in_logical_and_expression1738);
            	    inclusive_or_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop59;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 56, logical_and_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "logical_and_expression"


    public static class inclusive_or_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "inclusive_or_expression"
    // C.g:438:1: inclusive_or_expression : exclusive_or_expression ( '|' exclusive_or_expression )* ;
    public final CParser.inclusive_or_expression_return inclusive_or_expression() throws RecognitionException {
        CParser.inclusive_or_expression_return retval = new CParser.inclusive_or_expression_return();
        retval.start = input.LT(1);

        int inclusive_or_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 57) ) { return retval; }

            // C.g:439:2: ( exclusive_or_expression ( '|' exclusive_or_expression )* )
            // C.g:439:4: exclusive_or_expression ( '|' exclusive_or_expression )*
            {
            pushFollow(FOLLOW_exclusive_or_expression_in_inclusive_or_expression1751);
            exclusive_or_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:439:28: ( '|' exclusive_or_expression )*
            loop60:
            do {
                int alt60=2;
                int LA60_0 = input.LA(1);

                if ( (LA60_0==100) ) {
                    alt60=1;
                }


                switch (alt60) {
            	case 1 :
            	    // C.g:439:29: '|' exclusive_or_expression
            	    {
            	    match(input,100,FOLLOW_100_in_inclusive_or_expression1754); if (state.failed) return retval;

            	    pushFollow(FOLLOW_exclusive_or_expression_in_inclusive_or_expression1756);
            	    exclusive_or_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop60;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 57, inclusive_or_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "inclusive_or_expression"


    public static class exclusive_or_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "exclusive_or_expression"
    // C.g:442:1: exclusive_or_expression : and_expression ( '^' and_expression )* ;
    public final CParser.exclusive_or_expression_return exclusive_or_expression() throws RecognitionException {
        CParser.exclusive_or_expression_return retval = new CParser.exclusive_or_expression_return();
        retval.start = input.LT(1);

        int exclusive_or_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 58) ) { return retval; }

            // C.g:443:2: ( and_expression ( '^' and_expression )* )
            // C.g:443:4: and_expression ( '^' and_expression )*
            {
            pushFollow(FOLLOW_and_expression_in_exclusive_or_expression1769);
            and_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:443:19: ( '^' and_expression )*
            loop61:
            do {
                int alt61=2;
                int LA61_0 = input.LA(1);

                if ( (LA61_0==61) ) {
                    alt61=1;
                }


                switch (alt61) {
            	case 1 :
            	    // C.g:443:20: '^' and_expression
            	    {
            	    match(input,61,FOLLOW_61_in_exclusive_or_expression1772); if (state.failed) return retval;

            	    pushFollow(FOLLOW_and_expression_in_exclusive_or_expression1774);
            	    and_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop61;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 58, exclusive_or_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "exclusive_or_expression"


    public static class and_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "and_expression"
    // C.g:446:1: and_expression : equality_expression ( '&' equality_expression )* ;
    public final CParser.and_expression_return and_expression() throws RecognitionException {
        CParser.and_expression_return retval = new CParser.and_expression_return();
        retval.start = input.LT(1);

        int and_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 59) ) { return retval; }

            // C.g:447:2: ( equality_expression ( '&' equality_expression )* )
            // C.g:447:4: equality_expression ( '&' equality_expression )*
            {
            pushFollow(FOLLOW_equality_expression_in_and_expression1787);
            equality_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:447:24: ( '&' equality_expression )*
            loop62:
            do {
                int alt62=2;
                int LA62_0 = input.LA(1);

                if ( (LA62_0==28) ) {
                    alt62=1;
                }


                switch (alt62) {
            	case 1 :
            	    // C.g:447:25: '&' equality_expression
            	    {
            	    match(input,28,FOLLOW_28_in_and_expression1790); if (state.failed) return retval;

            	    pushFollow(FOLLOW_equality_expression_in_and_expression1792);
            	    equality_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop62;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 59, and_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "and_expression"


    public static class equality_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "equality_expression"
    // C.g:449:1: equality_expression : relational_expression ( ( '==' | '!=' ) relational_expression )* ;
    public final CParser.equality_expression_return equality_expression() throws RecognitionException {
        CParser.equality_expression_return retval = new CParser.equality_expression_return();
        retval.start = input.LT(1);

        int equality_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 60) ) { return retval; }

            // C.g:450:2: ( relational_expression ( ( '==' | '!=' ) relational_expression )* )
            // C.g:450:4: relational_expression ( ( '==' | '!=' ) relational_expression )*
            {
            pushFollow(FOLLOW_relational_expression_in_equality_expression1804);
            relational_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:450:26: ( ( '==' | '!=' ) relational_expression )*
            loop63:
            do {
                int alt63=2;
                int LA63_0 = input.LA(1);

                if ( (LA63_0==24||LA63_0==53) ) {
                    alt63=1;
                }


                switch (alt63) {
            	case 1 :
            	    // C.g:450:27: ( '==' | '!=' ) relational_expression
            	    {
            	    if ( input.LA(1)==24||input.LA(1)==53 ) {
            	        input.consume();
            	        state.errorRecovery=false;
            	        state.failed=false;
            	    }
            	    else {
            	        if (state.backtracking>0) {state.failed=true; return retval;}
            	        MismatchedSetException mse = new MismatchedSetException(null,input);
            	        throw mse;
            	    }


            	    pushFollow(FOLLOW_relational_expression_in_equality_expression1813);
            	    relational_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop63;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 60, equality_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "equality_expression"


    public static class relational_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "relational_expression"
    // C.g:453:1: relational_expression : shift_expression ( ( '<' | '>' | '<=' | '>=' ) shift_expression )* ;
    public final CParser.relational_expression_return relational_expression() throws RecognitionException {
        CParser.relational_expression_return retval = new CParser.relational_expression_return();
        retval.start = input.LT(1);

        int relational_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 61) ) { return retval; }

            // C.g:454:2: ( shift_expression ( ( '<' | '>' | '<=' | '>=' ) shift_expression )* )
            // C.g:454:4: shift_expression ( ( '<' | '>' | '<=' | '>=' ) shift_expression )*
            {
            pushFollow(FOLLOW_shift_expression_in_relational_expression1826);
            shift_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:454:21: ( ( '<' | '>' | '<=' | '>=' ) shift_expression )*
            loop64:
            do {
                int alt64=2;
                int LA64_0 = input.LA(1);

                if ( (LA64_0==48||LA64_0==51||(LA64_0 >= 54 && LA64_0 <= 55)) ) {
                    alt64=1;
                }


                switch (alt64) {
            	case 1 :
            	    // C.g:454:22: ( '<' | '>' | '<=' | '>=' ) shift_expression
            	    {
            	    if ( input.LA(1)==48||input.LA(1)==51||(input.LA(1) >= 54 && input.LA(1) <= 55) ) {
            	        input.consume();
            	        state.errorRecovery=false;
            	        state.failed=false;
            	    }
            	    else {
            	        if (state.backtracking>0) {state.failed=true; return retval;}
            	        MismatchedSetException mse = new MismatchedSetException(null,input);
            	        throw mse;
            	    }


            	    pushFollow(FOLLOW_shift_expression_in_relational_expression1839);
            	    shift_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop64;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 61, relational_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "relational_expression"


    public static class shift_expression_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "shift_expression"
    // C.g:457:1: shift_expression : additive_expression ( ( '<<' | '>>' ) additive_expression )* ;
    public final CParser.shift_expression_return shift_expression() throws RecognitionException {
        CParser.shift_expression_return retval = new CParser.shift_expression_return();
        retval.start = input.LT(1);

        int shift_expression_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 62) ) { return retval; }

            // C.g:458:2: ( additive_expression ( ( '<<' | '>>' ) additive_expression )* )
            // C.g:458:4: additive_expression ( ( '<<' | '>>' ) additive_expression )*
            {
            pushFollow(FOLLOW_additive_expression_in_shift_expression1852);
            additive_expression();

            state._fsp--;
            if (state.failed) return retval;

            // C.g:458:24: ( ( '<<' | '>>' ) additive_expression )*
            loop65:
            do {
                int alt65=2;
                int LA65_0 = input.LA(1);

                if ( (LA65_0==49||LA65_0==56) ) {
                    alt65=1;
                }


                switch (alt65) {
            	case 1 :
            	    // C.g:458:25: ( '<<' | '>>' ) additive_expression
            	    {
            	    if ( input.LA(1)==49||input.LA(1)==56 ) {
            	        input.consume();
            	        state.errorRecovery=false;
            	        state.failed=false;
            	    }
            	    else {
            	        if (state.backtracking>0) {state.failed=true; return retval;}
            	        MismatchedSetException mse = new MismatchedSetException(null,input);
            	        throw mse;
            	    }


            	    pushFollow(FOLLOW_additive_expression_in_shift_expression1861);
            	    additive_expression();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    break loop65;
                }
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 62, shift_expression_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "shift_expression"


    public static class statement_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "statement"
    // C.g:462:1: statement : ( labeled_statement | compound_statement |{...}? expression_statement -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$expression_statement.text)| expression_statement |{...}? selection_statement -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$selection_statement.text)| selection_statement |{...}? iteration_statement -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$iteration_statement.text)| iteration_statement | jump_statement );
    public final CParser.statement_return statement() throws RecognitionException {
        CParser.statement_return retval = new CParser.statement_return();
        retval.start = input.LT(1);

        int statement_StartIndex = input.index();

        CParser.expression_statement_return expression_statement3 =null;

        CParser.selection_statement_return selection_statement4 =null;

        CParser.iteration_statement_return iteration_statement5 =null;


        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 63) ) { return retval; }

            // C.g:463:2: ( labeled_statement | compound_statement |{...}? expression_statement -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$expression_statement.text)| expression_statement |{...}? selection_statement -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$selection_statement.text)| selection_statement |{...}? iteration_statement -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$iteration_statement.text)| iteration_statement | jump_statement )
            int alt66=9;
            alt66 = dfa66.predict(input);
            switch (alt66) {
                case 1 :
                    // C.g:463:4: labeled_statement
                    {
                    pushFollow(FOLLOW_labeled_statement_in_statement1875);
                    labeled_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:464:4: compound_statement
                    {
                    pushFollow(FOLLOW_compound_statement_in_statement1880);
                    compound_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:465:4: {...}? expression_statement
                    {
                    if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        throw new FailedPredicateException(input, "statement", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
                    }

                    pushFollow(FOLLOW_expression_statement_in_statement1888);
                    expression_statement3=expression_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    if ( state.backtracking==0 ) {((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber++;}

                    // TEMPLATE REWRITE
                    if ( state.backtracking==0 ) {
                      // 466:3: -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$expression_statement.text)
                      {
                          retval.st = templateLib.getInstanceOf("instrument_statement",new STAttrMap().put("label_number", ((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber).put("statement", (expression_statement3!=null?input.toString(expression_statement3.start,expression_statement3.stop):null)));
                      }


                      ((TokenRewriteStream)input).replace(
                        ((Token)retval.start).getTokenIndex(),
                        input.LT(-1).getTokenIndex(),
                        retval.st);

                    }

                    }
                    break;
                case 4 :
                    // C.g:467:4: expression_statement
                    {
                    pushFollow(FOLLOW_expression_statement_in_statement1912);
                    expression_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 5 :
                    // C.g:468:4: {...}? selection_statement
                    {
                    if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        throw new FailedPredicateException(input, "statement", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
                    }

                    pushFollow(FOLLOW_selection_statement_in_statement1919);
                    selection_statement4=selection_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    if ( state.backtracking==0 ) {((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber++;}

                    // TEMPLATE REWRITE
                    if ( state.backtracking==0 ) {
                      // 469:3: -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$selection_statement.text)
                      {
                          retval.st = templateLib.getInstanceOf("instrument_statement",new STAttrMap().put("label_number", ((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber).put("statement", (selection_statement4!=null?input.toString(selection_statement4.start,selection_statement4.stop):null)));
                      }


                      ((TokenRewriteStream)input).replace(
                        ((Token)retval.start).getTokenIndex(),
                        input.LT(-1).getTokenIndex(),
                        retval.st);

                    }

                    }
                    break;
                case 6 :
                    // C.g:470:4: selection_statement
                    {
                    pushFollow(FOLLOW_selection_statement_in_statement1943);
                    selection_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 7 :
                    // C.g:471:4: {...}? iteration_statement
                    {
                    if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        throw new FailedPredicateException(input, "statement", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
                    }

                    pushFollow(FOLLOW_iteration_statement_in_statement1950);
                    iteration_statement5=iteration_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    if ( state.backtracking==0 ) {((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber++;}

                    // TEMPLATE REWRITE
                    if ( state.backtracking==0 ) {
                      // 472:3: -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$iteration_statement.text)
                      {
                          retval.st = templateLib.getInstanceOf("instrument_statement",new STAttrMap().put("label_number", ((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber).put("statement", (iteration_statement5!=null?input.toString(iteration_statement5.start,iteration_statement5.stop):null)));
                      }


                      ((TokenRewriteStream)input).replace(
                        ((Token)retval.start).getTokenIndex(),
                        input.LT(-1).getTokenIndex(),
                        retval.st);

                    }

                    }
                    break;
                case 8 :
                    // C.g:473:4: iteration_statement
                    {
                    pushFollow(FOLLOW_iteration_statement_in_statement1974);
                    iteration_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 9 :
                    // C.g:474:4: jump_statement
                    {
                    pushFollow(FOLLOW_jump_statement_in_statement1979);
                    jump_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 63, statement_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "statement"


    public static class labeled_statement_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "labeled_statement"
    // C.g:477:1: labeled_statement : ( IDENTIFIER ':' statement |{...}? 'case' constant_expression ':' statement -> instrument_labeled_statement(label_number=$InstrumentationStats::labelNumberconstant_expression=$constant_expression.textstatement=$statement.text)| 'case' constant_expression ':' statement |{...}? 'default' ':' statement -> instrument_default_labeled_statement(label_number=$InstrumentationStats::labelNumberstatement=$statement.text)| 'default' ':' statement );
    public final CParser.labeled_statement_return labeled_statement() throws RecognitionException {
        CParser.labeled_statement_return retval = new CParser.labeled_statement_return();
        retval.start = input.LT(1);

        int labeled_statement_StartIndex = input.index();

        CParser.constant_expression_return constant_expression6 =null;

        CParser.statement_return statement7 =null;

        CParser.statement_return statement8 =null;



          setupScopeVarsIfBranchWithPassingAttribute();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 64) ) { return retval; }

            // C.g:481:2: ( IDENTIFIER ':' statement |{...}? 'case' constant_expression ':' statement -> instrument_labeled_statement(label_number=$InstrumentationStats::labelNumberconstant_expression=$constant_expression.textstatement=$statement.text)| 'case' constant_expression ':' statement |{...}? 'default' ':' statement -> instrument_default_labeled_statement(label_number=$InstrumentationStats::labelNumberstatement=$statement.text)| 'default' ':' statement )
            int alt67=5;
            switch ( input.LA(1) ) {
            case IDENTIFIER:
                {
                alt67=1;
                }
                break;
            case 69:
                {
                switch ( input.LA(2) ) {
                case 30:
                    {
                    int LA67_4 = input.LA(3);

                    if ( (((synpred146_C()&&synpred146_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {
                        alt67=2;
                    }
                    else if ( (synpred147_C()) ) {
                        alt67=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 67, 4, input);

                        throw nvae;

                    }
                    }
                    break;
                case IDENTIFIER:
                    {
                    int LA67_5 = input.LA(3);

                    if ( (((synpred146_C()&&synpred146_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {
                        alt67=2;
                    }
                    else if ( (synpred147_C()) ) {
                        alt67=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 67, 5, input);

                        throw nvae;

                    }
                    }
                    break;
                case CHARACTER_LITERAL:
                case DECIMAL_LITERAL:
                case FLOATING_POINT_LITERAL:
                case HEX_LITERAL:
                case OCTAL_LITERAL:
                case STRING_LITERAL:
                    {
                    int LA67_6 = input.LA(3);

                    if ( (((synpred146_C()&&synpred146_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {
                        alt67=2;
                    }
                    else if ( (synpred147_C()) ) {
                        alt67=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 67, 6, input);

                        throw nvae;

                    }
                    }
                    break;
                case 35:
                    {
                    int LA67_7 = input.LA(3);

                    if ( (((synpred146_C()&&synpred146_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {
                        alt67=2;
                    }
                    else if ( (synpred147_C()) ) {
                        alt67=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 67, 7, input);

                        throw nvae;

                    }
                    }
                    break;
                case 39:
                    {
                    int LA67_8 = input.LA(3);

                    if ( (((synpred146_C()&&synpred146_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {
                        alt67=2;
                    }
                    else if ( (synpred147_C()) ) {
                        alt67=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 67, 8, input);

                        throw nvae;

                    }
                    }
                    break;
                case 23:
                case 28:
                case 32:
                case 34:
                case 38:
                case 104:
                    {
                    int LA67_9 = input.LA(3);

                    if ( (((synpred146_C()&&synpred146_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {
                        alt67=2;
                    }
                    else if ( (synpred147_C()) ) {
                        alt67=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 67, 9, input);

                        throw nvae;

                    }
                    }
                    break;
                case 89:
                    {
                    int LA67_10 = input.LA(3);

                    if ( (((synpred146_C()&&synpred146_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {
                        alt67=2;
                    }
                    else if ( (synpred147_C()) ) {
                        alt67=3;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 67, 10, input);

                        throw nvae;

                    }
                    }
                    break;
                default:
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 67, 2, input);

                    throw nvae;

                }

                }
                break;
            case 73:
                {
                int LA67_3 = input.LA(2);

                if ( (LA67_3==46) ) {
                    int LA67_11 = input.LA(3);

                    if ( (((synpred148_C()&&synpred148_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {
                        alt67=4;
                    }
                    else if ( (true) ) {
                        alt67=5;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 67, 11, input);

                        throw nvae;

                    }
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 67, 3, input);

                    throw nvae;

                }
                }
                break;
            default:
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 67, 0, input);

                throw nvae;

            }

            switch (alt67) {
                case 1 :
                    // C.g:481:4: IDENTIFIER ':' statement
                    {
                    match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_labeled_statement1994); if (state.failed) return retval;

                    match(input,46,FOLLOW_46_in_labeled_statement1996); if (state.failed) return retval;

                    pushFollow(FOLLOW_statement_in_labeled_statement1998);
                    statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:482:4: {...}? 'case' constant_expression ':' statement
                    {
                    if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        throw new FailedPredicateException(input, "labeled_statement", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
                    }

                    match(input,69,FOLLOW_69_in_labeled_statement2005); if (state.failed) return retval;

                    pushFollow(FOLLOW_constant_expression_in_labeled_statement2008);
                    constant_expression6=constant_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,46,FOLLOW_46_in_labeled_statement2010); if (state.failed) return retval;

                    if ( state.backtracking==0 ) {((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch = false;}

                    pushFollow(FOLLOW_statement_in_labeled_statement2015);
                    statement7=statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    if ( state.backtracking==0 ) {((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber++;}

                    // TEMPLATE REWRITE
                    if ( state.backtracking==0 ) {
                      // 483:3: -> instrument_labeled_statement(label_number=$InstrumentationStats::labelNumberconstant_expression=$constant_expression.textstatement=$statement.text)
                      {
                          retval.st = templateLib.getInstanceOf("instrument_labeled_statement",new STAttrMap().put("label_number", ((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber).put("constant_expression", (constant_expression6!=null?input.toString(constant_expression6.start,constant_expression6.stop):null)).put("statement", (statement7!=null?input.toString(statement7.start,statement7.stop):null)));
                      }


                      ((TokenRewriteStream)input).replace(
                        ((Token)retval.start).getTokenIndex(),
                        input.LT(-1).getTokenIndex(),
                        retval.st);

                    }

                    }
                    break;
                case 3 :
                    // C.g:484:4: 'case' constant_expression ':' statement
                    {
                    match(input,69,FOLLOW_69_in_labeled_statement2044); if (state.failed) return retval;

                    pushFollow(FOLLOW_constant_expression_in_labeled_statement2047);
                    constant_expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,46,FOLLOW_46_in_labeled_statement2049); if (state.failed) return retval;

                    pushFollow(FOLLOW_statement_in_labeled_statement2051);
                    statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 4 :
                    // C.g:485:5: {...}? 'default' ':' statement
                    {
                    if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        throw new FailedPredicateException(input, "labeled_statement", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
                    }

                    match(input,73,FOLLOW_73_in_labeled_statement2060); if (state.failed) return retval;

                    match(input,46,FOLLOW_46_in_labeled_statement2062); if (state.failed) return retval;

                    if ( state.backtracking==0 ) {((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch = false;}

                    pushFollow(FOLLOW_statement_in_labeled_statement2066);
                    statement8=statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    if ( state.backtracking==0 ) {((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber++;}

                    // TEMPLATE REWRITE
                    if ( state.backtracking==0 ) {
                      // 486:3: -> instrument_default_labeled_statement(label_number=$InstrumentationStats::labelNumberstatement=$statement.text)
                      {
                          retval.st = templateLib.getInstanceOf("instrument_default_labeled_statement",new STAttrMap().put("label_number", ((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber).put("statement", (statement8!=null?input.toString(statement8.start,statement8.stop):null)));
                      }


                      ((TokenRewriteStream)input).replace(
                        ((Token)retval.start).getTokenIndex(),
                        input.LT(-1).getTokenIndex(),
                        retval.st);

                    }

                    }
                    break;
                case 5 :
                    // C.g:487:4: 'default' ':' statement
                    {
                    match(input,73,FOLLOW_73_in_labeled_statement2090); if (state.failed) return retval;

                    match(input,46,FOLLOW_46_in_labeled_statement2092); if (state.failed) return retval;

                    pushFollow(FOLLOW_statement_in_labeled_statement2094);
                    statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 64, labeled_statement_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "labeled_statement"


    public static class compound_statement_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "compound_statement"
    // C.g:490:1: compound_statement : ( '{' {...}? ( declaration )* ( statement_list )? '}' -> instrument_compound_statement(label_number=$InstrumentationStats::labelNumberdeclarations=$declaration.textstatement_list=$statement_list.text)| '{' ( declaration )* ( statement_list )? '}' );
    public final CParser.compound_statement_return compound_statement() throws RecognitionException {
        Symbols_stack.push(new Symbols_scope());

        CParser.compound_statement_return retval = new CParser.compound_statement_return();
        retval.start = input.LT(1);

        int compound_statement_StartIndex = input.index();

        CParser.declaration_return declaration9 =null;

        CParser.statement_list_return statement_list10 =null;



          ((Symbols_scope)Symbols_stack.peek()).types = new HashSet();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 65) ) { return retval; }

            // C.g:495:2: ( '{' {...}? ( declaration )* ( statement_list )? '}' -> instrument_compound_statement(label_number=$InstrumentationStats::labelNumberdeclarations=$declaration.textstatement_list=$statement_list.text)| '{' ( declaration )* ( statement_list )? '}' )
            int alt72=2;
            int LA72_0 = input.LA(1);

            if ( (LA72_0==99) ) {
                switch ( input.LA(2) ) {
                case 93:
                    {
                    int LA72_2 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 2, input);

                        throw nvae;

                    }
                    }
                    break;
                case 67:
                case 78:
                case 85:
                case 90:
                    {
                    int LA72_3 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 3, input);

                        throw nvae;

                    }
                    }
                    break;
                case 96:
                    {
                    int LA72_4 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 4, input);

                        throw nvae;

                    }
                    }
                    break;
                case 70:
                    {
                    int LA72_5 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 5, input);

                        throw nvae;

                    }
                    }
                    break;
                case 87:
                    {
                    int LA72_6 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 6, input);

                        throw nvae;

                    }
                    }
                    break;
                case 83:
                    {
                    int LA72_7 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 7, input);

                        throw nvae;

                    }
                    }
                    break;
                case 84:
                    {
                    int LA72_8 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 8, input);

                        throw nvae;

                    }
                    }
                    break;
                case 79:
                    {
                    int LA72_9 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 9, input);

                        throw nvae;

                    }
                    }
                    break;
                case 75:
                    {
                    int LA72_10 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 10, input);

                        throw nvae;

                    }
                    }
                    break;
                case 88:
                    {
                    int LA72_11 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 11, input);

                        throw nvae;

                    }
                    }
                    break;
                case 95:
                    {
                    int LA72_12 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 12, input);

                        throw nvae;

                    }
                    }
                    break;
                case 64:
                    {
                    int LA72_13 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 13, input);

                        throw nvae;

                    }
                    }
                    break;
                case 91:
                case 94:
                    {
                    int LA72_14 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 14, input);

                        throw nvae;

                    }
                    }
                    break;
                case 77:
                    {
                    int LA72_15 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 15, input);

                        throw nvae;

                    }
                    }
                    break;
                case IDENTIFIER:
                    {
                    int LA72_16 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 16, input);

                        throw nvae;

                    }
                    }
                    break;
                case 65:
                case 71:
                case 97:
                    {
                    int LA72_17 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 17, input);

                        throw nvae;

                    }
                    }
                    break;
                case 69:
                    {
                    int LA72_18 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 18, input);

                        throw nvae;

                    }
                    }
                    break;
                case 73:
                    {
                    int LA72_19 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 19, input);

                        throw nvae;

                    }
                    }
                    break;
                case 99:
                    {
                    int LA72_20 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 20, input);

                        throw nvae;

                    }
                    }
                    break;
                case 47:
                    {
                    int LA72_21 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 21, input);

                        throw nvae;

                    }
                    }
                    break;
                case CHARACTER_LITERAL:
                case DECIMAL_LITERAL:
                case FLOATING_POINT_LITERAL:
                case HEX_LITERAL:
                case OCTAL_LITERAL:
                case STRING_LITERAL:
                    {
                    int LA72_22 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 22, input);

                        throw nvae;

                    }
                    }
                    break;
                case 30:
                    {
                    int LA72_23 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 23, input);

                        throw nvae;

                    }
                    }
                    break;
                case 35:
                    {
                    int LA72_24 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 24, input);

                        throw nvae;

                    }
                    }
                    break;
                case 39:
                    {
                    int LA72_25 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 25, input);

                        throw nvae;

                    }
                    }
                    break;
                case 23:
                case 28:
                case 32:
                case 34:
                case 38:
                case 104:
                    {
                    int LA72_26 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 26, input);

                        throw nvae;

                    }
                    }
                    break;
                case 89:
                    {
                    int LA72_27 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 27, input);

                        throw nvae;

                    }
                    }
                    break;
                case 82:
                    {
                    int LA72_28 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 28, input);

                        throw nvae;

                    }
                    }
                    break;
                case 92:
                    {
                    int LA72_29 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 29, input);

                        throw nvae;

                    }
                    }
                    break;
                case 98:
                    {
                    int LA72_30 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 30, input);

                        throw nvae;

                    }
                    }
                    break;
                case 74:
                    {
                    int LA72_31 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 31, input);

                        throw nvae;

                    }
                    }
                    break;
                case 80:
                    {
                    int LA72_32 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 32, input);

                        throw nvae;

                    }
                    }
                    break;
                case 81:
                    {
                    int LA72_33 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 33, input);

                        throw nvae;

                    }
                    }
                    break;
                case 72:
                    {
                    int LA72_34 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 34, input);

                        throw nvae;

                    }
                    }
                    break;
                case 68:
                    {
                    int LA72_35 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 35, input);

                        throw nvae;

                    }
                    }
                    break;
                case 86:
                    {
                    int LA72_36 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 36, input);

                        throw nvae;

                    }
                    }
                    break;
                case 103:
                    {
                    int LA72_37 = input.LA(3);

                    if ( (synpred151_C()) ) {
                        alt72=1;
                    }
                    else if ( (true) ) {
                        alt72=2;
                    }
                    else {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        NoViableAltException nvae =
                            new NoViableAltException("", 72, 37, input);

                        throw nvae;

                    }
                    }
                    break;
                default:
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 72, 1, input);

                    throw nvae;

                }

            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 72, 0, input);

                throw nvae;

            }
            switch (alt72) {
                case 1 :
                    // C.g:495:5: '{' {...}? ( declaration )* ( statement_list )? '}'
                    {
                    match(input,99,FOLLOW_99_in_compound_statement2117); if (state.failed) return retval;

                    if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
                        if (state.backtracking>0) {state.failed=true; return retval;}
                        throw new FailedPredicateException(input, "compound_statement", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
                    }

                    // C.g:495:76: ( declaration )*
                    loop68:
                    do {
                        int alt68=2;
                        alt68 = dfa68.predict(input);
                        switch (alt68) {
                    	case 1 :
                    	    // C.g:495:76: declaration
                    	    {
                    	    pushFollow(FOLLOW_declaration_in_compound_statement2121);
                    	    declaration9=declaration();

                    	    state._fsp--;
                    	    if (state.failed) return retval;

                    	    }
                    	    break;

                    	default :
                    	    break loop68;
                        }
                    } while (true);


                    if ( state.backtracking==0 ) {((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch = false;}

                    // C.g:495:132: ( statement_list )?
                    int alt69=2;
                    int LA69_0 = input.LA(1);

                    if ( (LA69_0==CHARACTER_LITERAL||LA69_0==DECIMAL_LITERAL||LA69_0==FLOATING_POINT_LITERAL||LA69_0==HEX_LITERAL||LA69_0==IDENTIFIER||LA69_0==OCTAL_LITERAL||LA69_0==STRING_LITERAL||LA69_0==23||LA69_0==28||LA69_0==30||LA69_0==32||(LA69_0 >= 34 && LA69_0 <= 35)||(LA69_0 >= 38 && LA69_0 <= 39)||LA69_0==47||(LA69_0 >= 68 && LA69_0 <= 69)||(LA69_0 >= 72 && LA69_0 <= 74)||(LA69_0 >= 80 && LA69_0 <= 82)||LA69_0==86||LA69_0==89||LA69_0==92||(LA69_0 >= 98 && LA69_0 <= 99)||LA69_0==104) ) {
                        alt69=1;
                    }
                    switch (alt69) {
                        case 1 :
                            // C.g:495:132: statement_list
                            {
                            pushFollow(FOLLOW_statement_list_in_compound_statement2127);
                            statement_list10=statement_list();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    if ( state.backtracking==0 ) {((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber++;}

                    match(input,103,FOLLOW_103_in_compound_statement2133); if (state.failed) return retval;

                    // TEMPLATE REWRITE
                    if ( state.backtracking==0 ) {
                      // 496:6: -> instrument_compound_statement(label_number=$InstrumentationStats::labelNumberdeclarations=$declaration.textstatement_list=$statement_list.text)
                      {
                          retval.st = templateLib.getInstanceOf("instrument_compound_statement",new STAttrMap().put("label_number", ((InstrumentationStats_scope)InstrumentationStats_stack.peek()).labelNumber).put("declarations", (declaration9!=null?input.toString(declaration9.start,declaration9.stop):null)).put("statement_list", (statement_list10!=null?input.toString(statement_list10.start,statement_list10.stop):null)));
                      }


                      ((TokenRewriteStream)input).replace(
                        ((Token)retval.start).getTokenIndex(),
                        input.LT(-1).getTokenIndex(),
                        retval.st);

                    }

                    }
                    break;
                case 2 :
                    // C.g:497:5: '{' ( declaration )* ( statement_list )? '}'
                    {
                    match(input,99,FOLLOW_99_in_compound_statement2165); if (state.failed) return retval;

                    // C.g:497:10: ( declaration )*
                    loop70:
                    do {
                        int alt70=2;
                        alt70 = dfa70.predict(input);
                        switch (alt70) {
                    	case 1 :
                    	    // C.g:497:10: declaration
                    	    {
                    	    pushFollow(FOLLOW_declaration_in_compound_statement2168);
                    	    declaration();

                    	    state._fsp--;
                    	    if (state.failed) return retval;

                    	    }
                    	    break;

                    	default :
                    	    break loop70;
                        }
                    } while (true);


                    // C.g:497:23: ( statement_list )?
                    int alt71=2;
                    int LA71_0 = input.LA(1);

                    if ( (LA71_0==CHARACTER_LITERAL||LA71_0==DECIMAL_LITERAL||LA71_0==FLOATING_POINT_LITERAL||LA71_0==HEX_LITERAL||LA71_0==IDENTIFIER||LA71_0==OCTAL_LITERAL||LA71_0==STRING_LITERAL||LA71_0==23||LA71_0==28||LA71_0==30||LA71_0==32||(LA71_0 >= 34 && LA71_0 <= 35)||(LA71_0 >= 38 && LA71_0 <= 39)||LA71_0==47||(LA71_0 >= 68 && LA71_0 <= 69)||(LA71_0 >= 72 && LA71_0 <= 74)||(LA71_0 >= 80 && LA71_0 <= 82)||LA71_0==86||LA71_0==89||LA71_0==92||(LA71_0 >= 98 && LA71_0 <= 99)||LA71_0==104) ) {
                        alt71=1;
                    }
                    switch (alt71) {
                        case 1 :
                            // C.g:497:23: statement_list
                            {
                            pushFollow(FOLLOW_statement_list_in_compound_statement2171);
                            statement_list();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    match(input,103,FOLLOW_103_in_compound_statement2174); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 65, compound_statement_StartIndex); }

            Symbols_stack.pop();

        }
        return retval;
    }
    // $ANTLR end "compound_statement"


    public static class statement_list_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "statement_list"
    // C.g:500:1: statement_list : ( statement )+ ;
    public final CParser.statement_list_return statement_list() throws RecognitionException {
        CParser.statement_list_return retval = new CParser.statement_list_return();
        retval.start = input.LT(1);

        int statement_list_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 66) ) { return retval; }

            // C.g:501:2: ( ( statement )+ )
            // C.g:501:4: ( statement )+
            {
            // C.g:501:4: ( statement )+
            int cnt73=0;
            loop73:
            do {
                int alt73=2;
                int LA73_0 = input.LA(1);

                if ( (LA73_0==CHARACTER_LITERAL||LA73_0==DECIMAL_LITERAL||LA73_0==FLOATING_POINT_LITERAL||LA73_0==HEX_LITERAL||LA73_0==IDENTIFIER||LA73_0==OCTAL_LITERAL||LA73_0==STRING_LITERAL||LA73_0==23||LA73_0==28||LA73_0==30||LA73_0==32||(LA73_0 >= 34 && LA73_0 <= 35)||(LA73_0 >= 38 && LA73_0 <= 39)||LA73_0==47||(LA73_0 >= 68 && LA73_0 <= 69)||(LA73_0 >= 72 && LA73_0 <= 74)||(LA73_0 >= 80 && LA73_0 <= 82)||LA73_0==86||LA73_0==89||LA73_0==92||(LA73_0 >= 98 && LA73_0 <= 99)||LA73_0==104) ) {
                    alt73=1;
                }


                switch (alt73) {
            	case 1 :
            	    // C.g:501:4: statement
            	    {
            	    pushFollow(FOLLOW_statement_in_statement_list2187);
            	    statement();

            	    state._fsp--;
            	    if (state.failed) return retval;

            	    }
            	    break;

            	default :
            	    if ( cnt73 >= 1 ) break loop73;
            	    if (state.backtracking>0) {state.failed=true; return retval;}
                        EarlyExitException eee =
                            new EarlyExitException(73, input);
                        throw eee;
                }
                cnt73++;
            } while (true);


            }

            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 66, statement_list_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "statement_list"


    public static class expression_statement_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "expression_statement"
    // C.g:504:1: expression_statement : ( ';' | expression ';' );
    public final CParser.expression_statement_return expression_statement() throws RecognitionException {
        CParser.expression_statement_return retval = new CParser.expression_statement_return();
        retval.start = input.LT(1);

        int expression_statement_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 67) ) { return retval; }

            // C.g:505:2: ( ';' | expression ';' )
            int alt74=2;
            int LA74_0 = input.LA(1);

            if ( (LA74_0==47) ) {
                alt74=1;
            }
            else if ( (LA74_0==CHARACTER_LITERAL||LA74_0==DECIMAL_LITERAL||LA74_0==FLOATING_POINT_LITERAL||LA74_0==HEX_LITERAL||LA74_0==IDENTIFIER||LA74_0==OCTAL_LITERAL||LA74_0==STRING_LITERAL||LA74_0==23||LA74_0==28||LA74_0==30||LA74_0==32||(LA74_0 >= 34 && LA74_0 <= 35)||(LA74_0 >= 38 && LA74_0 <= 39)||LA74_0==89||LA74_0==104) ) {
                alt74=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 74, 0, input);

                throw nvae;

            }
            switch (alt74) {
                case 1 :
                    // C.g:505:4: ';'
                    {
                    match(input,47,FOLLOW_47_in_expression_statement2199); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:506:4: expression ';'
                    {
                    pushFollow(FOLLOW_expression_in_expression_statement2204);
                    expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,47,FOLLOW_47_in_expression_statement2206); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 67, expression_statement_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "expression_statement"


    public static class selection_statement_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "selection_statement"
    // C.g:509:1: selection_statement : ( 'if' '(' expression ')' statement ( options {k=1; backtrack=false; } : 'else' statement )? | 'switch' '(' expression ')' statement );
    public final CParser.selection_statement_return selection_statement() throws RecognitionException {
        InstrumentationInfo_stack.push(new InstrumentationInfo_scope());

        CParser.selection_statement_return retval = new CParser.selection_statement_return();
        retval.start = input.LT(1);

        int selection_statement_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 68) ) { return retval; }

            // C.g:511:2: ( 'if' '(' expression ')' statement ( options {k=1; backtrack=false; } : 'else' statement )? | 'switch' '(' expression ')' statement )
            int alt76=2;
            int LA76_0 = input.LA(1);

            if ( (LA76_0==82) ) {
                alt76=1;
            }
            else if ( (LA76_0==92) ) {
                alt76=2;
            }
            else {
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 76, 0, input);

                throw nvae;

            }
            switch (alt76) {
                case 1 :
                    // C.g:511:4: 'if' '(' expression ')' statement ( options {k=1; backtrack=false; } : 'else' statement )?
                    {
                    match(input,82,FOLLOW_82_in_selection_statement2223); if (state.failed) return retval;

                    match(input,30,FOLLOW_30_in_selection_statement2225); if (state.failed) return retval;

                    pushFollow(FOLLOW_expression_in_selection_statement2227);
                    expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_selection_statement2229); if (state.failed) return retval;

                    if ( state.backtracking==0 ) {setupScopeVarsIfBranchWithPassingAttribute();}

                    pushFollow(FOLLOW_statement_in_selection_statement2233);
                    statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    // C.g:511:86: ( options {k=1; backtrack=false; } : 'else' statement )?
                    int alt75=2;
                    int LA75_0 = input.LA(1);

                    if ( (LA75_0==76) ) {
                        int LA75_1 = input.LA(2);

                        if ( (true) ) {
                            alt75=1;
                        }
                    }
                    switch (alt75) {
                        case 1 :
                            // C.g:511:119: 'else' statement
                            {
                            match(input,76,FOLLOW_76_in_selection_statement2248); if (state.failed) return retval;

                            if ( state.backtracking==0 ) {setupScopeVarsIfBranchWithPassingAttribute();}

                            pushFollow(FOLLOW_statement_in_selection_statement2252);
                            statement();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    }
                    break;
                case 2 :
                    // C.g:512:4: 'switch' '(' expression ')' statement
                    {
                    match(input,92,FOLLOW_92_in_selection_statement2259); if (state.failed) return retval;

                    match(input,30,FOLLOW_30_in_selection_statement2261); if (state.failed) return retval;

                    pushFollow(FOLLOW_expression_in_selection_statement2263);
                    expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_selection_statement2265); if (state.failed) return retval;

                    pushFollow(FOLLOW_statement_in_selection_statement2267);
                    statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 68, selection_statement_StartIndex); }

            InstrumentationInfo_stack.pop();

        }
        return retval;
    }
    // $ANTLR end "selection_statement"


    public static class iteration_statement_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "iteration_statement"
    // C.g:515:1: iteration_statement : ( 'while' '(' expression ')' statement | 'do' statement 'while' '(' expression ')' ';' | 'for' '(' expression_statement expression_statement ( expression )? ')' statement );
    public final CParser.iteration_statement_return iteration_statement() throws RecognitionException {
        InstrumentationInfo_stack.push(new InstrumentationInfo_scope());

        CParser.iteration_statement_return retval = new CParser.iteration_statement_return();
        retval.start = input.LT(1);

        int iteration_statement_StartIndex = input.index();


          setupScopeVarsIfBranchWithPassingAttribute();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 69) ) { return retval; }

            // C.g:520:2: ( 'while' '(' expression ')' statement | 'do' statement 'while' '(' expression ')' ';' | 'for' '(' expression_statement expression_statement ( expression )? ')' statement )
            int alt78=3;
            switch ( input.LA(1) ) {
            case 98:
                {
                alt78=1;
                }
                break;
            case 74:
                {
                alt78=2;
                }
                break;
            case 80:
                {
                alt78=3;
                }
                break;
            default:
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 78, 0, input);

                throw nvae;

            }

            switch (alt78) {
                case 1 :
                    // C.g:520:4: 'while' '(' expression ')' statement
                    {
                    match(input,98,FOLLOW_98_in_iteration_statement2287); if (state.failed) return retval;

                    match(input,30,FOLLOW_30_in_iteration_statement2289); if (state.failed) return retval;

                    pushFollow(FOLLOW_expression_in_iteration_statement2291);
                    expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_iteration_statement2293); if (state.failed) return retval;

                    pushFollow(FOLLOW_statement_in_iteration_statement2295);
                    statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:521:4: 'do' statement 'while' '(' expression ')' ';'
                    {
                    match(input,74,FOLLOW_74_in_iteration_statement2300); if (state.failed) return retval;

                    pushFollow(FOLLOW_statement_in_iteration_statement2302);
                    statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,98,FOLLOW_98_in_iteration_statement2304); if (state.failed) return retval;

                    match(input,30,FOLLOW_30_in_iteration_statement2306); if (state.failed) return retval;

                    pushFollow(FOLLOW_expression_in_iteration_statement2308);
                    expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,31,FOLLOW_31_in_iteration_statement2310); if (state.failed) return retval;

                    match(input,47,FOLLOW_47_in_iteration_statement2312); if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:522:4: 'for' '(' expression_statement expression_statement ( expression )? ')' statement
                    {
                    match(input,80,FOLLOW_80_in_iteration_statement2317); if (state.failed) return retval;

                    match(input,30,FOLLOW_30_in_iteration_statement2319); if (state.failed) return retval;

                    pushFollow(FOLLOW_expression_statement_in_iteration_statement2321);
                    expression_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    pushFollow(FOLLOW_expression_statement_in_iteration_statement2323);
                    expression_statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    // C.g:522:56: ( expression )?
                    int alt77=2;
                    int LA77_0 = input.LA(1);

                    if ( (LA77_0==CHARACTER_LITERAL||LA77_0==DECIMAL_LITERAL||LA77_0==FLOATING_POINT_LITERAL||LA77_0==HEX_LITERAL||LA77_0==IDENTIFIER||LA77_0==OCTAL_LITERAL||LA77_0==STRING_LITERAL||LA77_0==23||LA77_0==28||LA77_0==30||LA77_0==32||(LA77_0 >= 34 && LA77_0 <= 35)||(LA77_0 >= 38 && LA77_0 <= 39)||LA77_0==89||LA77_0==104) ) {
                        alt77=1;
                    }
                    switch (alt77) {
                        case 1 :
                            // C.g:522:56: expression
                            {
                            pushFollow(FOLLOW_expression_in_iteration_statement2325);
                            expression();

                            state._fsp--;
                            if (state.failed) return retval;

                            }
                            break;

                    }


                    match(input,31,FOLLOW_31_in_iteration_statement2328); if (state.failed) return retval;

                    pushFollow(FOLLOW_statement_in_iteration_statement2330);
                    statement();

                    state._fsp--;
                    if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 69, iteration_statement_StartIndex); }

            InstrumentationInfo_stack.pop();

        }
        return retval;
    }
    // $ANTLR end "iteration_statement"


    public static class jump_statement_return extends ParserRuleReturnScope {
        public StringTemplate st;
        public Object getTemplate() { return st; }
        public String toString() { return st==null?null:st.toString(); }
    };


    // $ANTLR start "jump_statement"
    // C.g:525:1: jump_statement : ( 'goto' IDENTIFIER ';' | 'continue' ';' | 'break' ';' | 'return' ';' | 'return' expression ';' );
    public final CParser.jump_statement_return jump_statement() throws RecognitionException {
        CParser.jump_statement_return retval = new CParser.jump_statement_return();
        retval.start = input.LT(1);

        int jump_statement_StartIndex = input.index();

        try {
            if ( state.backtracking>0 && alreadyParsedRule(input, 70) ) { return retval; }

            // C.g:526:2: ( 'goto' IDENTIFIER ';' | 'continue' ';' | 'break' ';' | 'return' ';' | 'return' expression ';' )
            int alt79=5;
            switch ( input.LA(1) ) {
            case 81:
                {
                alt79=1;
                }
                break;
            case 72:
                {
                alt79=2;
                }
                break;
            case 68:
                {
                alt79=3;
                }
                break;
            case 86:
                {
                int LA79_4 = input.LA(2);

                if ( (LA79_4==47) ) {
                    alt79=4;
                }
                else if ( (LA79_4==CHARACTER_LITERAL||LA79_4==DECIMAL_LITERAL||LA79_4==FLOATING_POINT_LITERAL||LA79_4==HEX_LITERAL||LA79_4==IDENTIFIER||LA79_4==OCTAL_LITERAL||LA79_4==STRING_LITERAL||LA79_4==23||LA79_4==28||LA79_4==30||LA79_4==32||(LA79_4 >= 34 && LA79_4 <= 35)||(LA79_4 >= 38 && LA79_4 <= 39)||LA79_4==89||LA79_4==104) ) {
                    alt79=5;
                }
                else {
                    if (state.backtracking>0) {state.failed=true; return retval;}
                    NoViableAltException nvae =
                        new NoViableAltException("", 79, 4, input);

                    throw nvae;

                }
                }
                break;
            default:
                if (state.backtracking>0) {state.failed=true; return retval;}
                NoViableAltException nvae =
                    new NoViableAltException("", 79, 0, input);

                throw nvae;

            }

            switch (alt79) {
                case 1 :
                    // C.g:526:4: 'goto' IDENTIFIER ';'
                    {
                    match(input,81,FOLLOW_81_in_jump_statement2341); if (state.failed) return retval;

                    match(input,IDENTIFIER,FOLLOW_IDENTIFIER_in_jump_statement2343); if (state.failed) return retval;

                    match(input,47,FOLLOW_47_in_jump_statement2345); if (state.failed) return retval;

                    }
                    break;
                case 2 :
                    // C.g:527:4: 'continue' ';'
                    {
                    match(input,72,FOLLOW_72_in_jump_statement2350); if (state.failed) return retval;

                    match(input,47,FOLLOW_47_in_jump_statement2352); if (state.failed) return retval;

                    }
                    break;
                case 3 :
                    // C.g:528:4: 'break' ';'
                    {
                    match(input,68,FOLLOW_68_in_jump_statement2357); if (state.failed) return retval;

                    match(input,47,FOLLOW_47_in_jump_statement2359); if (state.failed) return retval;

                    }
                    break;
                case 4 :
                    // C.g:529:4: 'return' ';'
                    {
                    match(input,86,FOLLOW_86_in_jump_statement2364); if (state.failed) return retval;

                    match(input,47,FOLLOW_47_in_jump_statement2366); if (state.failed) return retval;

                    }
                    break;
                case 5 :
                    // C.g:530:4: 'return' expression ';'
                    {
                    match(input,86,FOLLOW_86_in_jump_statement2371); if (state.failed) return retval;

                    pushFollow(FOLLOW_expression_in_jump_statement2373);
                    expression();

                    state._fsp--;
                    if (state.failed) return retval;

                    match(input,47,FOLLOW_47_in_jump_statement2375); if (state.failed) return retval;

                    }
                    break;

            }
            retval.stop = input.LT(-1);


        }
        catch (RecognitionException re) {
            reportError(re);
            recover(input,re);
        }

        finally {
        	// do for sure before leaving
            if ( state.backtracking>0 ) { memoize(input, 70, jump_statement_StartIndex); }

        }
        return retval;
    }
    // $ANTLR end "jump_statement"

    // $ANTLR start synpred3_C
    public final void synpred3_C_fragment() throws RecognitionException {
        // C.g:114:18: ( declaration_specifiers )
        // C.g:114:18: declaration_specifiers
        {
        pushFollow(FOLLOW_declaration_specifiers_in_synpred3_C157);
        declaration_specifiers();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred3_C

    // $ANTLR start synpred5_C
    public final void synpred5_C_fragment() throws RecognitionException {
        // C.g:114:16: ( ( declaration_specifiers )? declarator ( declaration )* '{' )
        // C.g:114:18: ( declaration_specifiers )? declarator ( declaration )* '{'
        {
        // C.g:114:18: ( declaration_specifiers )?
        int alt80=2;
        int LA80_0 = input.LA(1);

        if ( ((LA80_0 >= 64 && LA80_0 <= 65)||LA80_0==67||(LA80_0 >= 70 && LA80_0 <= 71)||LA80_0==75||(LA80_0 >= 77 && LA80_0 <= 79)||(LA80_0 >= 83 && LA80_0 <= 85)||(LA80_0 >= 87 && LA80_0 <= 88)||(LA80_0 >= 90 && LA80_0 <= 91)||(LA80_0 >= 94 && LA80_0 <= 97)) ) {
            alt80=1;
        }
        else if ( (LA80_0==IDENTIFIER) ) {
            switch ( input.LA(2) ) {
                case 32:
                    {
                    alt80=1;
                    }
                    break;
                case IDENTIFIER:
                    {
                    int LA80_19 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 30:
                    {
                    int LA80_20 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 67:
                case 78:
                case 85:
                case 90:
                    {
                    int LA80_21 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 96:
                    {
                    int LA80_22 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 70:
                    {
                    int LA80_23 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 87:
                    {
                    int LA80_24 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 83:
                    {
                    int LA80_25 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 84:
                    {
                    int LA80_26 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 79:
                    {
                    int LA80_27 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 75:
                    {
                    int LA80_28 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 88:
                    {
                    int LA80_29 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 95:
                    {
                    int LA80_30 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 64:
                    {
                    int LA80_31 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 91:
                case 94:
                    {
                    int LA80_32 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 77:
                    {
                    int LA80_33 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
                case 65:
                case 71:
                case 97:
                    {
                    int LA80_34 = input.LA(3);

                    if ( (((synpred3_C()&&synpred3_C())&&(isTypeName(input.LT(1).getText())))) ) {
                        alt80=1;
                    }
                    }
                    break;
            }

        }
        switch (alt80) {
            case 1 :
                // C.g:114:18: declaration_specifiers
                {
                pushFollow(FOLLOW_declaration_specifiers_in_synpred5_C157);
                declaration_specifiers();

                state._fsp--;
                if (state.failed) return ;

                }
                break;

        }


        pushFollow(FOLLOW_declarator_in_synpred5_C160);
        declarator();

        state._fsp--;
        if (state.failed) return ;

        // C.g:114:53: ( declaration )*
        loop81:
        do {
            int alt81=2;
            int LA81_0 = input.LA(1);

            if ( (LA81_0==IDENTIFIER||(LA81_0 >= 64 && LA81_0 <= 65)||LA81_0==67||(LA81_0 >= 70 && LA81_0 <= 71)||LA81_0==75||(LA81_0 >= 77 && LA81_0 <= 79)||(LA81_0 >= 83 && LA81_0 <= 85)||(LA81_0 >= 87 && LA81_0 <= 88)||(LA81_0 >= 90 && LA81_0 <= 91)||(LA81_0 >= 93 && LA81_0 <= 97)) ) {
                alt81=1;
            }


            switch (alt81) {
        	case 1 :
        	    // C.g:114:53: declaration
        	    {
        	    pushFollow(FOLLOW_declaration_in_synpred5_C162);
        	    declaration();

        	    state._fsp--;
        	    if (state.failed) return ;

        	    }
        	    break;

        	default :
        	    break loop81;
            }
        } while (true);


        match(input,99,FOLLOW_99_in_synpred5_C165); if (state.failed) return ;

        }

    }
    // $ANTLR end synpred5_C

    // $ANTLR start synpred6_C
    public final void synpred6_C_fragment() throws RecognitionException {
        // C.g:114:4: ( ( attribute )? ( ( declaration_specifiers )? declarator ( declaration )* '{' )=> function_definition )
        // C.g:114:4: ( attribute )? ( ( declaration_specifiers )? declarator ( declaration )* '{' )=> function_definition
        {
        // C.g:114:4: ( attribute )?
        int alt82=2;
        int LA82_0 = input.LA(1);

        if ( (LA82_0==59) ) {
            alt82=1;
        }
        switch (alt82) {
            case 1 :
                // C.g:114:4: attribute
                {
                pushFollow(FOLLOW_attribute_in_synpred6_C151);
                attribute();

                state._fsp--;
                if (state.failed) return ;

                }
                break;

        }


        pushFollow(FOLLOW_function_definition_in_synpred6_C170);
        function_definition();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred6_C

    // $ANTLR start synpred8_C
    public final void synpred8_C_fragment() throws RecognitionException {
        // C.g:124:4: ( declaration_specifiers )
        // C.g:124:4: declaration_specifiers
        {
        pushFollow(FOLLOW_declaration_specifiers_in_synpred8_C204);
        declaration_specifiers();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred8_C

    // $ANTLR start synpred11_C
    public final void synpred11_C_fragment() throws RecognitionException {
        // C.g:141:14: ( declaration_specifiers )
        // C.g:141:14: declaration_specifiers
        {
        pushFollow(FOLLOW_declaration_specifiers_in_synpred11_C282);
        declaration_specifiers();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred11_C

    // $ANTLR start synpred17_C
    public final void synpred17_C_fragment() throws RecognitionException {
        // C.g:154:32: ( type_specifier )
        // C.g:154:32: type_specifier
        {
        pushFollow(FOLLOW_type_specifier_in_synpred17_C351);
        type_specifier();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred17_C

    // $ANTLR start synpred41_C
    public final void synpred41_C_fragment() throws RecognitionException {
        // C.g:217:23: ( type_specifier )
        // C.g:217:23: type_specifier
        {
        pushFollow(FOLLOW_type_specifier_in_synpred41_C618);
        type_specifier();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred41_C

    // $ANTLR start synpred52_C
    public final void synpred52_C_fragment() throws RecognitionException {
        // C.g:251:4: ( ( pointer )? direct_declarator )
        // C.g:251:4: ( pointer )? direct_declarator
        {
        // C.g:251:4: ( pointer )?
        int alt87=2;
        int LA87_0 = input.LA(1);

        if ( (LA87_0==32) ) {
            alt87=1;
        }
        switch (alt87) {
            case 1 :
                // C.g:251:4: pointer
                {
                pushFollow(FOLLOW_pointer_in_synpred52_C776);
                pointer();

                state._fsp--;
                if (state.failed) return ;

                }
                break;

        }


        pushFollow(FOLLOW_direct_declarator_in_synpred52_C779);
        direct_declarator();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred52_C

    // $ANTLR start synpred54_C
    public final void synpred54_C_fragment() throws RecognitionException {
        // C.g:265:9: ( declarator_suffix )
        // C.g:265:9: declarator_suffix
        {
        pushFollow(FOLLOW_declarator_suffix_in_synpred54_C828);
        declarator_suffix();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred54_C

    // $ANTLR start synpred57_C
    public final void synpred57_C_fragment() throws RecognitionException {
        // C.g:271:9: ( '(' parameter_type_list ')' )
        // C.g:271:9: '(' parameter_type_list ')'
        {
        match(input,30,FOLLOW_30_in_synpred57_C868); if (state.failed) return ;

        pushFollow(FOLLOW_parameter_type_list_in_synpred57_C870);
        parameter_type_list();

        state._fsp--;
        if (state.failed) return ;

        match(input,31,FOLLOW_31_in_synpred57_C872); if (state.failed) return ;

        }

    }
    // $ANTLR end synpred57_C

    // $ANTLR start synpred58_C
    public final void synpred58_C_fragment() throws RecognitionException {
        // C.g:272:9: ( '(' identifier_list ')' )
        // C.g:272:9: '(' identifier_list ')'
        {
        match(input,30,FOLLOW_30_in_synpred58_C882); if (state.failed) return ;

        pushFollow(FOLLOW_identifier_list_in_synpred58_C884);
        identifier_list();

        state._fsp--;
        if (state.failed) return ;

        match(input,31,FOLLOW_31_in_synpred58_C886); if (state.failed) return ;

        }

    }
    // $ANTLR end synpred58_C

    // $ANTLR start synpred59_C
    public final void synpred59_C_fragment() throws RecognitionException {
        // C.g:277:8: ( type_qualifier )
        // C.g:277:8: type_qualifier
        {
        pushFollow(FOLLOW_type_qualifier_in_synpred59_C911);
        type_qualifier();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred59_C

    // $ANTLR start synpred60_C
    public final void synpred60_C_fragment() throws RecognitionException {
        // C.g:277:24: ( pointer )
        // C.g:277:24: pointer
        {
        pushFollow(FOLLOW_pointer_in_synpred60_C914);
        pointer();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred60_C

    // $ANTLR start synpred61_C
    public final void synpred61_C_fragment() throws RecognitionException {
        // C.g:277:4: ( '*' ( type_qualifier )+ ( pointer )? )
        // C.g:277:4: '*' ( type_qualifier )+ ( pointer )?
        {
        match(input,32,FOLLOW_32_in_synpred61_C909); if (state.failed) return ;

        // C.g:277:8: ( type_qualifier )+
        int cnt88=0;
        loop88:
        do {
            int alt88=2;
            int LA88_0 = input.LA(1);

            if ( (LA88_0==65||LA88_0==71||LA88_0==97) ) {
                alt88=1;
            }


            switch (alt88) {
        	case 1 :
        	    // C.g:277:8: type_qualifier
        	    {
        	    pushFollow(FOLLOW_type_qualifier_in_synpred61_C911);
        	    type_qualifier();

        	    state._fsp--;
        	    if (state.failed) return ;

        	    }
        	    break;

        	default :
        	    if ( cnt88 >= 1 ) break loop88;
        	    if (state.backtracking>0) {state.failed=true; return ;}
                    EarlyExitException eee =
                        new EarlyExitException(88, input);
                    throw eee;
            }
            cnt88++;
        } while (true);


        // C.g:277:24: ( pointer )?
        int alt89=2;
        int LA89_0 = input.LA(1);

        if ( (LA89_0==32) ) {
            alt89=1;
        }
        switch (alt89) {
            case 1 :
                // C.g:277:24: pointer
                {
                pushFollow(FOLLOW_pointer_in_synpred61_C914);
                pointer();

                state._fsp--;
                if (state.failed) return ;

                }
                break;

        }


        }

    }
    // $ANTLR end synpred61_C

    // $ANTLR start synpred62_C
    public final void synpred62_C_fragment() throws RecognitionException {
        // C.g:278:4: ( '*' pointer )
        // C.g:278:4: '*' pointer
        {
        match(input,32,FOLLOW_32_in_synpred62_C920); if (state.failed) return ;

        pushFollow(FOLLOW_pointer_in_synpred62_C922);
        pointer();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred62_C

    // $ANTLR start synpred65_C
    public final void synpred65_C_fragment() throws RecognitionException {
        // C.g:291:28: ( declarator )
        // C.g:291:28: declarator
        {
        pushFollow(FOLLOW_declarator_in_synpred65_C977);
        declarator();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred65_C

    // $ANTLR start synpred66_C
    public final void synpred66_C_fragment() throws RecognitionException {
        // C.g:291:39: ( abstract_declarator )
        // C.g:291:39: abstract_declarator
        {
        pushFollow(FOLLOW_abstract_declarator_in_synpred66_C979);
        abstract_declarator();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred66_C

    // $ANTLR start synpred69_C
    public final void synpred69_C_fragment() throws RecognitionException {
        // C.g:303:12: ( direct_abstract_declarator )
        // C.g:303:12: direct_abstract_declarator
        {
        pushFollow(FOLLOW_direct_abstract_declarator_in_synpred69_C1026);
        direct_abstract_declarator();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred69_C

    // $ANTLR start synpred72_C
    public final void synpred72_C_fragment() throws RecognitionException {
        // C.g:308:65: ( abstract_declarator_suffix )
        // C.g:308:65: abstract_declarator_suffix
        {
        pushFollow(FOLLOW_abstract_declarator_suffix_in_synpred72_C1057);
        abstract_declarator_suffix();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred72_C

    // $ANTLR start synpred85_C
    public final void synpred85_C_fragment() throws RecognitionException {
        // C.g:342:4: ( '(' type_name ')' cast_expression )
        // C.g:342:4: '(' type_name ')' cast_expression
        {
        match(input,30,FOLLOW_30_in_synpred85_C1227); if (state.failed) return ;

        pushFollow(FOLLOW_type_name_in_synpred85_C1229);
        type_name();

        state._fsp--;
        if (state.failed) return ;

        match(input,31,FOLLOW_31_in_synpred85_C1231); if (state.failed) return ;

        pushFollow(FOLLOW_cast_expression_in_synpred85_C1233);
        cast_expression();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred85_C

    // $ANTLR start synpred90_C
    public final void synpred90_C_fragment() throws RecognitionException {
        // C.g:351:4: ( 'sizeof' unary_expression )
        // C.g:351:4: 'sizeof' unary_expression
        {
        match(input,89,FOLLOW_89_in_synpred90_C1275); if (state.failed) return ;

        pushFollow(FOLLOW_unary_expression_in_synpred90_C1277);
        unary_expression();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred90_C

    // $ANTLR start synpred112_C
    public final void synpred112_C_fragment() throws RecognitionException {
        // C.g:404:4: ( lvalue assignment_operator assignment_expression )
        // C.g:404:4: lvalue assignment_operator assignment_expression
        {
        pushFollow(FOLLOW_lvalue_in_synpred112_C1600);
        lvalue();

        state._fsp--;
        if (state.failed) return ;

        pushFollow(FOLLOW_assignment_operator_in_synpred112_C1602);
        assignment_operator();

        state._fsp--;
        if (state.failed) return ;

        pushFollow(FOLLOW_assignment_expression_in_synpred112_C1604);
        assignment_expression();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred112_C

    // $ANTLR start synpred139_C
    public final void synpred139_C_fragment() throws RecognitionException {
        // C.g:465:4: ({...}? expression_statement )
        // C.g:465:4: {...}? expression_statement
        {
        if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
            if (state.backtracking>0) {state.failed=true; return ;}
            throw new FailedPredicateException(input, "synpred139_C", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
        }

        pushFollow(FOLLOW_expression_statement_in_synpred139_C1888);
        expression_statement();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred139_C

    // $ANTLR start synpred140_C
    public final void synpred140_C_fragment() throws RecognitionException {
        // C.g:467:4: ( expression_statement )
        // C.g:467:4: expression_statement
        {
        pushFollow(FOLLOW_expression_statement_in_synpred140_C1912);
        expression_statement();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred140_C

    // $ANTLR start synpred141_C
    public final void synpred141_C_fragment() throws RecognitionException {
        // C.g:468:4: ({...}? selection_statement )
        // C.g:468:4: {...}? selection_statement
        {
        if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
            if (state.backtracking>0) {state.failed=true; return ;}
            throw new FailedPredicateException(input, "synpred141_C", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
        }

        pushFollow(FOLLOW_selection_statement_in_synpred141_C1919);
        selection_statement();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred141_C

    // $ANTLR start synpred142_C
    public final void synpred142_C_fragment() throws RecognitionException {
        // C.g:470:4: ( selection_statement )
        // C.g:470:4: selection_statement
        {
        pushFollow(FOLLOW_selection_statement_in_synpred142_C1943);
        selection_statement();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred142_C

    // $ANTLR start synpred143_C
    public final void synpred143_C_fragment() throws RecognitionException {
        // C.g:471:4: ({...}? iteration_statement )
        // C.g:471:4: {...}? iteration_statement
        {
        if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
            if (state.backtracking>0) {state.failed=true; return ;}
            throw new FailedPredicateException(input, "synpred143_C", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
        }

        pushFollow(FOLLOW_iteration_statement_in_synpred143_C1950);
        iteration_statement();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred143_C

    // $ANTLR start synpred144_C
    public final void synpred144_C_fragment() throws RecognitionException {
        // C.g:473:4: ( iteration_statement )
        // C.g:473:4: iteration_statement
        {
        pushFollow(FOLLOW_iteration_statement_in_synpred144_C1974);
        iteration_statement();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred144_C

    // $ANTLR start synpred146_C
    public final void synpred146_C_fragment() throws RecognitionException {
        // C.g:482:4: ({...}? 'case' constant_expression ':' statement )
        // C.g:482:4: {...}? 'case' constant_expression ':' statement
        {
        if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
            if (state.backtracking>0) {state.failed=true; return ;}
            throw new FailedPredicateException(input, "synpred146_C", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
        }

        match(input,69,FOLLOW_69_in_synpred146_C2005); if (state.failed) return ;

        pushFollow(FOLLOW_constant_expression_in_synpred146_C2008);
        constant_expression();

        state._fsp--;
        if (state.failed) return ;

        match(input,46,FOLLOW_46_in_synpred146_C2010); if (state.failed) return ;

        pushFollow(FOLLOW_statement_in_synpred146_C2015);
        statement();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred146_C

    // $ANTLR start synpred147_C
    public final void synpred147_C_fragment() throws RecognitionException {
        // C.g:484:4: ( 'case' constant_expression ':' statement )
        // C.g:484:4: 'case' constant_expression ':' statement
        {
        match(input,69,FOLLOW_69_in_synpred147_C2044); if (state.failed) return ;

        pushFollow(FOLLOW_constant_expression_in_synpred147_C2047);
        constant_expression();

        state._fsp--;
        if (state.failed) return ;

        match(input,46,FOLLOW_46_in_synpred147_C2049); if (state.failed) return ;

        pushFollow(FOLLOW_statement_in_synpred147_C2051);
        statement();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred147_C

    // $ANTLR start synpred148_C
    public final void synpred148_C_fragment() throws RecognitionException {
        // C.g:485:5: ({...}? 'default' ':' statement )
        // C.g:485:5: {...}? 'default' ':' statement
        {
        if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
            if (state.backtracking>0) {state.failed=true; return ;}
            throw new FailedPredicateException(input, "synpred148_C", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
        }

        match(input,73,FOLLOW_73_in_synpred148_C2060); if (state.failed) return ;

        match(input,46,FOLLOW_46_in_synpred148_C2062); if (state.failed) return ;

        pushFollow(FOLLOW_statement_in_synpred148_C2066);
        statement();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred148_C

    // $ANTLR start synpred149_C
    public final void synpred149_C_fragment() throws RecognitionException {
        // C.g:495:76: ( declaration )
        // C.g:495:76: declaration
        {
        pushFollow(FOLLOW_declaration_in_synpred149_C2121);
        declaration();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred149_C

    // $ANTLR start synpred151_C
    public final void synpred151_C_fragment() throws RecognitionException {
        // C.g:495:5: ( '{' {...}? ( declaration )* ( statement_list )? '}' )
        // C.g:495:5: '{' {...}? ( declaration )* ( statement_list )? '}'
        {
        match(input,99,FOLLOW_99_in_synpred151_C2117); if (state.failed) return ;

        if ( !((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)) ) {
            if (state.backtracking>0) {state.failed=true; return ;}
            throw new FailedPredicateException(input, "synpred151_C", "$InstrumentationInfo.size()>0 && $InstrumentationInfo::isBranch");
        }

        // C.g:495:76: ( declaration )*
        loop91:
        do {
            int alt91=2;
            alt91 = dfa91.predict(input);
            switch (alt91) {
        	case 1 :
        	    // C.g:495:76: declaration
        	    {
        	    pushFollow(FOLLOW_declaration_in_synpred151_C2121);
        	    declaration();

        	    state._fsp--;
        	    if (state.failed) return ;

        	    }
        	    break;

        	default :
        	    break loop91;
            }
        } while (true);


        // C.g:495:132: ( statement_list )?
        int alt92=2;
        int LA92_0 = input.LA(1);

        if ( (LA92_0==CHARACTER_LITERAL||LA92_0==DECIMAL_LITERAL||LA92_0==FLOATING_POINT_LITERAL||LA92_0==HEX_LITERAL||LA92_0==IDENTIFIER||LA92_0==OCTAL_LITERAL||LA92_0==STRING_LITERAL||LA92_0==23||LA92_0==28||LA92_0==30||LA92_0==32||(LA92_0 >= 34 && LA92_0 <= 35)||(LA92_0 >= 38 && LA92_0 <= 39)||LA92_0==47||(LA92_0 >= 68 && LA92_0 <= 69)||(LA92_0 >= 72 && LA92_0 <= 74)||(LA92_0 >= 80 && LA92_0 <= 82)||LA92_0==86||LA92_0==89||LA92_0==92||(LA92_0 >= 98 && LA92_0 <= 99)||LA92_0==104) ) {
            alt92=1;
        }
        switch (alt92) {
            case 1 :
                // C.g:495:132: statement_list
                {
                pushFollow(FOLLOW_statement_list_in_synpred151_C2127);
                statement_list();

                state._fsp--;
                if (state.failed) return ;

                }
                break;

        }


        match(input,103,FOLLOW_103_in_synpred151_C2133); if (state.failed) return ;

        }

    }
    // $ANTLR end synpred151_C

    // $ANTLR start synpred152_C
    public final void synpred152_C_fragment() throws RecognitionException {
        // C.g:497:10: ( declaration )
        // C.g:497:10: declaration
        {
        pushFollow(FOLLOW_declaration_in_synpred152_C2168);
        declaration();

        state._fsp--;
        if (state.failed) return ;

        }

    }
    // $ANTLR end synpred152_C

    // Delegated rules

    public final boolean synpred65_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred65_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred142_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred142_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred41_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred41_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred148_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred148_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred139_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred139_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred143_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred143_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred6_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred6_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred144_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred144_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred141_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred141_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred5_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred5_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred62_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred62_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred17_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred17_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred54_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred54_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred147_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred147_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred60_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred60_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred59_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred59_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred52_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred52_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred8_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred8_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred69_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred69_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred151_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred151_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred57_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred57_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred66_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred66_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred61_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred61_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred85_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred85_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred149_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred149_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred152_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred152_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred112_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred112_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred146_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred146_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred72_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred72_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred90_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred90_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred11_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred11_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred3_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred3_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred140_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred140_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }
    public final boolean synpred58_C() {
        state.backtracking++;
        int start = input.mark();
        try {
            synpred58_C_fragment(); // can never throw exception
        } catch (RecognitionException re) {
            System.err.println("impossible: "+re);
        }
        boolean success = !state.failed;
        input.rewind(start);
        state.backtracking--;
        state.failed=false;
        return success;
    }


    protected DFA56 dfa56 = new DFA56(this);
    protected DFA66 dfa66 = new DFA66(this);
    protected DFA68 dfa68 = new DFA68(this);
    protected DFA70 dfa70 = new DFA70(this);
    protected DFA91 dfa91 = new DFA91(this);
    static final String DFA56_eotS =
        "\162\uffff";
    static final String DFA56_eofS =
        "\1\uffff\2\17\157\uffff";
    static final String DFA56_minS =
        "\1\4\2\30\5\4\6\0\27\uffff\6\0\27\uffff\7\0\15\uffff\34\0";
    static final String DFA56_maxS =
        "\1\150\2\147\5\150\6\0\27\uffff\6\0\27\uffff\7\0\15\uffff\34\0";
    static final String DFA56_acceptS =
        "\16\uffff\1\1\1\2\142\uffff";
    static final String DFA56_specialS =
        "\10\uffff\1\0\1\1\1\2\1\3\1\4\1\5\27\uffff\1\6\1\7\1\10\1\11\1\12"+
        "\1\13\27\uffff\1\14\1\15\1\16\1\17\1\20\1\21\1\22\15\uffff\1\23"+
        "\1\24\1\25\1\26\1\27\1\30\1\31\1\32\1\33\1\34\1\35\1\36\1\37\1\40"+
        "\1\41\1\42\1\43\1\44\1\45\1\46\1\47\1\50\1\51\1\52\1\53\1\54\1\55"+
        "\1\56}>";
    static final String[] DFA56_transitionS = {
            "\1\2\1\uffff\1\2\2\uffff\1\2\1\uffff\1\2\1\uffff\1\1\4\uffff"+
            "\1\2\1\uffff\1\2\2\uffff\1\6\4\uffff\1\6\1\uffff\1\3\1\uffff"+
            "\1\6\1\uffff\1\6\1\4\2\uffff\1\6\1\5\61\uffff\1\7\16\uffff\1"+
            "\6",
            "\2\17\1\16\2\17\1\16\1\11\2\17\1\16\1\17\1\14\1\16\2\17\1\15"+
            "\1\16\1\13\1\12\1\uffff\1\17\1\16\4\17\1\16\1\17\1\16\4\17\1"+
            "\16\1\17\1\10\2\17\1\16\1\17\44\uffff\1\17\1\16\2\17",
            "\2\17\1\16\2\17\1\16\1\46\2\17\1\16\1\17\1\51\1\16\2\17\1\52"+
            "\1\16\1\50\1\47\1\uffff\1\17\1\16\4\17\1\16\1\17\1\16\4\17\1"+
            "\16\1\17\1\45\2\17\1\16\1\17\44\uffff\1\17\1\16\2\17",
            "\1\103\1\uffff\1\103\2\uffff\1\103\1\uffff\1\103\1\uffff\1"+
            "\102\4\uffff\1\103\1\uffff\1\103\2\uffff\1\107\4\uffff\1\107"+
            "\1\uffff\1\104\1\uffff\1\107\1\uffff\1\107\1\105\2\uffff\1\107"+
            "\1\106\30\uffff\2\17\4\uffff\2\17\3\uffff\1\17\1\uffff\1\17"+
            "\1\uffff\1\17\3\uffff\2\17\2\uffff\2\17\1\110\1\uffff\1\17\2"+
            "\uffff\4\17\6\uffff\1\107",
            "\1\127\1\uffff\1\127\2\uffff\1\127\1\uffff\1\127\1\uffff\1"+
            "\126\4\uffff\1\127\1\uffff\1\127\2\uffff\1\133\4\uffff\1\133"+
            "\1\uffff\1\130\1\uffff\1\133\1\uffff\1\133\1\131\2\uffff\1\133"+
            "\1\132\61\uffff\1\134\16\uffff\1\133",
            "\1\136\1\uffff\1\136\2\uffff\1\136\1\uffff\1\136\1\uffff\1"+
            "\135\4\uffff\1\136\1\uffff\1\136\2\uffff\1\142\4\uffff\1\142"+
            "\1\uffff\1\137\1\uffff\1\142\1\uffff\1\142\1\140\2\uffff\1\142"+
            "\1\141\61\uffff\1\143\16\uffff\1\142",
            "\1\146\1\uffff\1\146\2\uffff\1\146\1\uffff\1\146\1\uffff\1"+
            "\145\4\uffff\1\146\1\uffff\1\146\2\uffff\1\151\4\uffff\1\151"+
            "\1\uffff\1\144\1\uffff\1\151\1\uffff\1\151\1\147\2\uffff\1\151"+
            "\1\150\61\uffff\1\152\16\uffff\1\151",
            "\1\155\1\uffff\1\155\2\uffff\1\155\1\uffff\1\155\1\uffff\1"+
            "\154\4\uffff\1\155\1\uffff\1\155\2\uffff\1\160\4\uffff\1\160"+
            "\1\uffff\1\153\1\uffff\1\160\1\uffff\1\160\1\156\2\uffff\1\160"+
            "\1\157\61\uffff\1\161\16\uffff\1\160",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff"
    };

    static final short[] DFA56_eot = DFA.unpackEncodedString(DFA56_eotS);
    static final short[] DFA56_eof = DFA.unpackEncodedString(DFA56_eofS);
    static final char[] DFA56_min = DFA.unpackEncodedStringToUnsignedChars(DFA56_minS);
    static final char[] DFA56_max = DFA.unpackEncodedStringToUnsignedChars(DFA56_maxS);
    static final short[] DFA56_accept = DFA.unpackEncodedString(DFA56_acceptS);
    static final short[] DFA56_special = DFA.unpackEncodedString(DFA56_specialS);
    static final short[][] DFA56_transition;

    static {
        int numStates = DFA56_transitionS.length;
        DFA56_transition = new short[numStates][];
        for (int i=0; i<numStates; i++) {
            DFA56_transition[i] = DFA.unpackEncodedString(DFA56_transitionS[i]);
        }
    }

    class DFA56 extends DFA {

        public DFA56(BaseRecognizer recognizer) {
            this.recognizer = recognizer;
            this.decisionNumber = 56;
            this.eot = DFA56_eot;
            this.eof = DFA56_eof;
            this.min = DFA56_min;
            this.max = DFA56_max;
            this.accept = DFA56_accept;
            this.special = DFA56_special;
            this.transition = DFA56_transition;
        }
        public String getDescription() {
            return "403:1: assignment_expression : ( lvalue assignment_operator assignment_expression | conditional_expression );";
        }
        public int specialStateTransition(int s, IntStream _input) throws NoViableAltException {
            TokenStream input = (TokenStream)_input;
        	int _s = s;
            switch ( s ) {
                    case 0 : 
                        int LA56_8 = input.LA(1);

                         
                        int index56_8 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_8);

                        if ( s>=0 ) return s;
                        break;

                    case 1 : 
                        int LA56_9 = input.LA(1);

                         
                        int index56_9 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_9);

                        if ( s>=0 ) return s;
                        break;

                    case 2 : 
                        int LA56_10 = input.LA(1);

                         
                        int index56_10 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_10);

                        if ( s>=0 ) return s;
                        break;

                    case 3 : 
                        int LA56_11 = input.LA(1);

                         
                        int index56_11 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_11);

                        if ( s>=0 ) return s;
                        break;

                    case 4 : 
                        int LA56_12 = input.LA(1);

                         
                        int index56_12 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_12);

                        if ( s>=0 ) return s;
                        break;

                    case 5 : 
                        int LA56_13 = input.LA(1);

                         
                        int index56_13 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_13);

                        if ( s>=0 ) return s;
                        break;

                    case 6 : 
                        int LA56_37 = input.LA(1);

                         
                        int index56_37 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_37);

                        if ( s>=0 ) return s;
                        break;

                    case 7 : 
                        int LA56_38 = input.LA(1);

                         
                        int index56_38 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_38);

                        if ( s>=0 ) return s;
                        break;

                    case 8 : 
                        int LA56_39 = input.LA(1);

                         
                        int index56_39 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_39);

                        if ( s>=0 ) return s;
                        break;

                    case 9 : 
                        int LA56_40 = input.LA(1);

                         
                        int index56_40 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_40);

                        if ( s>=0 ) return s;
                        break;

                    case 10 : 
                        int LA56_41 = input.LA(1);

                         
                        int index56_41 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_41);

                        if ( s>=0 ) return s;
                        break;

                    case 11 : 
                        int LA56_42 = input.LA(1);

                         
                        int index56_42 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_42);

                        if ( s>=0 ) return s;
                        break;

                    case 12 : 
                        int LA56_66 = input.LA(1);

                         
                        int index56_66 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_66);

                        if ( s>=0 ) return s;
                        break;

                    case 13 : 
                        int LA56_67 = input.LA(1);

                         
                        int index56_67 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_67);

                        if ( s>=0 ) return s;
                        break;

                    case 14 : 
                        int LA56_68 = input.LA(1);

                         
                        int index56_68 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_68);

                        if ( s>=0 ) return s;
                        break;

                    case 15 : 
                        int LA56_69 = input.LA(1);

                         
                        int index56_69 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_69);

                        if ( s>=0 ) return s;
                        break;

                    case 16 : 
                        int LA56_70 = input.LA(1);

                         
                        int index56_70 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_70);

                        if ( s>=0 ) return s;
                        break;

                    case 17 : 
                        int LA56_71 = input.LA(1);

                         
                        int index56_71 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_71);

                        if ( s>=0 ) return s;
                        break;

                    case 18 : 
                        int LA56_72 = input.LA(1);

                         
                        int index56_72 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_72);

                        if ( s>=0 ) return s;
                        break;

                    case 19 : 
                        int LA56_86 = input.LA(1);

                         
                        int index56_86 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_86);

                        if ( s>=0 ) return s;
                        break;

                    case 20 : 
                        int LA56_87 = input.LA(1);

                         
                        int index56_87 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_87);

                        if ( s>=0 ) return s;
                        break;

                    case 21 : 
                        int LA56_88 = input.LA(1);

                         
                        int index56_88 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_88);

                        if ( s>=0 ) return s;
                        break;

                    case 22 : 
                        int LA56_89 = input.LA(1);

                         
                        int index56_89 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_89);

                        if ( s>=0 ) return s;
                        break;

                    case 23 : 
                        int LA56_90 = input.LA(1);

                         
                        int index56_90 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_90);

                        if ( s>=0 ) return s;
                        break;

                    case 24 : 
                        int LA56_91 = input.LA(1);

                         
                        int index56_91 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_91);

                        if ( s>=0 ) return s;
                        break;

                    case 25 : 
                        int LA56_92 = input.LA(1);

                         
                        int index56_92 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_92);

                        if ( s>=0 ) return s;
                        break;

                    case 26 : 
                        int LA56_93 = input.LA(1);

                         
                        int index56_93 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_93);

                        if ( s>=0 ) return s;
                        break;

                    case 27 : 
                        int LA56_94 = input.LA(1);

                         
                        int index56_94 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_94);

                        if ( s>=0 ) return s;
                        break;

                    case 28 : 
                        int LA56_95 = input.LA(1);

                         
                        int index56_95 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_95);

                        if ( s>=0 ) return s;
                        break;

                    case 29 : 
                        int LA56_96 = input.LA(1);

                         
                        int index56_96 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_96);

                        if ( s>=0 ) return s;
                        break;

                    case 30 : 
                        int LA56_97 = input.LA(1);

                         
                        int index56_97 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_97);

                        if ( s>=0 ) return s;
                        break;

                    case 31 : 
                        int LA56_98 = input.LA(1);

                         
                        int index56_98 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_98);

                        if ( s>=0 ) return s;
                        break;

                    case 32 : 
                        int LA56_99 = input.LA(1);

                         
                        int index56_99 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_99);

                        if ( s>=0 ) return s;
                        break;

                    case 33 : 
                        int LA56_100 = input.LA(1);

                         
                        int index56_100 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_100);

                        if ( s>=0 ) return s;
                        break;

                    case 34 : 
                        int LA56_101 = input.LA(1);

                         
                        int index56_101 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_101);

                        if ( s>=0 ) return s;
                        break;

                    case 35 : 
                        int LA56_102 = input.LA(1);

                         
                        int index56_102 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_102);

                        if ( s>=0 ) return s;
                        break;

                    case 36 : 
                        int LA56_103 = input.LA(1);

                         
                        int index56_103 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_103);

                        if ( s>=0 ) return s;
                        break;

                    case 37 : 
                        int LA56_104 = input.LA(1);

                         
                        int index56_104 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_104);

                        if ( s>=0 ) return s;
                        break;

                    case 38 : 
                        int LA56_105 = input.LA(1);

                         
                        int index56_105 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_105);

                        if ( s>=0 ) return s;
                        break;

                    case 39 : 
                        int LA56_106 = input.LA(1);

                         
                        int index56_106 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_106);

                        if ( s>=0 ) return s;
                        break;

                    case 40 : 
                        int LA56_107 = input.LA(1);

                         
                        int index56_107 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_107);

                        if ( s>=0 ) return s;
                        break;

                    case 41 : 
                        int LA56_108 = input.LA(1);

                         
                        int index56_108 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_108);

                        if ( s>=0 ) return s;
                        break;

                    case 42 : 
                        int LA56_109 = input.LA(1);

                         
                        int index56_109 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_109);

                        if ( s>=0 ) return s;
                        break;

                    case 43 : 
                        int LA56_110 = input.LA(1);

                         
                        int index56_110 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_110);

                        if ( s>=0 ) return s;
                        break;

                    case 44 : 
                        int LA56_111 = input.LA(1);

                         
                        int index56_111 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_111);

                        if ( s>=0 ) return s;
                        break;

                    case 45 : 
                        int LA56_112 = input.LA(1);

                         
                        int index56_112 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_112);

                        if ( s>=0 ) return s;
                        break;

                    case 46 : 
                        int LA56_113 = input.LA(1);

                         
                        int index56_113 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (synpred112_C()) ) {s = 14;}

                        else if ( (true) ) {s = 15;}

                         
                        input.seek(index56_113);

                        if ( s>=0 ) return s;
                        break;
            }
            if (state.backtracking>0) {state.failed=true; return -1;}

            NoViableAltException nvae =
                new NoViableAltException(getDescription(), 56, _s, input);
            error(nvae);
            throw nvae;
        }

    }
    static final String DFA66_eotS =
        "\u00a9\uffff";
    static final String DFA66_eofS =
        "\u00a9\uffff";
    static final String DFA66_minS =
        "\1\4\1\30\3\uffff\1\0\1\30\5\4\3\36\1\4\1\36\5\uffff\27\0\31\uffff"+
        "\137\0\4\uffff";
    static final String DFA66_maxS =
        "\1\150\1\146\3\uffff\1\0\1\146\5\150\3\36\1\150\1\36\5\uffff\27"+
        "\0\31\uffff\137\0\4\uffff";
    static final String DFA66_acceptS =
        "\2\uffff\1\1\1\uffff\1\2\14\uffff\1\11\62\uffff\1\3\1\4\137\uffff"+
        "\1\5\1\6\1\7\1\10";
    static final String DFA66_specialS =
        "\5\uffff\1\0\20\uffff\1\1\1\2\1\3\1\4\1\5\1\6\1\7\1\10\1\11\1\12"+
        "\1\13\1\14\1\15\1\16\1\17\1\20\1\21\1\22\1\23\1\24\1\25\1\26\1\27"+
        "\31\uffff\1\30\1\31\1\32\1\33\1\34\1\35\1\36\1\37\1\40\1\41\1\42"+
        "\1\43\1\44\1\45\1\46\1\47\1\50\1\51\1\52\1\53\1\54\1\55\1\56\1\57"+
        "\1\60\1\61\1\62\1\63\1\64\1\65\1\66\1\67\1\70\1\71\1\72\1\73\1\74"+
        "\1\75\1\76\1\77\1\100\1\101\1\102\1\103\1\104\1\105\1\106\1\107"+
        "\1\110\1\111\1\112\1\113\1\114\1\115\1\116\1\117\1\120\1\121\1\122"+
        "\1\123\1\124\1\125\1\126\1\127\1\130\1\131\1\132\1\133\1\134\1\135"+
        "\1\136\1\137\1\140\1\141\1\142\1\143\1\144\1\145\1\146\1\147\1\150"+
        "\1\151\1\152\1\153\1\154\1\155\1\156\1\157\1\160\1\161\1\162\1\163"+
        "\1\164\1\165\1\166\4\uffff}>";
    static final String[] DFA66_transitionS = {
            "\1\6\1\uffff\1\6\2\uffff\1\6\1\uffff\1\6\1\uffff\1\1\4\uffff"+
            "\1\6\1\uffff\1\6\2\uffff\1\12\4\uffff\1\12\1\uffff\1\7\1\uffff"+
            "\1\12\1\uffff\1\12\1\10\2\uffff\1\12\1\11\7\uffff\1\5\24\uffff"+
            "\1\21\1\2\2\uffff\1\21\1\2\1\17\5\uffff\1\20\1\21\1\14\3\uffff"+
            "\1\21\2\uffff\1\13\2\uffff\1\15\5\uffff\1\16\1\4\4\uffff\1\12",
            "\1\44\1\37\1\34\1\50\1\45\1\34\1\27\1\uffff\1\35\1\34\1\40"+
            "\1\32\1\34\1\53\1\41\1\33\1\34\1\31\1\30\1\uffff\1\36\1\34\1"+
            "\2\1\54\1\43\1\42\1\34\1\43\1\34\1\44\2\43\1\42\1\34\1\52\1"+
            "\26\1\uffff\1\46\1\34\45\uffff\1\47\1\34\1\51",
            "",
            "",
            "",
            "\1\uffff",
            "\1\124\1\117\1\114\1\130\1\125\1\114\1\107\1\uffff\1\115\1"+
            "\114\1\120\1\112\1\114\1\133\1\121\1\113\1\114\1\111\1\110\1"+
            "\uffff\1\116\1\114\1\uffff\1\134\1\123\1\122\1\114\1\123\1\114"+
            "\1\124\2\123\1\122\1\114\1\132\1\106\1\uffff\1\126\1\114\45"+
            "\uffff\1\127\1\114\1\131",
            "\1\136\1\uffff\1\136\2\uffff\1\136\1\uffff\1\136\1\uffff\1"+
            "\135\4\uffff\1\136\1\uffff\1\136\2\uffff\1\142\4\uffff\1\142"+
            "\1\uffff\1\137\1\uffff\1\142\1\uffff\1\142\1\140\2\uffff\1\142"+
            "\1\141\30\uffff\1\156\1\144\4\uffff\1\146\1\144\3\uffff\1\153"+
            "\1\uffff\1\160\1\uffff\1\152\3\uffff\1\150\1\151\2\uffff\1\147"+
            "\1\154\1\143\1\uffff\1\157\2\uffff\1\157\1\155\1\145\1\144\6"+
            "\uffff\1\142",
            "\1\162\1\uffff\1\162\2\uffff\1\162\1\uffff\1\162\1\uffff\1"+
            "\161\4\uffff\1\162\1\uffff\1\162\2\uffff\1\166\4\uffff\1\166"+
            "\1\uffff\1\163\1\uffff\1\166\1\uffff\1\166\1\164\2\uffff\1\166"+
            "\1\165\61\uffff\1\167\16\uffff\1\166",
            "\1\171\1\uffff\1\171\2\uffff\1\171\1\uffff\1\171\1\uffff\1"+
            "\170\4\uffff\1\171\1\uffff\1\171\2\uffff\1\175\4\uffff\1\175"+
            "\1\uffff\1\172\1\uffff\1\175\1\uffff\1\175\1\173\2\uffff\1\175"+
            "\1\174\61\uffff\1\176\16\uffff\1\175",
            "\1\u0081\1\uffff\1\u0081\2\uffff\1\u0081\1\uffff\1\u0081\1"+
            "\uffff\1\u0080\4\uffff\1\u0081\1\uffff\1\u0081\2\uffff\1\u0084"+
            "\4\uffff\1\u0084\1\uffff\1\177\1\uffff\1\u0084\1\uffff\1\u0084"+
            "\1\u0082\2\uffff\1\u0084\1\u0083\61\uffff\1\u0085\16\uffff\1"+
            "\u0084",
            "\1\u0088\1\uffff\1\u0088\2\uffff\1\u0088\1\uffff\1\u0088\1"+
            "\uffff\1\u0087\4\uffff\1\u0088\1\uffff\1\u0088\2\uffff\1\u008b"+
            "\4\uffff\1\u008b\1\uffff\1\u0086\1\uffff\1\u008b\1\uffff\1\u008b"+
            "\1\u0089\2\uffff\1\u008b\1\u008a\61\uffff\1\u008c\16\uffff\1"+
            "\u008b",
            "\1\u008d",
            "\1\u008e",
            "\1\u008f",
            "\1\u0095\1\uffff\1\u0095\2\uffff\1\u0095\1\uffff\1\u0095\1"+
            "\uffff\1\u0090\4\uffff\1\u0095\1\uffff\1\u0095\2\uffff\1\u0099"+
            "\4\uffff\1\u0099\1\uffff\1\u0096\1\uffff\1\u0099\1\uffff\1\u0099"+
            "\1\u0097\2\uffff\1\u0099\1\u0098\7\uffff\1\u0094\24\uffff\1"+
            "\u00a2\1\u0091\2\uffff\1\u00a1\1\u0092\1\u009e\5\uffff\1\u009f"+
            "\1\u00a0\1\u009b\3\uffff\1\u00a3\2\uffff\1\u009a\2\uffff\1\u009c"+
            "\5\uffff\1\u009d\1\u0093\4\uffff\1\u0099",
            "\1\u00a4",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "\1\uffff",
            "",
            "",
            "",
            ""
    };

    static final short[] DFA66_eot = DFA.unpackEncodedString(DFA66_eotS);
    static final short[] DFA66_eof = DFA.unpackEncodedString(DFA66_eofS);
    static final char[] DFA66_min = DFA.unpackEncodedStringToUnsignedChars(DFA66_minS);
    static final char[] DFA66_max = DFA.unpackEncodedStringToUnsignedChars(DFA66_maxS);
    static final short[] DFA66_accept = DFA.unpackEncodedString(DFA66_acceptS);
    static final short[] DFA66_special = DFA.unpackEncodedString(DFA66_specialS);
    static final short[][] DFA66_transition;

    static {
        int numStates = DFA66_transitionS.length;
        DFA66_transition = new short[numStates][];
        for (int i=0; i<numStates; i++) {
            DFA66_transition[i] = DFA.unpackEncodedString(DFA66_transitionS[i]);
        }
    }

    class DFA66 extends DFA {

        public DFA66(BaseRecognizer recognizer) {
            this.recognizer = recognizer;
            this.decisionNumber = 66;
            this.eot = DFA66_eot;
            this.eof = DFA66_eof;
            this.min = DFA66_min;
            this.max = DFA66_max;
            this.accept = DFA66_accept;
            this.special = DFA66_special;
            this.transition = DFA66_transition;
        }
        public String getDescription() {
            return "462:1: statement : ( labeled_statement | compound_statement |{...}? expression_statement -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$expression_statement.text)| expression_statement |{...}? selection_statement -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$selection_statement.text)| selection_statement |{...}? iteration_statement -> instrument_statement(label_number=$InstrumentationStats::labelNumberstatement=$iteration_statement.text)| iteration_statement | jump_statement );";
        }
        public int specialStateTransition(int s, IntStream _input) throws NoViableAltException {
            TokenStream input = (TokenStream)_input;
        	int _s = s;
            switch ( s ) {
                    case 0 : 
                        int LA66_5 = input.LA(1);

                         
                        int index66_5 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_5);

                        if ( s>=0 ) return s;
                        break;

                    case 1 : 
                        int LA66_22 = input.LA(1);

                         
                        int index66_22 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_22);

                        if ( s>=0 ) return s;
                        break;

                    case 2 : 
                        int LA66_23 = input.LA(1);

                         
                        int index66_23 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_23);

                        if ( s>=0 ) return s;
                        break;

                    case 3 : 
                        int LA66_24 = input.LA(1);

                         
                        int index66_24 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_24);

                        if ( s>=0 ) return s;
                        break;

                    case 4 : 
                        int LA66_25 = input.LA(1);

                         
                        int index66_25 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_25);

                        if ( s>=0 ) return s;
                        break;

                    case 5 : 
                        int LA66_26 = input.LA(1);

                         
                        int index66_26 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_26);

                        if ( s>=0 ) return s;
                        break;

                    case 6 : 
                        int LA66_27 = input.LA(1);

                         
                        int index66_27 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_27);

                        if ( s>=0 ) return s;
                        break;

                    case 7 : 
                        int LA66_28 = input.LA(1);

                         
                        int index66_28 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_28);

                        if ( s>=0 ) return s;
                        break;

                    case 8 : 
                        int LA66_29 = input.LA(1);

                         
                        int index66_29 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_29);

                        if ( s>=0 ) return s;
                        break;

                    case 9 : 
                        int LA66_30 = input.LA(1);

                         
                        int index66_30 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_30);

                        if ( s>=0 ) return s;
                        break;

                    case 10 : 
                        int LA66_31 = input.LA(1);

                         
                        int index66_31 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_31);

                        if ( s>=0 ) return s;
                        break;

                    case 11 : 
                        int LA66_32 = input.LA(1);

                         
                        int index66_32 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_32);

                        if ( s>=0 ) return s;
                        break;

                    case 12 : 
                        int LA66_33 = input.LA(1);

                         
                        int index66_33 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_33);

                        if ( s>=0 ) return s;
                        break;

                    case 13 : 
                        int LA66_34 = input.LA(1);

                         
                        int index66_34 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_34);

                        if ( s>=0 ) return s;
                        break;

                    case 14 : 
                        int LA66_35 = input.LA(1);

                         
                        int index66_35 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_35);

                        if ( s>=0 ) return s;
                        break;

                    case 15 : 
                        int LA66_36 = input.LA(1);

                         
                        int index66_36 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_36);

                        if ( s>=0 ) return s;
                        break;

                    case 16 : 
                        int LA66_37 = input.LA(1);

                         
                        int index66_37 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_37);

                        if ( s>=0 ) return s;
                        break;

                    case 17 : 
                        int LA66_38 = input.LA(1);

                         
                        int index66_38 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_38);

                        if ( s>=0 ) return s;
                        break;

                    case 18 : 
                        int LA66_39 = input.LA(1);

                         
                        int index66_39 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_39);

                        if ( s>=0 ) return s;
                        break;

                    case 19 : 
                        int LA66_40 = input.LA(1);

                         
                        int index66_40 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_40);

                        if ( s>=0 ) return s;
                        break;

                    case 20 : 
                        int LA66_41 = input.LA(1);

                         
                        int index66_41 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_41);

                        if ( s>=0 ) return s;
                        break;

                    case 21 : 
                        int LA66_42 = input.LA(1);

                         
                        int index66_42 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_42);

                        if ( s>=0 ) return s;
                        break;

                    case 22 : 
                        int LA66_43 = input.LA(1);

                         
                        int index66_43 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_43);

                        if ( s>=0 ) return s;
                        break;

                    case 23 : 
                        int LA66_44 = input.LA(1);

                         
                        int index66_44 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_44);

                        if ( s>=0 ) return s;
                        break;

                    case 24 : 
                        int LA66_70 = input.LA(1);

                         
                        int index66_70 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_70);

                        if ( s>=0 ) return s;
                        break;

                    case 25 : 
                        int LA66_71 = input.LA(1);

                         
                        int index66_71 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_71);

                        if ( s>=0 ) return s;
                        break;

                    case 26 : 
                        int LA66_72 = input.LA(1);

                         
                        int index66_72 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_72);

                        if ( s>=0 ) return s;
                        break;

                    case 27 : 
                        int LA66_73 = input.LA(1);

                         
                        int index66_73 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_73);

                        if ( s>=0 ) return s;
                        break;

                    case 28 : 
                        int LA66_74 = input.LA(1);

                         
                        int index66_74 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_74);

                        if ( s>=0 ) return s;
                        break;

                    case 29 : 
                        int LA66_75 = input.LA(1);

                         
                        int index66_75 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_75);

                        if ( s>=0 ) return s;
                        break;

                    case 30 : 
                        int LA66_76 = input.LA(1);

                         
                        int index66_76 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_76);

                        if ( s>=0 ) return s;
                        break;

                    case 31 : 
                        int LA66_77 = input.LA(1);

                         
                        int index66_77 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_77);

                        if ( s>=0 ) return s;
                        break;

                    case 32 : 
                        int LA66_78 = input.LA(1);

                         
                        int index66_78 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_78);

                        if ( s>=0 ) return s;
                        break;

                    case 33 : 
                        int LA66_79 = input.LA(1);

                         
                        int index66_79 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_79);

                        if ( s>=0 ) return s;
                        break;

                    case 34 : 
                        int LA66_80 = input.LA(1);

                         
                        int index66_80 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_80);

                        if ( s>=0 ) return s;
                        break;

                    case 35 : 
                        int LA66_81 = input.LA(1);

                         
                        int index66_81 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_81);

                        if ( s>=0 ) return s;
                        break;

                    case 36 : 
                        int LA66_82 = input.LA(1);

                         
                        int index66_82 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_82);

                        if ( s>=0 ) return s;
                        break;

                    case 37 : 
                        int LA66_83 = input.LA(1);

                         
                        int index66_83 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_83);

                        if ( s>=0 ) return s;
                        break;

                    case 38 : 
                        int LA66_84 = input.LA(1);

                         
                        int index66_84 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_84);

                        if ( s>=0 ) return s;
                        break;

                    case 39 : 
                        int LA66_85 = input.LA(1);

                         
                        int index66_85 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_85);

                        if ( s>=0 ) return s;
                        break;

                    case 40 : 
                        int LA66_86 = input.LA(1);

                         
                        int index66_86 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_86);

                        if ( s>=0 ) return s;
                        break;

                    case 41 : 
                        int LA66_87 = input.LA(1);

                         
                        int index66_87 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_87);

                        if ( s>=0 ) return s;
                        break;

                    case 42 : 
                        int LA66_88 = input.LA(1);

                         
                        int index66_88 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_88);

                        if ( s>=0 ) return s;
                        break;

                    case 43 : 
                        int LA66_89 = input.LA(1);

                         
                        int index66_89 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_89);

                        if ( s>=0 ) return s;
                        break;

                    case 44 : 
                        int LA66_90 = input.LA(1);

                         
                        int index66_90 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_90);

                        if ( s>=0 ) return s;
                        break;

                    case 45 : 
                        int LA66_91 = input.LA(1);

                         
                        int index66_91 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_91);

                        if ( s>=0 ) return s;
                        break;

                    case 46 : 
                        int LA66_92 = input.LA(1);

                         
                        int index66_92 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_92);

                        if ( s>=0 ) return s;
                        break;

                    case 47 : 
                        int LA66_93 = input.LA(1);

                         
                        int index66_93 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_93);

                        if ( s>=0 ) return s;
                        break;

                    case 48 : 
                        int LA66_94 = input.LA(1);

                         
                        int index66_94 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_94);

                        if ( s>=0 ) return s;
                        break;

                    case 49 : 
                        int LA66_95 = input.LA(1);

                         
                        int index66_95 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_95);

                        if ( s>=0 ) return s;
                        break;

                    case 50 : 
                        int LA66_96 = input.LA(1);

                         
                        int index66_96 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_96);

                        if ( s>=0 ) return s;
                        break;

                    case 51 : 
                        int LA66_97 = input.LA(1);

                         
                        int index66_97 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_97);

                        if ( s>=0 ) return s;
                        break;

                    case 52 : 
                        int LA66_98 = input.LA(1);

                         
                        int index66_98 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_98);

                        if ( s>=0 ) return s;
                        break;

                    case 53 : 
                        int LA66_99 = input.LA(1);

                         
                        int index66_99 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_99);

                        if ( s>=0 ) return s;
                        break;

                    case 54 : 
                        int LA66_100 = input.LA(1);

                         
                        int index66_100 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_100);

                        if ( s>=0 ) return s;
                        break;

                    case 55 : 
                        int LA66_101 = input.LA(1);

                         
                        int index66_101 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_101);

                        if ( s>=0 ) return s;
                        break;

                    case 56 : 
                        int LA66_102 = input.LA(1);

                         
                        int index66_102 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_102);

                        if ( s>=0 ) return s;
                        break;

                    case 57 : 
                        int LA66_103 = input.LA(1);

                         
                        int index66_103 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_103);

                        if ( s>=0 ) return s;
                        break;

                    case 58 : 
                        int LA66_104 = input.LA(1);

                         
                        int index66_104 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_104);

                        if ( s>=0 ) return s;
                        break;

                    case 59 : 
                        int LA66_105 = input.LA(1);

                         
                        int index66_105 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_105);

                        if ( s>=0 ) return s;
                        break;

                    case 60 : 
                        int LA66_106 = input.LA(1);

                         
                        int index66_106 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_106);

                        if ( s>=0 ) return s;
                        break;

                    case 61 : 
                        int LA66_107 = input.LA(1);

                         
                        int index66_107 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_107);

                        if ( s>=0 ) return s;
                        break;

                    case 62 : 
                        int LA66_108 = input.LA(1);

                         
                        int index66_108 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_108);

                        if ( s>=0 ) return s;
                        break;

                    case 63 : 
                        int LA66_109 = input.LA(1);

                         
                        int index66_109 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_109);

                        if ( s>=0 ) return s;
                        break;

                    case 64 : 
                        int LA66_110 = input.LA(1);

                         
                        int index66_110 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_110);

                        if ( s>=0 ) return s;
                        break;

                    case 65 : 
                        int LA66_111 = input.LA(1);

                         
                        int index66_111 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_111);

                        if ( s>=0 ) return s;
                        break;

                    case 66 : 
                        int LA66_112 = input.LA(1);

                         
                        int index66_112 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_112);

                        if ( s>=0 ) return s;
                        break;

                    case 67 : 
                        int LA66_113 = input.LA(1);

                         
                        int index66_113 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_113);

                        if ( s>=0 ) return s;
                        break;

                    case 68 : 
                        int LA66_114 = input.LA(1);

                         
                        int index66_114 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_114);

                        if ( s>=0 ) return s;
                        break;

                    case 69 : 
                        int LA66_115 = input.LA(1);

                         
                        int index66_115 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_115);

                        if ( s>=0 ) return s;
                        break;

                    case 70 : 
                        int LA66_116 = input.LA(1);

                         
                        int index66_116 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_116);

                        if ( s>=0 ) return s;
                        break;

                    case 71 : 
                        int LA66_117 = input.LA(1);

                         
                        int index66_117 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_117);

                        if ( s>=0 ) return s;
                        break;

                    case 72 : 
                        int LA66_118 = input.LA(1);

                         
                        int index66_118 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_118);

                        if ( s>=0 ) return s;
                        break;

                    case 73 : 
                        int LA66_119 = input.LA(1);

                         
                        int index66_119 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_119);

                        if ( s>=0 ) return s;
                        break;

                    case 74 : 
                        int LA66_120 = input.LA(1);

                         
                        int index66_120 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_120);

                        if ( s>=0 ) return s;
                        break;

                    case 75 : 
                        int LA66_121 = input.LA(1);

                         
                        int index66_121 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_121);

                        if ( s>=0 ) return s;
                        break;

                    case 76 : 
                        int LA66_122 = input.LA(1);

                         
                        int index66_122 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_122);

                        if ( s>=0 ) return s;
                        break;

                    case 77 : 
                        int LA66_123 = input.LA(1);

                         
                        int index66_123 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_123);

                        if ( s>=0 ) return s;
                        break;

                    case 78 : 
                        int LA66_124 = input.LA(1);

                         
                        int index66_124 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_124);

                        if ( s>=0 ) return s;
                        break;

                    case 79 : 
                        int LA66_125 = input.LA(1);

                         
                        int index66_125 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_125);

                        if ( s>=0 ) return s;
                        break;

                    case 80 : 
                        int LA66_126 = input.LA(1);

                         
                        int index66_126 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_126);

                        if ( s>=0 ) return s;
                        break;

                    case 81 : 
                        int LA66_127 = input.LA(1);

                         
                        int index66_127 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_127);

                        if ( s>=0 ) return s;
                        break;

                    case 82 : 
                        int LA66_128 = input.LA(1);

                         
                        int index66_128 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_128);

                        if ( s>=0 ) return s;
                        break;

                    case 83 : 
                        int LA66_129 = input.LA(1);

                         
                        int index66_129 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_129);

                        if ( s>=0 ) return s;
                        break;

                    case 84 : 
                        int LA66_130 = input.LA(1);

                         
                        int index66_130 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_130);

                        if ( s>=0 ) return s;
                        break;

                    case 85 : 
                        int LA66_131 = input.LA(1);

                         
                        int index66_131 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_131);

                        if ( s>=0 ) return s;
                        break;

                    case 86 : 
                        int LA66_132 = input.LA(1);

                         
                        int index66_132 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_132);

                        if ( s>=0 ) return s;
                        break;

                    case 87 : 
                        int LA66_133 = input.LA(1);

                         
                        int index66_133 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_133);

                        if ( s>=0 ) return s;
                        break;

                    case 88 : 
                        int LA66_134 = input.LA(1);

                         
                        int index66_134 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_134);

                        if ( s>=0 ) return s;
                        break;

                    case 89 : 
                        int LA66_135 = input.LA(1);

                         
                        int index66_135 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_135);

                        if ( s>=0 ) return s;
                        break;

                    case 90 : 
                        int LA66_136 = input.LA(1);

                         
                        int index66_136 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_136);

                        if ( s>=0 ) return s;
                        break;

                    case 91 : 
                        int LA66_137 = input.LA(1);

                         
                        int index66_137 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_137);

                        if ( s>=0 ) return s;
                        break;

                    case 92 : 
                        int LA66_138 = input.LA(1);

                         
                        int index66_138 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_138);

                        if ( s>=0 ) return s;
                        break;

                    case 93 : 
                        int LA66_139 = input.LA(1);

                         
                        int index66_139 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_139);

                        if ( s>=0 ) return s;
                        break;

                    case 94 : 
                        int LA66_140 = input.LA(1);

                         
                        int index66_140 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred139_C()&&synpred139_C())&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))) ) {s = 68;}

                        else if ( (synpred140_C()) ) {s = 69;}

                         
                        input.seek(index66_140);

                        if ( s>=0 ) return s;
                        break;

                    case 95 : 
                        int LA66_141 = input.LA(1);

                         
                        int index66_141 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred141_C())) ) {s = 165;}

                        else if ( (synpred142_C()) ) {s = 166;}

                         
                        input.seek(index66_141);

                        if ( s>=0 ) return s;
                        break;

                    case 96 : 
                        int LA66_142 = input.LA(1);

                         
                        int index66_142 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred141_C())) ) {s = 165;}

                        else if ( (synpred142_C()) ) {s = 166;}

                         
                        input.seek(index66_142);

                        if ( s>=0 ) return s;
                        break;

                    case 97 : 
                        int LA66_143 = input.LA(1);

                         
                        int index66_143 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_143);

                        if ( s>=0 ) return s;
                        break;

                    case 98 : 
                        int LA66_144 = input.LA(1);

                         
                        int index66_144 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_144);

                        if ( s>=0 ) return s;
                        break;

                    case 99 : 
                        int LA66_145 = input.LA(1);

                         
                        int index66_145 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_145);

                        if ( s>=0 ) return s;
                        break;

                    case 100 : 
                        int LA66_146 = input.LA(1);

                         
                        int index66_146 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_146);

                        if ( s>=0 ) return s;
                        break;

                    case 101 : 
                        int LA66_147 = input.LA(1);

                         
                        int index66_147 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_147);

                        if ( s>=0 ) return s;
                        break;

                    case 102 : 
                        int LA66_148 = input.LA(1);

                         
                        int index66_148 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_148);

                        if ( s>=0 ) return s;
                        break;

                    case 103 : 
                        int LA66_149 = input.LA(1);

                         
                        int index66_149 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_149);

                        if ( s>=0 ) return s;
                        break;

                    case 104 : 
                        int LA66_150 = input.LA(1);

                         
                        int index66_150 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_150);

                        if ( s>=0 ) return s;
                        break;

                    case 105 : 
                        int LA66_151 = input.LA(1);

                         
                        int index66_151 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_151);

                        if ( s>=0 ) return s;
                        break;

                    case 106 : 
                        int LA66_152 = input.LA(1);

                         
                        int index66_152 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_152);

                        if ( s>=0 ) return s;
                        break;

                    case 107 : 
                        int LA66_153 = input.LA(1);

                         
                        int index66_153 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_153);

                        if ( s>=0 ) return s;
                        break;

                    case 108 : 
                        int LA66_154 = input.LA(1);

                         
                        int index66_154 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_154);

                        if ( s>=0 ) return s;
                        break;

                    case 109 : 
                        int LA66_155 = input.LA(1);

                         
                        int index66_155 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_155);

                        if ( s>=0 ) return s;
                        break;

                    case 110 : 
                        int LA66_156 = input.LA(1);

                         
                        int index66_156 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_156);

                        if ( s>=0 ) return s;
                        break;

                    case 111 : 
                        int LA66_157 = input.LA(1);

                         
                        int index66_157 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_157);

                        if ( s>=0 ) return s;
                        break;

                    case 112 : 
                        int LA66_158 = input.LA(1);

                         
                        int index66_158 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_158);

                        if ( s>=0 ) return s;
                        break;

                    case 113 : 
                        int LA66_159 = input.LA(1);

                         
                        int index66_159 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_159);

                        if ( s>=0 ) return s;
                        break;

                    case 114 : 
                        int LA66_160 = input.LA(1);

                         
                        int index66_160 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_160);

                        if ( s>=0 ) return s;
                        break;

                    case 115 : 
                        int LA66_161 = input.LA(1);

                         
                        int index66_161 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_161);

                        if ( s>=0 ) return s;
                        break;

                    case 116 : 
                        int LA66_162 = input.LA(1);

                         
                        int index66_162 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_162);

                        if ( s>=0 ) return s;
                        break;

                    case 117 : 
                        int LA66_163 = input.LA(1);

                         
                        int index66_163 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_163);

                        if ( s>=0 ) return s;
                        break;

                    case 118 : 
                        int LA66_164 = input.LA(1);

                         
                        int index66_164 = input.index();
                        input.rewind();

                        s = -1;
                        if ( ((((InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch)&&(InstrumentationInfo_stack.size()>0 && ((InstrumentationInfo_scope)InstrumentationInfo_stack.peek()).isBranch))&&synpred143_C())) ) {s = 167;}

                        else if ( (synpred144_C()) ) {s = 168;}

                         
                        input.seek(index66_164);

                        if ( s>=0 ) return s;
                        break;
            }
            if (state.backtracking>0) {state.failed=true; return -1;}

            NoViableAltException nvae =
                new NoViableAltException(getDescription(), 66, _s, input);
            error(nvae);
            throw nvae;
        }

    }
    static final String DFA68_eotS =
        "\115\uffff";
    static final String DFA68_eofS =
        "\115\uffff";
    static final String DFA68_minS =
        "\1\4\1\15\45\uffff\1\0\5\uffff\1\0\16\uffff\1\0\20\uffff";
    static final String DFA68_maxS =
        "\1\150\1\146\45\uffff\1\0\5\uffff\1\0\16\uffff\1\0\20\uffff";
    static final String DFA68_acceptS =
        "\2\uffff\1\2\23\uffff\1\1\66\uffff";
    static final String DFA68_specialS =
        "\47\uffff\1\0\5\uffff\1\1\16\uffff\1\2\20\uffff}>";
    static final String[] DFA68_transitionS = {
            "\1\2\1\uffff\1\2\2\uffff\1\2\1\uffff\1\2\1\uffff\1\1\4\uffff"+
            "\1\2\1\uffff\1\2\2\uffff\1\2\4\uffff\1\2\1\uffff\1\2\1\uffff"+
            "\1\2\1\uffff\2\2\2\uffff\2\2\7\uffff\1\2\20\uffff\2\26\1\uffff"+
            "\1\26\2\2\2\26\3\2\1\26\1\uffff\3\26\3\2\3\26\1\2\2\26\1\2\2"+
            "\26\1\2\5\26\2\2\3\uffff\2\2",
            "\1\26\12\uffff\6\2\1\47\1\uffff\1\55\12\2\1\uffff\3\2\1\74"+
            "\14\2\1\uffff\2\2\3\26\1\uffff\1\26\2\uffff\2\26\3\uffff\1\26"+
            "\1\uffff\3\26\3\uffff\3\26\1\uffff\2\26\1\uffff\2\26\2\uffff"+
            "\4\26\2\uffff\3\2",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
    };

    static final short[] DFA68_eot = DFA.unpackEncodedString(DFA68_eotS);
    static final short[] DFA68_eof = DFA.unpackEncodedString(DFA68_eofS);
    static final char[] DFA68_min = DFA.unpackEncodedStringToUnsignedChars(DFA68_minS);
    static final char[] DFA68_max = DFA.unpackEncodedStringToUnsignedChars(DFA68_maxS);
    static final short[] DFA68_accept = DFA.unpackEncodedString(DFA68_acceptS);
    static final short[] DFA68_special = DFA.unpackEncodedString(DFA68_specialS);
    static final short[][] DFA68_transition;

    static {
        int numStates = DFA68_transitionS.length;
        DFA68_transition = new short[numStates][];
        for (int i=0; i<numStates; i++) {
            DFA68_transition[i] = DFA.unpackEncodedString(DFA68_transitionS[i]);
        }
    }

    class DFA68 extends DFA {

        public DFA68(BaseRecognizer recognizer) {
            this.recognizer = recognizer;
            this.decisionNumber = 68;
            this.eot = DFA68_eot;
            this.eof = DFA68_eof;
            this.min = DFA68_min;
            this.max = DFA68_max;
            this.accept = DFA68_accept;
            this.special = DFA68_special;
            this.transition = DFA68_transition;
        }
        public String getDescription() {
            return "()* loopback of 495:76: ( declaration )*";
        }
        public int specialStateTransition(int s, IntStream _input) throws NoViableAltException {
            TokenStream input = (TokenStream)_input;
        	int _s = s;
            switch ( s ) {
                    case 0 : 
                        int LA68_39 = input.LA(1);

                         
                        int index68_39 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred149_C()&&synpred149_C())&&(isTypeName(input.LT(1).getText())))) ) {s = 22;}

                        else if ( (true) ) {s = 2;}

                         
                        input.seek(index68_39);

                        if ( s>=0 ) return s;
                        break;

                    case 1 : 
                        int LA68_45 = input.LA(1);

                         
                        int index68_45 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred149_C()&&synpred149_C())&&(isTypeName(input.LT(1).getText())))) ) {s = 22;}

                        else if ( (true) ) {s = 2;}

                         
                        input.seek(index68_45);

                        if ( s>=0 ) return s;
                        break;

                    case 2 : 
                        int LA68_60 = input.LA(1);

                         
                        int index68_60 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred149_C()&&synpred149_C())&&(isTypeName(input.LT(1).getText())))) ) {s = 22;}

                        else if ( (true) ) {s = 2;}

                         
                        input.seek(index68_60);

                        if ( s>=0 ) return s;
                        break;
            }
            if (state.backtracking>0) {state.failed=true; return -1;}

            NoViableAltException nvae =
                new NoViableAltException(getDescription(), 68, _s, input);
            error(nvae);
            throw nvae;
        }

    }
    static final String DFA70_eotS =
        "\115\uffff";
    static final String DFA70_eofS =
        "\115\uffff";
    static final String DFA70_minS =
        "\1\4\1\15\45\uffff\1\0\5\uffff\1\0\16\uffff\1\0\20\uffff";
    static final String DFA70_maxS =
        "\1\150\1\146\45\uffff\1\0\5\uffff\1\0\16\uffff\1\0\20\uffff";
    static final String DFA70_acceptS =
        "\2\uffff\1\2\23\uffff\1\1\66\uffff";
    static final String DFA70_specialS =
        "\47\uffff\1\0\5\uffff\1\1\16\uffff\1\2\20\uffff}>";
    static final String[] DFA70_transitionS = {
            "\1\2\1\uffff\1\2\2\uffff\1\2\1\uffff\1\2\1\uffff\1\1\4\uffff"+
            "\1\2\1\uffff\1\2\2\uffff\1\2\4\uffff\1\2\1\uffff\1\2\1\uffff"+
            "\1\2\1\uffff\2\2\2\uffff\2\2\7\uffff\1\2\20\uffff\2\26\1\uffff"+
            "\1\26\2\2\2\26\3\2\1\26\1\uffff\3\26\3\2\3\26\1\2\2\26\1\2\2"+
            "\26\1\2\5\26\2\2\3\uffff\2\2",
            "\1\26\12\uffff\6\2\1\47\1\uffff\1\55\12\2\1\uffff\3\2\1\74"+
            "\14\2\1\uffff\2\2\3\26\1\uffff\1\26\2\uffff\2\26\3\uffff\1\26"+
            "\1\uffff\3\26\3\uffff\3\26\1\uffff\2\26\1\uffff\2\26\2\uffff"+
            "\4\26\2\uffff\3\2",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
    };

    static final short[] DFA70_eot = DFA.unpackEncodedString(DFA70_eotS);
    static final short[] DFA70_eof = DFA.unpackEncodedString(DFA70_eofS);
    static final char[] DFA70_min = DFA.unpackEncodedStringToUnsignedChars(DFA70_minS);
    static final char[] DFA70_max = DFA.unpackEncodedStringToUnsignedChars(DFA70_maxS);
    static final short[] DFA70_accept = DFA.unpackEncodedString(DFA70_acceptS);
    static final short[] DFA70_special = DFA.unpackEncodedString(DFA70_specialS);
    static final short[][] DFA70_transition;

    static {
        int numStates = DFA70_transitionS.length;
        DFA70_transition = new short[numStates][];
        for (int i=0; i<numStates; i++) {
            DFA70_transition[i] = DFA.unpackEncodedString(DFA70_transitionS[i]);
        }
    }

    class DFA70 extends DFA {

        public DFA70(BaseRecognizer recognizer) {
            this.recognizer = recognizer;
            this.decisionNumber = 70;
            this.eot = DFA70_eot;
            this.eof = DFA70_eof;
            this.min = DFA70_min;
            this.max = DFA70_max;
            this.accept = DFA70_accept;
            this.special = DFA70_special;
            this.transition = DFA70_transition;
        }
        public String getDescription() {
            return "()* loopback of 497:10: ( declaration )*";
        }
        public int specialStateTransition(int s, IntStream _input) throws NoViableAltException {
            TokenStream input = (TokenStream)_input;
        	int _s = s;
            switch ( s ) {
                    case 0 : 
                        int LA70_39 = input.LA(1);

                         
                        int index70_39 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred152_C()&&synpred152_C())&&(isTypeName(input.LT(1).getText())))) ) {s = 22;}

                        else if ( (true) ) {s = 2;}

                         
                        input.seek(index70_39);

                        if ( s>=0 ) return s;
                        break;

                    case 1 : 
                        int LA70_45 = input.LA(1);

                         
                        int index70_45 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred152_C()&&synpred152_C())&&(isTypeName(input.LT(1).getText())))) ) {s = 22;}

                        else if ( (true) ) {s = 2;}

                         
                        input.seek(index70_45);

                        if ( s>=0 ) return s;
                        break;

                    case 2 : 
                        int LA70_60 = input.LA(1);

                         
                        int index70_60 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred152_C()&&synpred152_C())&&(isTypeName(input.LT(1).getText())))) ) {s = 22;}

                        else if ( (true) ) {s = 2;}

                         
                        input.seek(index70_60);

                        if ( s>=0 ) return s;
                        break;
            }
            if (state.backtracking>0) {state.failed=true; return -1;}

            NoViableAltException nvae =
                new NoViableAltException(getDescription(), 70, _s, input);
            error(nvae);
            throw nvae;
        }

    }
    static final String DFA91_eotS =
        "\115\uffff";
    static final String DFA91_eofS =
        "\115\uffff";
    static final String DFA91_minS =
        "\1\4\1\15\45\uffff\1\0\5\uffff\1\0\16\uffff\1\0\20\uffff";
    static final String DFA91_maxS =
        "\1\150\1\146\45\uffff\1\0\5\uffff\1\0\16\uffff\1\0\20\uffff";
    static final String DFA91_acceptS =
        "\2\uffff\1\2\23\uffff\1\1\66\uffff";
    static final String DFA91_specialS =
        "\47\uffff\1\0\5\uffff\1\1\16\uffff\1\2\20\uffff}>";
    static final String[] DFA91_transitionS = {
            "\1\2\1\uffff\1\2\2\uffff\1\2\1\uffff\1\2\1\uffff\1\1\4\uffff"+
            "\1\2\1\uffff\1\2\2\uffff\1\2\4\uffff\1\2\1\uffff\1\2\1\uffff"+
            "\1\2\1\uffff\2\2\2\uffff\2\2\7\uffff\1\2\20\uffff\2\26\1\uffff"+
            "\1\26\2\2\2\26\3\2\1\26\1\uffff\3\26\3\2\3\26\1\2\2\26\1\2\2"+
            "\26\1\2\5\26\2\2\3\uffff\2\2",
            "\1\26\12\uffff\6\2\1\47\1\uffff\1\55\12\2\1\uffff\3\2\1\74"+
            "\14\2\1\uffff\2\2\3\26\1\uffff\1\26\2\uffff\2\26\3\uffff\1\26"+
            "\1\uffff\3\26\3\uffff\3\26\1\uffff\2\26\1\uffff\2\26\2\uffff"+
            "\4\26\2\uffff\3\2",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\1\uffff",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
    };

    static final short[] DFA91_eot = DFA.unpackEncodedString(DFA91_eotS);
    static final short[] DFA91_eof = DFA.unpackEncodedString(DFA91_eofS);
    static final char[] DFA91_min = DFA.unpackEncodedStringToUnsignedChars(DFA91_minS);
    static final char[] DFA91_max = DFA.unpackEncodedStringToUnsignedChars(DFA91_maxS);
    static final short[] DFA91_accept = DFA.unpackEncodedString(DFA91_acceptS);
    static final short[] DFA91_special = DFA.unpackEncodedString(DFA91_specialS);
    static final short[][] DFA91_transition;

    static {
        int numStates = DFA91_transitionS.length;
        DFA91_transition = new short[numStates][];
        for (int i=0; i<numStates; i++) {
            DFA91_transition[i] = DFA.unpackEncodedString(DFA91_transitionS[i]);
        }
    }

    class DFA91 extends DFA {

        public DFA91(BaseRecognizer recognizer) {
            this.recognizer = recognizer;
            this.decisionNumber = 91;
            this.eot = DFA91_eot;
            this.eof = DFA91_eof;
            this.min = DFA91_min;
            this.max = DFA91_max;
            this.accept = DFA91_accept;
            this.special = DFA91_special;
            this.transition = DFA91_transition;
        }
        public String getDescription() {
            return "()* loopback of 495:76: ( declaration )*";
        }
        public int specialStateTransition(int s, IntStream _input) throws NoViableAltException {
            TokenStream input = (TokenStream)_input;
        	int _s = s;
            switch ( s ) {
                    case 0 : 
                        int LA91_39 = input.LA(1);

                         
                        int index91_39 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred149_C()&&synpred149_C())&&(isTypeName(input.LT(1).getText())))) ) {s = 22;}

                        else if ( (true) ) {s = 2;}

                         
                        input.seek(index91_39);

                        if ( s>=0 ) return s;
                        break;

                    case 1 : 
                        int LA91_45 = input.LA(1);

                         
                        int index91_45 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred149_C()&&synpred149_C())&&(isTypeName(input.LT(1).getText())))) ) {s = 22;}

                        else if ( (true) ) {s = 2;}

                         
                        input.seek(index91_45);

                        if ( s>=0 ) return s;
                        break;

                    case 2 : 
                        int LA91_60 = input.LA(1);

                         
                        int index91_60 = input.index();
                        input.rewind();

                        s = -1;
                        if ( (((synpred149_C()&&synpred149_C())&&(isTypeName(input.LT(1).getText())))) ) {s = 22;}

                        else if ( (true) ) {s = 2;}

                         
                        input.seek(index91_60);

                        if ( s>=0 ) return s;
                        break;
            }
            if (state.backtracking>0) {state.failed=true; return -1;}

            NoViableAltException nvae =
                new NoViableAltException(getDescription(), 91, _s, input);
            error(nvae);
            throw nvae;
        }

    }
 

    public static final BitSet FOLLOW_external_declaration_in_translation_unit125 = new BitSet(new long[]{0x0800000140002002L,0x00000003EDB8E8CFL});
    public static final BitSet FOLLOW_attribute_in_external_declaration151 = new BitSet(new long[]{0x0000000140002000L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_function_definition_in_external_declaration170 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_66_in_external_declaration175 = new BitSet(new long[]{0x0000000000002000L,0x00000003EDB8E8CBL});
    public static final BitSet FOLLOW_declaration_in_external_declaration177 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declaration_in_external_declaration182 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declaration_specifiers_in_function_definition204 = new BitSet(new long[]{0x0000000140002000L});
    public static final BitSet FOLLOW_declarator_in_function_definition207 = new BitSet(new long[]{0x0000000000002000L,0x0000000BEDB8E8CBL});
    public static final BitSet FOLLOW_declaration_in_function_definition212 = new BitSet(new long[]{0x0000000000002000L,0x0000000BEDB8E8CBL});
    public static final BitSet FOLLOW_compound_statement_in_function_definition215 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_compound_statement_in_function_definition224 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_59_in_attribute244 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_IDENTIFIER_in_attribute246 = new BitSet(new long[]{0x1000000000000000L});
    public static final BitSet FOLLOW_60_in_attribute249 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_93_in_declaration280 = new BitSet(new long[]{0x0000000140002000L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_declaration_specifiers_in_declaration282 = new BitSet(new long[]{0x0000000140002000L});
    public static final BitSet FOLLOW_init_declarator_list_in_declaration287 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_declaration289 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declaration_specifiers_in_declaration295 = new BitSet(new long[]{0x8000800140002000L});
    public static final BitSet FOLLOW_init_declarator_list_in_declaration297 = new BitSet(new long[]{0x8000800000000000L});
    public static final BitSet FOLLOW_asm_definition_in_declaration300 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_declaration303 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_63_in_asm_definition314 = new BitSet(new long[]{0x0000000040000000L});
    public static final BitSet FOLLOW_30_in_asm_definition316 = new BitSet(new long[]{0x0000000080100000L});
    public static final BitSet FOLLOW_multiline_string_literal_in_asm_definition318 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_asm_definition320 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_STRING_LITERAL_in_multiline_string_literal332 = new BitSet(new long[]{0x0000000000100002L});
    public static final BitSet FOLLOW_storage_class_specifier_in_declaration_specifiers347 = new BitSet(new long[]{0x0000000000002002L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_type_specifier_in_declaration_specifiers351 = new BitSet(new long[]{0x0000000000002002L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_type_qualifier_in_declaration_specifiers355 = new BitSet(new long[]{0x0000000000002002L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_init_declarator_in_init_declarator_list369 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_37_in_init_declarator_list372 = new BitSet(new long[]{0x0000000140002000L});
    public static final BitSet FOLLOW_init_declarator_in_init_declarator_list374 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_declarator_in_init_declarator387 = new BitSet(new long[]{0x0010000000000002L});
    public static final BitSet FOLLOW_52_in_init_declarator390 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010802000000L});
    public static final BitSet FOLLOW_initializer_in_init_declarator392 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_96_in_type_specifier431 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_70_in_type_specifier436 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_87_in_type_specifier441 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_83_in_type_specifier446 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_84_in_type_specifier451 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_79_in_type_specifier456 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_75_in_type_specifier461 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_88_in_type_specifier466 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_95_in_type_specifier471 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_64_in_type_specifier476 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_struct_or_union_specifier_in_type_specifier481 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_enum_specifier_in_type_specifier486 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_type_id_in_type_specifier491 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_IDENTIFIER_in_type_id509 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_struct_or_union_in_struct_or_union_specifier542 = new BitSet(new long[]{0x0000000000002000L,0x0000000800000000L});
    public static final BitSet FOLLOW_IDENTIFIER_in_struct_or_union_specifier544 = new BitSet(new long[]{0x0000000000000000L,0x0000000800000000L});
    public static final BitSet FOLLOW_99_in_struct_or_union_specifier547 = new BitSet(new long[]{0x0000000000002000L,0x00000003C998A8C3L});
    public static final BitSet FOLLOW_struct_declaration_list_in_struct_or_union_specifier549 = new BitSet(new long[]{0x0000000000000000L,0x0000008000000000L});
    public static final BitSet FOLLOW_103_in_struct_or_union_specifier551 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_struct_or_union_in_struct_or_union_specifier556 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_IDENTIFIER_in_struct_or_union_specifier558 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_struct_declaration_in_struct_declaration_list585 = new BitSet(new long[]{0x0000000000002002L,0x00000003C998A8C3L});
    public static final BitSet FOLLOW_specifier_qualifier_list_in_struct_declaration597 = new BitSet(new long[]{0x0000400140002000L});
    public static final BitSet FOLLOW_struct_declarator_list_in_struct_declaration599 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_struct_declaration601 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_type_qualifier_in_specifier_qualifier_list614 = new BitSet(new long[]{0x0000000000002002L,0x00000003C998A8C3L});
    public static final BitSet FOLLOW_type_specifier_in_specifier_qualifier_list618 = new BitSet(new long[]{0x0000000000002002L,0x00000003C998A8C3L});
    public static final BitSet FOLLOW_struct_declarator_in_struct_declarator_list632 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_37_in_struct_declarator_list635 = new BitSet(new long[]{0x0000400140002000L});
    public static final BitSet FOLLOW_struct_declarator_in_struct_declarator_list637 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_declarator_in_struct_declarator650 = new BitSet(new long[]{0x0000400000000002L});
    public static final BitSet FOLLOW_46_in_struct_declarator653 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_constant_expression_in_struct_declarator655 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_46_in_struct_declarator662 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_constant_expression_in_struct_declarator664 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_77_in_enum_specifier682 = new BitSet(new long[]{0x0000000000000000L,0x0000000800000000L});
    public static final BitSet FOLLOW_99_in_enum_specifier684 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_enumerator_list_in_enum_specifier686 = new BitSet(new long[]{0x0000000000000000L,0x0000008000000000L});
    public static final BitSet FOLLOW_103_in_enum_specifier688 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_77_in_enum_specifier693 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_IDENTIFIER_in_enum_specifier695 = new BitSet(new long[]{0x0000000000000000L,0x0000000800000000L});
    public static final BitSet FOLLOW_99_in_enum_specifier697 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_enumerator_list_in_enum_specifier699 = new BitSet(new long[]{0x0000000000000000L,0x0000008000000000L});
    public static final BitSet FOLLOW_103_in_enum_specifier701 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_77_in_enum_specifier706 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_IDENTIFIER_in_enum_specifier708 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_enumerator_in_enumerator_list719 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_37_in_enumerator_list722 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_enumerator_in_enumerator_list724 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_IDENTIFIER_in_enumerator737 = new BitSet(new long[]{0x0010000000000002L});
    public static final BitSet FOLLOW_52_in_enumerator740 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_constant_expression_in_enumerator742 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_pointer_in_declarator776 = new BitSet(new long[]{0x0000000040002000L});
    public static final BitSet FOLLOW_direct_declarator_in_declarator779 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_pointer_in_declarator784 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_IDENTIFIER_in_direct_declarator799 = new BitSet(new long[]{0x0800000040000002L});
    public static final BitSet FOLLOW_30_in_direct_declarator810 = new BitSet(new long[]{0x0000000140002000L});
    public static final BitSet FOLLOW_declarator_in_direct_declarator812 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_direct_declarator814 = new BitSet(new long[]{0x0800000040000002L});
    public static final BitSet FOLLOW_declarator_suffix_in_direct_declarator828 = new BitSet(new long[]{0x0800000040000002L});
    public static final BitSet FOLLOW_59_in_declarator_suffix842 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_constant_expression_in_declarator_suffix844 = new BitSet(new long[]{0x1000000000000000L});
    public static final BitSet FOLLOW_60_in_declarator_suffix846 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_59_in_declarator_suffix856 = new BitSet(new long[]{0x1000000000000000L});
    public static final BitSet FOLLOW_60_in_declarator_suffix858 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_declarator_suffix868 = new BitSet(new long[]{0x0000000000002000L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_parameter_type_list_in_declarator_suffix870 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_declarator_suffix872 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_declarator_suffix882 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_identifier_list_in_declarator_suffix884 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_declarator_suffix886 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_declarator_suffix896 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_declarator_suffix898 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_32_in_pointer909 = new BitSet(new long[]{0x0000000000000000L,0x0000000200000082L});
    public static final BitSet FOLLOW_type_qualifier_in_pointer911 = new BitSet(new long[]{0x0000000100000002L,0x0000000200000082L});
    public static final BitSet FOLLOW_pointer_in_pointer914 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_32_in_pointer920 = new BitSet(new long[]{0x0000000100000000L});
    public static final BitSet FOLLOW_pointer_in_pointer922 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_32_in_pointer927 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_parameter_list_in_parameter_type_list938 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_37_in_parameter_type_list941 = new BitSet(new long[]{0x0000080000000000L});
    public static final BitSet FOLLOW_43_in_parameter_type_list943 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_parameter_declaration_in_parameter_list956 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_37_in_parameter_list959 = new BitSet(new long[]{0x0000000000002000L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_parameter_declaration_in_parameter_list961 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_declaration_specifiers_in_parameter_declaration974 = new BitSet(new long[]{0x0800000140002002L});
    public static final BitSet FOLLOW_declarator_in_parameter_declaration977 = new BitSet(new long[]{0x0800000140002002L});
    public static final BitSet FOLLOW_abstract_declarator_in_parameter_declaration979 = new BitSet(new long[]{0x0800000140002002L});
    public static final BitSet FOLLOW_IDENTIFIER_in_identifier_list992 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_37_in_identifier_list995 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_IDENTIFIER_in_identifier_list997 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_specifier_qualifier_list_in_type_name1010 = new BitSet(new long[]{0x0800000140000002L});
    public static final BitSet FOLLOW_abstract_declarator_in_type_name1012 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_pointer_in_abstract_declarator1024 = new BitSet(new long[]{0x0800000040000002L});
    public static final BitSet FOLLOW_direct_abstract_declarator_in_abstract_declarator1026 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_direct_abstract_declarator_in_abstract_declarator1032 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_direct_abstract_declarator1045 = new BitSet(new long[]{0x0800000140000000L});
    public static final BitSet FOLLOW_abstract_declarator_in_direct_abstract_declarator1047 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_direct_abstract_declarator1049 = new BitSet(new long[]{0x0800000040000002L});
    public static final BitSet FOLLOW_abstract_declarator_suffix_in_direct_abstract_declarator1053 = new BitSet(new long[]{0x0800000040000002L});
    public static final BitSet FOLLOW_abstract_declarator_suffix_in_direct_abstract_declarator1057 = new BitSet(new long[]{0x0800000040000002L});
    public static final BitSet FOLLOW_59_in_abstract_declarator_suffix1069 = new BitSet(new long[]{0x1000000000000000L});
    public static final BitSet FOLLOW_60_in_abstract_declarator_suffix1071 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_59_in_abstract_declarator_suffix1076 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_constant_expression_in_abstract_declarator_suffix1078 = new BitSet(new long[]{0x1000000000000000L});
    public static final BitSet FOLLOW_60_in_abstract_declarator_suffix1080 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_abstract_declarator_suffix1085 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_abstract_declarator_suffix1087 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_abstract_declarator_suffix1092 = new BitSet(new long[]{0x0000000000002000L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_parameter_type_list_in_abstract_declarator_suffix1094 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_abstract_declarator_suffix1096 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_assignment_expression_in_initializer1108 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_99_in_initializer1113 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010802000000L});
    public static final BitSet FOLLOW_initializer_list_in_initializer1115 = new BitSet(new long[]{0x0000002000000000L,0x0000008000000000L});
    public static final BitSet FOLLOW_37_in_initializer1117 = new BitSet(new long[]{0x0000000000000000L,0x0000008000000000L});
    public static final BitSet FOLLOW_103_in_initializer1120 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_initializer_in_initializer_list1131 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_37_in_initializer_list1134 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010802000000L});
    public static final BitSet FOLLOW_initializer_in_initializer_list1136 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_assignment_expression_in_argument_expression_list1151 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_37_in_argument_expression_list1154 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_assignment_expression_in_argument_expression_list1156 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_multiplicative_expression_in_additive_expression1170 = new BitSet(new long[]{0x0000004400000002L});
    public static final BitSet FOLLOW_34_in_additive_expression1174 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_multiplicative_expression_in_additive_expression1176 = new BitSet(new long[]{0x0000004400000002L});
    public static final BitSet FOLLOW_38_in_additive_expression1180 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_multiplicative_expression_in_additive_expression1182 = new BitSet(new long[]{0x0000004400000002L});
    public static final BitSet FOLLOW_cast_expression_in_multiplicative_expression1196 = new BitSet(new long[]{0x0000100102000002L});
    public static final BitSet FOLLOW_32_in_multiplicative_expression1200 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_cast_expression_in_multiplicative_expression1202 = new BitSet(new long[]{0x0000100102000002L});
    public static final BitSet FOLLOW_44_in_multiplicative_expression1206 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_cast_expression_in_multiplicative_expression1208 = new BitSet(new long[]{0x0000100102000002L});
    public static final BitSet FOLLOW_25_in_multiplicative_expression1212 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_cast_expression_in_multiplicative_expression1214 = new BitSet(new long[]{0x0000100102000002L});
    public static final BitSet FOLLOW_30_in_cast_expression1227 = new BitSet(new long[]{0x0000000000002000L,0x00000003C998A8C3L});
    public static final BitSet FOLLOW_type_name_in_cast_expression1229 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_cast_expression1231 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_cast_expression_in_cast_expression1233 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_unary_expression_in_cast_expression1238 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_postfix_expression_in_unary_expression1249 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_35_in_unary_expression1254 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_unary_expression_in_unary_expression1256 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_39_in_unary_expression1261 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_unary_expression_in_unary_expression1263 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_unary_operator_in_unary_expression1268 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_cast_expression_in_unary_expression1270 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_89_in_unary_expression1275 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_unary_expression_in_unary_expression1277 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_89_in_unary_expression1282 = new BitSet(new long[]{0x0000000040000000L});
    public static final BitSet FOLLOW_30_in_unary_expression1284 = new BitSet(new long[]{0x0000000000002000L,0x00000003C998A8C3L});
    public static final BitSet FOLLOW_type_name_in_unary_expression1286 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_unary_expression1288 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_STRING_LITERAL_in_mulitline_string_literals1299 = new BitSet(new long[]{0x0000000000100002L});
    public static final BitSet FOLLOW_primary_expression_in_postfix_expression1314 = new BitSet(new long[]{0x0800068840000002L});
    public static final BitSet FOLLOW_59_in_postfix_expression1328 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_in_postfix_expression1330 = new BitSet(new long[]{0x1000000000000000L});
    public static final BitSet FOLLOW_60_in_postfix_expression1332 = new BitSet(new long[]{0x0800068840000002L});
    public static final BitSet FOLLOW_30_in_postfix_expression1346 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_postfix_expression1348 = new BitSet(new long[]{0x0800068840000002L});
    public static final BitSet FOLLOW_30_in_postfix_expression1362 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_argument_expression_list_in_postfix_expression1364 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_postfix_expression1366 = new BitSet(new long[]{0x0800068840000002L});
    public static final BitSet FOLLOW_42_in_postfix_expression1380 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_IDENTIFIER_in_postfix_expression1382 = new BitSet(new long[]{0x0800068840000002L});
    public static final BitSet FOLLOW_41_in_postfix_expression1396 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_IDENTIFIER_in_postfix_expression1398 = new BitSet(new long[]{0x0800068840000002L});
    public static final BitSet FOLLOW_35_in_postfix_expression1412 = new BitSet(new long[]{0x0800068840000002L});
    public static final BitSet FOLLOW_39_in_postfix_expression1426 = new BitSet(new long[]{0x0800068840000002L});
    public static final BitSet FOLLOW_IDENTIFIER_in_primary_expression1484 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_constant_in_primary_expression1489 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_primary_expression1494 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_in_primary_expression1496 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_primary_expression1498 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_assignment_expression_in_expression1571 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_37_in_expression1574 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_assignment_expression_in_expression1576 = new BitSet(new long[]{0x0000002000000002L});
    public static final BitSet FOLLOW_conditional_expression_in_constant_expression1589 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_lvalue_in_assignment_expression1600 = new BitSet(new long[]{0x4214211224000000L,0x0000002000000000L});
    public static final BitSet FOLLOW_assignment_operator_in_assignment_expression1602 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_assignment_expression_in_assignment_expression1604 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_conditional_expression_in_assignment_expression1609 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_unary_expression_in_lvalue1621 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_logical_or_expression_in_conditional_expression1693 = new BitSet(new long[]{0x0400000000000002L});
    public static final BitSet FOLLOW_58_in_conditional_expression1696 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_in_conditional_expression1698 = new BitSet(new long[]{0x0000400000000000L});
    public static final BitSet FOLLOW_46_in_conditional_expression1700 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_conditional_expression_in_conditional_expression1702 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_logical_and_expression_in_logical_or_expression1715 = new BitSet(new long[]{0x0000000000000002L,0x0000004000000000L});
    public static final BitSet FOLLOW_102_in_logical_or_expression1718 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_logical_and_expression_in_logical_or_expression1720 = new BitSet(new long[]{0x0000000000000002L,0x0000004000000000L});
    public static final BitSet FOLLOW_inclusive_or_expression_in_logical_and_expression1733 = new BitSet(new long[]{0x0000000008000002L});
    public static final BitSet FOLLOW_27_in_logical_and_expression1736 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_inclusive_or_expression_in_logical_and_expression1738 = new BitSet(new long[]{0x0000000008000002L});
    public static final BitSet FOLLOW_exclusive_or_expression_in_inclusive_or_expression1751 = new BitSet(new long[]{0x0000000000000002L,0x0000001000000000L});
    public static final BitSet FOLLOW_100_in_inclusive_or_expression1754 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_exclusive_or_expression_in_inclusive_or_expression1756 = new BitSet(new long[]{0x0000000000000002L,0x0000001000000000L});
    public static final BitSet FOLLOW_and_expression_in_exclusive_or_expression1769 = new BitSet(new long[]{0x2000000000000002L});
    public static final BitSet FOLLOW_61_in_exclusive_or_expression1772 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_and_expression_in_exclusive_or_expression1774 = new BitSet(new long[]{0x2000000000000002L});
    public static final BitSet FOLLOW_equality_expression_in_and_expression1787 = new BitSet(new long[]{0x0000000010000002L});
    public static final BitSet FOLLOW_28_in_and_expression1790 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_equality_expression_in_and_expression1792 = new BitSet(new long[]{0x0000000010000002L});
    public static final BitSet FOLLOW_relational_expression_in_equality_expression1804 = new BitSet(new long[]{0x0020000001000002L});
    public static final BitSet FOLLOW_set_in_equality_expression1807 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_relational_expression_in_equality_expression1813 = new BitSet(new long[]{0x0020000001000002L});
    public static final BitSet FOLLOW_shift_expression_in_relational_expression1826 = new BitSet(new long[]{0x00C9000000000002L});
    public static final BitSet FOLLOW_set_in_relational_expression1829 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_shift_expression_in_relational_expression1839 = new BitSet(new long[]{0x00C9000000000002L});
    public static final BitSet FOLLOW_additive_expression_in_shift_expression1852 = new BitSet(new long[]{0x0102000000000002L});
    public static final BitSet FOLLOW_set_in_shift_expression1855 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_additive_expression_in_shift_expression1861 = new BitSet(new long[]{0x0102000000000002L});
    public static final BitSet FOLLOW_labeled_statement_in_statement1875 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_compound_statement_in_statement1880 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_expression_statement_in_statement1888 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_expression_statement_in_statement1912 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_selection_statement_in_statement1919 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_selection_statement_in_statement1943 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_iteration_statement_in_statement1950 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_iteration_statement_in_statement1974 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_jump_statement_in_statement1979 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_IDENTIFIER_in_labeled_statement1994 = new BitSet(new long[]{0x0000400000000000L});
    public static final BitSet FOLLOW_46_in_labeled_statement1996 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_labeled_statement1998 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_69_in_labeled_statement2005 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_constant_expression_in_labeled_statement2008 = new BitSet(new long[]{0x0000400000000000L});
    public static final BitSet FOLLOW_46_in_labeled_statement2010 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_labeled_statement2015 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_69_in_labeled_statement2044 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_constant_expression_in_labeled_statement2047 = new BitSet(new long[]{0x0000400000000000L});
    public static final BitSet FOLLOW_46_in_labeled_statement2049 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_labeled_statement2051 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_73_in_labeled_statement2060 = new BitSet(new long[]{0x0000400000000000L});
    public static final BitSet FOLLOW_46_in_labeled_statement2062 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_labeled_statement2066 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_73_in_labeled_statement2090 = new BitSet(new long[]{0x0000400000000000L});
    public static final BitSet FOLLOW_46_in_labeled_statement2092 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_labeled_statement2094 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_99_in_compound_statement2117 = new BitSet(new long[]{0x000080CD50942A50L,0x0000018FFFFFEFFBL});
    public static final BitSet FOLLOW_declaration_in_compound_statement2121 = new BitSet(new long[]{0x000080CD50942A50L,0x0000018FFFFFEFFBL});
    public static final BitSet FOLLOW_statement_list_in_compound_statement2127 = new BitSet(new long[]{0x0000000000000000L,0x0000008000000000L});
    public static final BitSet FOLLOW_103_in_compound_statement2133 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_99_in_compound_statement2165 = new BitSet(new long[]{0x000080CD50942A50L,0x0000018FFFFFEFFBL});
    public static final BitSet FOLLOW_declaration_in_compound_statement2168 = new BitSet(new long[]{0x000080CD50942A50L,0x0000018FFFFFEFFBL});
    public static final BitSet FOLLOW_statement_list_in_compound_statement2171 = new BitSet(new long[]{0x0000000000000000L,0x0000008000000000L});
    public static final BitSet FOLLOW_103_in_compound_statement2174 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_statement_in_statement_list2187 = new BitSet(new long[]{0x000080CD50942A52L,0x0000010C12470730L});
    public static final BitSet FOLLOW_47_in_expression_statement2199 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_expression_in_expression_statement2204 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_expression_statement2206 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_82_in_selection_statement2223 = new BitSet(new long[]{0x0000000040000000L});
    public static final BitSet FOLLOW_30_in_selection_statement2225 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_in_selection_statement2227 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_selection_statement2229 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_selection_statement2233 = new BitSet(new long[]{0x0000000000000002L,0x0000000000001000L});
    public static final BitSet FOLLOW_76_in_selection_statement2248 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_selection_statement2252 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_92_in_selection_statement2259 = new BitSet(new long[]{0x0000000040000000L});
    public static final BitSet FOLLOW_30_in_selection_statement2261 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_in_selection_statement2263 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_selection_statement2265 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_selection_statement2267 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_98_in_iteration_statement2287 = new BitSet(new long[]{0x0000000040000000L});
    public static final BitSet FOLLOW_30_in_iteration_statement2289 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_in_iteration_statement2291 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_iteration_statement2293 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_iteration_statement2295 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_74_in_iteration_statement2300 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_iteration_statement2302 = new BitSet(new long[]{0x0000000000000000L,0x0000000400000000L});
    public static final BitSet FOLLOW_98_in_iteration_statement2304 = new BitSet(new long[]{0x0000000040000000L});
    public static final BitSet FOLLOW_30_in_iteration_statement2306 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_in_iteration_statement2308 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_iteration_statement2310 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_iteration_statement2312 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_80_in_iteration_statement2317 = new BitSet(new long[]{0x0000000040000000L});
    public static final BitSet FOLLOW_30_in_iteration_statement2319 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_statement_in_iteration_statement2321 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_statement_in_iteration_statement2323 = new BitSet(new long[]{0x000000CDD0942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_in_iteration_statement2325 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_iteration_statement2328 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_iteration_statement2330 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_81_in_jump_statement2341 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_IDENTIFIER_in_jump_statement2343 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_jump_statement2345 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_72_in_jump_statement2350 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_jump_statement2352 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_68_in_jump_statement2357 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_jump_statement2359 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_86_in_jump_statement2364 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_jump_statement2366 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_86_in_jump_statement2371 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_expression_in_jump_statement2373 = new BitSet(new long[]{0x0000800000000000L});
    public static final BitSet FOLLOW_47_in_jump_statement2375 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declaration_specifiers_in_synpred3_C157 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declaration_specifiers_in_synpred5_C157 = new BitSet(new long[]{0x0000000140002000L});
    public static final BitSet FOLLOW_declarator_in_synpred5_C160 = new BitSet(new long[]{0x0000000000002000L,0x0000000BEDB8E8CBL});
    public static final BitSet FOLLOW_declaration_in_synpred5_C162 = new BitSet(new long[]{0x0000000000002000L,0x0000000BEDB8E8CBL});
    public static final BitSet FOLLOW_99_in_synpred5_C165 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_attribute_in_synpred6_C151 = new BitSet(new long[]{0x0000000140002000L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_function_definition_in_synpred6_C170 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declaration_specifiers_in_synpred8_C204 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declaration_specifiers_in_synpred11_C282 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_type_specifier_in_synpred17_C351 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_type_specifier_in_synpred41_C618 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_pointer_in_synpred52_C776 = new BitSet(new long[]{0x0000000040002000L});
    public static final BitSet FOLLOW_direct_declarator_in_synpred52_C779 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declarator_suffix_in_synpred54_C828 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_synpred57_C868 = new BitSet(new long[]{0x0000000000002000L,0x00000003CDB8E8CBL});
    public static final BitSet FOLLOW_parameter_type_list_in_synpred57_C870 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_synpred57_C872 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_synpred58_C882 = new BitSet(new long[]{0x0000000000002000L});
    public static final BitSet FOLLOW_identifier_list_in_synpred58_C884 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_synpred58_C886 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_type_qualifier_in_synpred59_C911 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_pointer_in_synpred60_C914 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_32_in_synpred61_C909 = new BitSet(new long[]{0x0000000000000000L,0x0000000200000082L});
    public static final BitSet FOLLOW_type_qualifier_in_synpred61_C911 = new BitSet(new long[]{0x0000000100000002L,0x0000000200000082L});
    public static final BitSet FOLLOW_pointer_in_synpred61_C914 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_32_in_synpred62_C920 = new BitSet(new long[]{0x0000000100000000L});
    public static final BitSet FOLLOW_pointer_in_synpred62_C922 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declarator_in_synpred65_C977 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_abstract_declarator_in_synpred66_C979 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_direct_abstract_declarator_in_synpred69_C1026 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_abstract_declarator_suffix_in_synpred72_C1057 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_30_in_synpred85_C1227 = new BitSet(new long[]{0x0000000000002000L,0x00000003C998A8C3L});
    public static final BitSet FOLLOW_type_name_in_synpred85_C1229 = new BitSet(new long[]{0x0000000080000000L});
    public static final BitSet FOLLOW_31_in_synpred85_C1231 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_cast_expression_in_synpred85_C1233 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_89_in_synpred90_C1275 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_unary_expression_in_synpred90_C1277 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_lvalue_in_synpred112_C1600 = new BitSet(new long[]{0x4214211224000000L,0x0000002000000000L});
    public static final BitSet FOLLOW_assignment_operator_in_synpred112_C1602 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_assignment_expression_in_synpred112_C1604 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_expression_statement_in_synpred139_C1888 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_expression_statement_in_synpred140_C1912 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_selection_statement_in_synpred141_C1919 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_selection_statement_in_synpred142_C1943 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_iteration_statement_in_synpred143_C1950 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_iteration_statement_in_synpred144_C1974 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_69_in_synpred146_C2005 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_constant_expression_in_synpred146_C2008 = new BitSet(new long[]{0x0000400000000000L});
    public static final BitSet FOLLOW_46_in_synpred146_C2010 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_synpred146_C2015 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_69_in_synpred147_C2044 = new BitSet(new long[]{0x000000CD50942A50L,0x0000010002000000L});
    public static final BitSet FOLLOW_constant_expression_in_synpred147_C2047 = new BitSet(new long[]{0x0000400000000000L});
    public static final BitSet FOLLOW_46_in_synpred147_C2049 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_synpred147_C2051 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_73_in_synpred148_C2060 = new BitSet(new long[]{0x0000400000000000L});
    public static final BitSet FOLLOW_46_in_synpred148_C2062 = new BitSet(new long[]{0x000080CD50942A50L,0x0000010C12470730L});
    public static final BitSet FOLLOW_statement_in_synpred148_C2066 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declaration_in_synpred149_C2121 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_99_in_synpred151_C2117 = new BitSet(new long[]{0x000080CD50942A50L,0x0000018FFFFFEFFBL});
    public static final BitSet FOLLOW_declaration_in_synpred151_C2121 = new BitSet(new long[]{0x000080CD50942A50L,0x0000018FFFFFEFFBL});
    public static final BitSet FOLLOW_statement_list_in_synpred151_C2127 = new BitSet(new long[]{0x0000000000000000L,0x0000008000000000L});
    public static final BitSet FOLLOW_103_in_synpred151_C2133 = new BitSet(new long[]{0x0000000000000002L});
    public static final BitSet FOLLOW_declaration_in_synpred152_C2168 = new BitSet(new long[]{0x0000000000000002L});

}