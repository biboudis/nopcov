import java.io.File;
import java.io.FileReader;
import org.antlr.runtime.*;
import org.apache.commons.io.FileUtils;
import org.apache.commons.io.FilenameUtils;
import org.antlr.stringtemplate.StringTemplateGroup;

public class CTransformer {
	private static final String TEMPLATE_PATH = "./templates/branch-coverage.stg";

	public static void main(String[] args) throws Exception {
		
		FileReader groupFileR = new FileReader(TEMPLATE_PATH);
		StringTemplateGroup templates = new StringTemplateGroup(groupFileR);
		groupFileR.close();
		
		for (int i=0; i<args.length;i++){
			String outputFile = 
					FilenameUtils.getFullPath(args[i]) +
					FilenameUtils.getBaseName(args[i]) +
					"-instrumented." +
					FilenameUtils.getExtension(args[i]);
			
			File output = new File(outputFile);
			
			CLexer lexer = new CLexer(new ANTLRFileStream(args[i]));
			TokenRewriteStream tokens = new TokenRewriteStream(lexer);
			CParser parser = new CParser(tokens);
			
			parser.setTemplateLib(templates);
			try {
				CParser.translation_unit_return r = parser.translation_unit();
				System.out.print(tokens.toString());
				FileUtils.writeStringToFile(output, tokens.toString());
			} catch (RecognitionException e) {
				e.printStackTrace();
			}
		}
	}
}