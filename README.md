# Инструкция по тому, как запустить этот проект:
1. Install **Cmake** in https://github.com/Kitware/CMake/releases/download/v3.28.3/cmake-3.28.3-windows-x86_64.msi (не забудьте галочку  добавления в Path при установке)
2. Install Additions in Vscode Extensions (**Cmake**, **Cmake Tools**)
3. Install **msys2** https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe (тоже галочка for Path)
4. Open **MSYS2 MSYS** application and install gcc, g++, gdb for our projects with next command (```pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain```)
5. Install **C/C++** addition in Vscode
6. Open Vscode in directory with this project.
7. Должно появиться иконка Cmake in Vscode. Нажимаете на него и выбираете **configure**. Далее выбираете **GCC 13.2**
8. **Build** and after **Launch** 
