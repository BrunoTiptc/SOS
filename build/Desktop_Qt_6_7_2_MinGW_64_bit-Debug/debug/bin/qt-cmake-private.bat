@echo off
setlocal
:: The directory of this script is the expanded absolute path of the "$qt_prefix/bin" directory.
set script_dir_path=%~dp0

:: Try to use original cmake, otherwise to make it relocatable, use any cmake found in PATH.
set cmake_path=C:/Program Files/CMake/bin/cmake.exe
if not exist "%cmake_path%" set cmake_path=cmake

set toolchain_path=%script_dir_path%\../lib/cmake/Qt6\qt.toolchain.cmake
"%cmake_path%" -DCMAKE_TOOLCHAIN_FILE="%toolchain_path%" -G"MinGW Makefiles" -DQT_USE_ORIGINAL_COMPILER=ON %*
