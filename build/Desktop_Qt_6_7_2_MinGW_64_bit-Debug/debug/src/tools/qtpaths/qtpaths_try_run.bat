@echo off

C:/Users/Bruno PC/Desktop/SOS/build/Desktop_Qt_6_7_2_MinGW_64_bit-Debug/debug/bin/qtpaths.exe -v > nul 2>&1

if "%errorlevel%" == "-1073741515" (
echo
echo     'qtpaths' is built successfully, but some of the libraries
echo     necessary for running it are missing. If you are building Qt with
echo     3rdparty libraries, make sure that you add their directory to the
echo     PATH environment variable.
echo
exit /b %errorlevel%
)
echo. > C:/Users/Bruno PC/Desktop/SOS/build/Desktop_Qt_6_7_2_MinGW_64_bit-Debug/debug/src/tools/qtpaths/qtpaths_try_run_passed
