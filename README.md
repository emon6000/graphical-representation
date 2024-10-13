# Graphical Representation Using graphics.h in VSCode

This project demonstrates how to set up and use `graphics.h` for graphical representation in C++ with Visual Studio Code.

## Instructions

1. Open the `.vscode` folder and create a file named `tasks.json`.
2. Paste the following content into `tasks.json`:
    ```json
    {
        // Your tasks.json content here
    }
    ```
3. Open the Code Runner extension settings:
    - Click on "Extensions" in the sidebar.
    - Search for "Code Runner" and click on it.
4. Scroll down to the **Code-runner: Executor Map** section.
5. Click on "Edit in settings.json."
6. Replace the line for `cpp` (line 29) with the following text:
    ```json
    "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 && $dir$fileNameWithoutExt",
    ```
7. Go to `C:\MinGW\include` and paste the `graphics.h` and `winbgim.h` files.
8. Go to `C:\MinGW\lib` and paste the `libbgi.a` file.

## Example Usage

You can now use `graphics.h` for tree or graph visualization in your C++ projects.

## Contact

For questions or contributions, feel free to reach out!
