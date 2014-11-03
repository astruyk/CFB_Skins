import re;

inputFileName = "../src/@CFB_Skins/addons/cfb_skins/vehicles_units_tw.hpp";
outputFileName = "../src/@CFB_Skins/addons/cfb_skins/vehicles_units_jtf2.hpp";

preprocessorDefinition = re.compile('class [\w]+;');

with open(inputFileName, 'r') as inputFile:
	with open(outputFileName, 'w') as outputFile:
		for line in inputFile:
			shouldBeCommentedOut = False;
			if preprocessorDefinition.match(line):
				shouldBeCommentedOut = True;

			# Transform the base class name from a TW solder to a JTF2 soldier
			line = line.replace("CFB_TW_Soldier", "CFB_JTF2_Soldier");
			
			# Change the base vehicle class so they show up in the JTF2 section
			line = line.replace("CFB_TW_VehicleClass", "CFB_JTF2_VehicleClass");
			
			# Change some of the equipment the unit starts with
			line = line.replace("CFB_TW_Uniform", "CFB_JTF2_Uniform");
			line = line.replace("CFB_TW_Rolled_Uniform", "CFB_JTF2_Rolled_Uniform");
			line = line.replace("CFB_TW_Tshirt_Uniform", "CFB_JTF2_Tshirt_Uniform");
			line = line.replace("NVGoggles_INDEP", "NVGoggles_OPFOR");
			
			# Change the helmets
			line = line.replace("CFB_TW_Helmet", "CFB_JTF2_Helmet");
			line = line.replace("CFB_TW_Boonie", "CFB_JTF2_Helmet");
			line = line.replace("CFB_TW_Patrol", "CFB_JTF2_Helmet");
			
			# Add balaclavas
			# ??

			if shouldBeCommentedOut:
				outputFile.write("// ");
			outputFile.write(line);