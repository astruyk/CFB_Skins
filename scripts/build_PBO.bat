SET TOOL_DIR="C:\Games\Steam\steamapps\common\Arma 3 Tools\"
SET CONTENT_DIR="C:\Users\Anton\Documents\PlasticSCM\CAF_Skins"

%TOOL_DIR%\AddonBuilder\AddonBuilder.exe %CONTENT_DIR%\src\@CFB_Skins\addons\cfb_skins %CONTENT_DIR%\bin\@CFB_Skins\addons -sign="..\..\..\..\Dropbox\Arma3\jtf2.biprivatekey" -packonly -clear > build_PBO_out.txt
pause