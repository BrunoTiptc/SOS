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
CMAKE_SOURCE_DIR = C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\x86_simd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\x86_simd_avx512vbmi2"

# Include any dependencies generated for this target.
include CMakeFiles/SimdTestavx512vbmi2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SimdTestavx512vbmi2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SimdTestavx512vbmi2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimdTestavx512vbmi2.dir/flags.make

CMakeFiles/SimdTestavx512vbmi2.dir/main.cpp.obj: CMakeFiles/SimdTestavx512vbmi2.dir/flags.make
CMakeFiles/SimdTestavx512vbmi2.dir/main.cpp.obj: C:/Qt/Src/qt-everywhere-src-6.7.2/qtbase/config.tests/x86_simd/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --progress-dir="C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\x86_simd_avx512vbmi2\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SimdTestavx512vbmi2.dir/main.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SimdTestavx512vbmi2.dir\main.cpp.obj -c C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\x86_simd\main.cpp

CMakeFiles/SimdTestavx512vbmi2.dir/main.cpp.i: cmake_force
	@echo Preprocessing CXX source to CMakeFiles/SimdTestavx512vbmi2.dir/main.cpp.i
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\x86_simd\main.cpp > CMakeFiles\SimdTestavx512vbmi2.dir\main.cpp.i

CMakeFiles/SimdTestavx512vbmi2.dir/main.cpp.s: cmake_force
	@echo Compiling CXX source to assembly CMakeFiles/SimdTestavx512vbmi2.dir/main.cpp.s
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\x86_simd\main.cpp -o CMakeFiles\SimdTestavx512vbmi2.dir\main.cpp.s

# Object files for target SimdTestavx512vbmi2
SimdTestavx512vbmi2_OBJECTS = \
"CMakeFiles/SimdTestavx512vbmi2.dir/main.cpp.obj"

# External object files for target SimdTestavx512vbmi2
SimdTestavx512vbmi2_EXTERNAL_OBJECTS =

SimdTestavx512vbmi2.exe: CMakeFiles/SimdTestavx512vbmi2.dir/main.cpp.obj
SimdTestavx512vbmi2.exe: CMakeFiles/SimdTestavx512vbmi2.dir/build.make
SimdTestavx512vbmi2.exe: CMakeFiles/SimdTestavx512vbmi2.dir/linkLibs.rsp
SimdTestavx512vbmi2.exe: CMakeFiles/SimdTestavx512vbmi2.dir/objects1.rsp
SimdTestavx512vbmi2.exe: CMakeFiles/SimdTestavx512vbmi2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --progress-dir="C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\x86_simd_avx512vbmi2\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SimdTestavx512vbmi2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SimdTestavx512vbmi2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimdTestavx512vbmi2.dir/build: SimdTestavx512vbmi2.exe
.PHONY : CMakeFiles/SimdTestavx512vbmi2.dir/build

CMakeFiles/SimdTestavx512vbmi2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SimdTestavx512vbmi2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SimdTestavx512vbmi2.dir/clean

CMakeFiles/SimdTestavx512vbmi2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\x86_simd C:\Qt\Src\qt-everywhere-src-6.7.2\qtbase\config.tests\x86_simd "C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\x86_simd_avx512vbmi2" "C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\x86_simd_avx512vbmi2" "C:\Users\Bruno PC\Desktop\SOS\build\Desktop_Qt_6_7_2_MinGW_64_bit-Debug\debug\config.tests\x86_simd_avx512vbmi2\CMakeFiles\SimdTestavx512vbmi2.dir\DependInfo.cmake"
.PHONY : CMakeFiles/SimdTestavx512vbmi2.dir/depend

