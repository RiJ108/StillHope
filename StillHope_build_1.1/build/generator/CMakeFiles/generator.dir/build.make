# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = C:\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build

# Include any dependencies generated for this target.
include generator/CMakeFiles/generator.dir/depend.make

# Include the progress variables for this target.
include generator/CMakeFiles/generator.dir/progress.make

# Include the compile flags for this target's objects.
include generator/CMakeFiles/generator.dir/flags.make

generator/CMakeFiles/generator.dir/src/generator/generator.cpp.obj: generator/CMakeFiles/generator.dir/flags.make
generator/CMakeFiles/generator.dir/src/generator/generator.cpp.obj: generator/CMakeFiles/generator.dir/includes_CXX.rsp
generator/CMakeFiles/generator.dir/src/generator/generator.cpp.obj: ../generator/src/generator/generator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object generator/CMakeFiles/generator.dir/src/generator/generator.cpp.obj"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\generator && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\generator.dir\src\generator\generator.cpp.obj -c D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\generator\src\generator\generator.cpp

generator/CMakeFiles/generator.dir/src/generator/generator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generator.dir/src/generator/generator.cpp.i"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\generator && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\generator\src\generator\generator.cpp > CMakeFiles\generator.dir\src\generator\generator.cpp.i

generator/CMakeFiles/generator.dir/src/generator/generator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generator.dir/src/generator/generator.cpp.s"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\generator && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\generator\src\generator\generator.cpp -o CMakeFiles\generator.dir\src\generator\generator.cpp.s

# Object files for target generator
generator_OBJECTS = \
"CMakeFiles/generator.dir/src/generator/generator.cpp.obj"

# External object files for target generator
generator_EXTERNAL_OBJECTS =

bin/libgenerator-d.dll: generator/CMakeFiles/generator.dir/src/generator/generator.cpp.obj
bin/libgenerator-d.dll: generator/CMakeFiles/generator.dir/build.make
bin/libgenerator-d.dll: generator/CMakeFiles/generator.dir/linklibs.rsp
bin/libgenerator-d.dll: generator/CMakeFiles/generator.dir/objects1.rsp
bin/libgenerator-d.dll: generator/CMakeFiles/generator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ..\bin\libgenerator-d.dll"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\generator && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\generator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
generator/CMakeFiles/generator.dir/build: bin/libgenerator-d.dll

.PHONY : generator/CMakeFiles/generator.dir/build

generator/CMakeFiles/generator.dir/clean:
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\generator && $(CMAKE_COMMAND) -P CMakeFiles\generator.dir\cmake_clean.cmake
.PHONY : generator/CMakeFiles/generator.dir/clean

generator/CMakeFiles/generator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1 D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\generator D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\generator D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\generator\CMakeFiles\generator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : generator/CMakeFiles/generator.dir/depend
