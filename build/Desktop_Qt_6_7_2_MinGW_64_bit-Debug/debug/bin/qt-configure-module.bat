@echo off
setlocal ENABLEDELAYEDEXPANSION ENABLEEXTENSIONS
set script_dir_path=%~dp0
set script_dir_path=%script_dir_path:~0,-1%

if "%1" == "" (
    call :print_usage
    exit /b 1
)

set module_root=%1
set module_root=%module_root:\=/%
shift
if not exist "%module_root%\CMakeLists.txt" (
    echo Error: %module_root% is not a valid Qt module source directory. >&2
    call :print_usage
    exit /b 1
)

set cmake_scripts_dir=%script_dir_path%\../lib/cmake/Qt6
echo %*>config.opt.in
call "%script_dir_path%\qt-cmake.bat" -DSKIP_ARGS=1 -DIN_FILE=config.opt.in -DOUT_FILE=config.opt ^
    -P "%cmake_scripts_dir%\QtWriteArgsFile.cmake"
call "%script_dir_path%\qt-cmake-private.bat" -DOPTFILE=config.opt -DMODULE_ROOT="%module_root%" ^
    -DCMAKE_COMMAND="%script_dir_path%\qt-cmake-private.bat" ^
    -P "%cmake_scripts_dir%\QtProcessConfigureArgs.cmake"
goto :eof

:print_usage
echo Usage: qt-configure-module ^<module-source-dir^> [options]
echo.
echo To display the available options for a Qt module, run
echo qt-configure-module ^<module-source-dir^> -help
goto :eof
