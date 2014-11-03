import re;

inputFileName = "../src/@CFB_Skins/addons/cfb_skins/groups_tw.hpp";
outputFileName = "../src/@CFB_Skins/addons/cfb_skins/groups_jtf2.hpp";

classNameRegex = re.compile('class ([\w]+) : [\w]+');

with open(inputFileName, 'r') as inputFile:
	with open(outputFileName, 'w') as outputFile:
		for line in inputFile:

			# Transform the base class name from TW groups to JTF2 groups
			line = line.replace("CFB_Groups_CADPAT_TW", "CFB_Groups_JTF2");
			
			# Change the section names
			line = line.replace("Infantry (CADPAT TW)", "Infantry (JTF2)");
			
			# Change the names of the units
			line = line.replace("CFB_TW_Soldier", "CFB_JTF2_Soldier");

			outputFile.write(line);