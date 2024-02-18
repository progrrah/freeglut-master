# Инструкция по тому, как запустить этот проект:
1. Install **Cmake** in https://github.com/Kitware/CMake/releases/download/v3.28.3/cmake-3.28.3-windows-x86_64.msi (не забудьте галочку  добавления в Path при установке)
2. Add manually in Path variables the next value **C:\Program Files\CMake\bin** ( guide for this https://www.youtube.com/watch?v=W9pg2FHeoq8)
3. Install Additions in Vscode Extensions (**Cmake**, **Cmake Tools**)
4. Install **msys2** https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe
5. Open **MSYS2 MSYS** application and install gcc, g++, gdb for our projects with next command (```pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain```)
6. Install **C/C++** addition in Vscode
7. Open Vscode in directory with this project.
8. Должно появиться иконка Cmake in Vscode. Нажимаете на него и выбираете **configure**. Далее выбираете **GCC 13.2**
9. **Build** and after **Launch**
10. In **executable** directory can coding in **main.cpp**
11. Another files libraries and executables **must add** in **CmakeLists.txt**
