import java.io.File;
import java.io.FileReader;
import java.io.InputStreamReader;

import org.antlr.runtime.*;
import org.apache.commons.io.FileUtils;
import org.apache.commons.io.FilenameUtils;
import org.antlr.stringtemplate.StringTemplateGroup;

public class CTransformer {

	public static void main(String[] args) throws Exception {

		InputStreamReader groupFileR = new InputStreamReader(CTransformer.class.getResourceAsStream("/branch-coverage.stg"));
		StringTemplateGroup templates = new StringTemplateGroup(groupFileR);
		groupFileR.close();
		
		if (args.length == 0) {
			System.err.println("No input files");
			return;
		}
		
		for (int i = 0; i < args.length; i++) {
			String outputFile = FilenameUtils.getFullPath(args[i])
					+ FilenameUtils.getBaseName(args[i]) + "-instrumented."
					+ FilenameUtils.getExtension(args[i]);

			File output = new File(outputFile);
			try {

				CLexer lexer = new CLexer(new ANTLRFileStream(args[i]));
				TokenRewriteStream tokens = new TokenRewriteStream(lexer);
				CParser parser = new CParser(tokens);

				parser.setTemplateLib(templates);

				parser.translation_unit();
				
				FileUtils.writeStringToFile(output, tokens.toString());
				
				System.err.println("SUCCESS: " + args[i]);
			} catch (Exception e) {
				System.err.println("FAILED: " + e.getMessage());
			}
		}
	}
}