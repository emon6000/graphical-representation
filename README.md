Graphical representation Using grafics.h in VScode

open .vscode and create file tasks.json

->paste tasks.json

(you can find the tasks.json in the .vscode folder)


open code runner extension files

->click extension settings

Scroll Down for Code-runner:Executor Map

->Edit in settings.json

then replace the cpp, line 29 with the text below

/*

"cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 && $dir$fileNameWithoutExt",

*/


go to C:\MinGW\include

->paste the graphics.h & winbgim.h files

go to C:\MinGW\lib

->paste libbgi.a file
