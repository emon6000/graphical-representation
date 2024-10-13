# Graphical Representation Using graphics.h in VSCode

This project demonstrates how to set up and use `graphics.h` for graphical representation in C++ with Visual Studio Code.

## Instructions

1. Open the `.vscode` folder and create a file named `tasks.json`.
2. Paste the following content into `tasks.json`:
    ```json
    {
    "version": "2.0.0",
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe build active file",
            "command": "C:\\MinGW\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe",
                "-lbgi",
                "-lgdi32",
                "-lcomdlg32",
                "-luuid",
                "-loleaut32",
                "-lole32"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "compiler: C:\\MinGW\\bin\\g++.exe"
        }
    ]
}
    ```
    
3. **Install Required Extensions:**
   - Ensure you have both the **Code Runner** and **Exe Runner** extensions installed in VS Code.
   - You can find them by searching for "Code Runner" and "Exe Runner" in the Extensions view (Ctrl + Shift + X).

4. Open the Code Runner extension settings:
   - Click on "Extensions" in the sidebar.
   - Search for "Code Runner" and click on settings.
5. Scroll down to the **Code-runner: Executor Map** section.
6. Click on "Edit in settings.json."
7. Replace the line for `cpp` (line 29) with the following text:
    ```json
    "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 && $dir$fileNameWithoutExt",
    ```
8. Go to `C:\MinGW\include` and paste the `graphics.h` and `winbgim.h` files.
9. Go to `C:\MinGW\lib` and paste the `libbgi.a` file.

## Example Usage

You can now use `graphics.h` for tree or graph visualization in your C++ projects.

