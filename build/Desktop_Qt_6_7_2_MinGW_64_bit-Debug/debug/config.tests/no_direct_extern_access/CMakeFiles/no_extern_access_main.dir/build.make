# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\no_direct_extern_access

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\no_direct_extern_access"

# Include any dependencies generated for this target.
include CMakeFiles/no_extern_access_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/no_extern_access_main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/no_extern_access_main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/no_extern_access_main.dir/flags.make

CMakeFiles/no_extern_access_main.dir/other.cpp.obj: CMakeFiles/no_extern_access_main.dir/flags.make
CMakeFiles/no_extern_access_main.dir/other.cpp.obj: C:/Qt/Src/qt-everywhere-src-6.7.2/qtbase/config.tests/no_direct_extern_access/other.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --progress-dir="C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\no_direct_extern_access\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/no_extern_access_main.dir/other.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\no_extern_access_main.dir\other.cpp.obj -c C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\no_direct_extern_access\other.cpp

CMakeFiles/no_extern_access_main.dir/other.cpp.i: cmake_force
	@echo Preprocessing CXX source to CMakeFiles/no_extern_access_main.dir/other.cpp.i
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\no_direct_extern_access\other.cpp > CMakeFiles\no_extern_access_main.dir\other.cpp.i

CMakeFiles/no_extern_access_main.dir/other.cpp.s: cmake_force
	@echo Compiling CXX source to assembly CMakeFiles/no_extern_access_main.dir/other.cpp.s
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\no_direct_extern_access\other.cpp -o CMakeFiles\no_extern_access_main.dir\other.cpp.s

CMakeFiles/no_extern_access_main.dir/main.cpp.obj: CMakeFiles/no_extern_access_main.dir/flags.make
CMakeFiles/no_extern_access_main.dir/main.cpp.obj: C:/Qt/Src/qt-everywhere-src-6.7.2/qtbase/config.tests/no_direct_extern_access/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --progress-dir="C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\no_direct_extern_access\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/no_extern_access_main.dir/main.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\no_extern_access_main.dir\main.cpp.obj -c C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\no_direct_extern_access\main.cpp

CMakeFiles/no_extern_access_main.dir/main.cpp.i: cmake_force
	@echo Preprocessing CXX source to CMakeFiles/no_extern_access_main.dir/main.cpp.i
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\no_direct_extern_access\main.cpp > CMakeFiles\no_extern_access_main.dir\main.cpp.i

CMakeFiles/no_extern_access_main.dir/main.cpp.s: cmake_force
	@echo Compiling CXX source to assembly CMakeFiles/no_extern_access_main.dir/main.cpp.s
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\no_direct_extern_access\main.cpp -o CMakeFiles\no_extern_access_main.dir\main.cpp.s

# Object files for target no_extern_access_main
no_extern_access_main_OBJECTS = \
"CMakeFiles/no_extern_access_main.dir/other.cpp.obj" \
"CMakeFiles/no_extern_access_main.dir/main.cpp.obj"

# External object files for target no_extern_access_main
no_extern_access_main_EXTERNAL_OBJECTS =

no_extern_access_main.exe: CMakeFiles/no_extern_access_main.dir/other.cpp.obj
no_extern_access_main.exe: CMakeFiles/no_extern_access_main.dir/main.cpp.obj
no_extern_access_main.exe: CMakeFiles/no_extern_access_main.dir/build.make
no_extern_access_main.exe: libno_extern_access_lib.dll.a
no_extern_access_main.exe: CMakeFiles/no_extern_access_main.dir/linkLibs.rsp
no_extern_access_main.exe: CMakeFiles/no_extern_access_main.dir/objects1.rsp
no_extern_access_main.exe: CMakeFiles/no_extern_access_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --progress-dir="C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\no_direct_extern_access\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable no_extern_access_main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\no_extern_access_main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/no_extern_access_main.dir/build: no_extern_access_main.exe
.PHONY : CMakeFiles/no_extern_access_main.dir/build

CMakeFiles/no_extern_access_main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\no_extern_access_main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/no_extern_access_main.dir/clean

CMakeFiles/no_extern_access_main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\no_direct_extern_access C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\no_direct_extern_access "C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\no_direct_extern_access" "C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\no_direct_extern_access" "C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\no_direct_extern_access\CMakeFiles\no_extern_access_main.dir\DependInfo.cmake"
.PHONY : CMakeFiles/no_extern_access_main.dir/depend

