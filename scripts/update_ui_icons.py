import os;
from subprocess import call;

tool = "C:/Games/Steam/steamapps/common/Arma 3 Tools/ImageToPAA/ImageToPAA.exe";
sourceDir = "../src/skins/UI/";
destDir = "../src/@CFB_Skins/addons/cfb_skins/UI/";

for pathName in os.listdir(sourceDir):
	if (pathName.endswith(".png")):
		sourcePath =os.path.join(sourceDir, pathName);
		destPath = os.path.join(destDir, pathName.replace(".png", ".paa"));
		call (["C:/Games/Steam/steamapps/common/Arma 3 Tools/ImageToPAA/ImageToPAA.exe", sourcePath, destPath]);