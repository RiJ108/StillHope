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
CMAKE_SOURCE_DIR = D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build

# Include any dependencies generated for this target.
include mef/CMakeFiles/mef.dir/depend.make

# Include the progress variables for this target.
include mef/CMakeFiles/mef.dir/progress.make

# Include the compile flags for this target's objects.
include mef/CMakeFiles/mef.dir/flags.make

mef/CMakeFiles/mef.dir/src/mef/mef.cpp.obj: mef/CMakeFiles/mef.dir/flags.make
mef/CMakeFiles/mef.dir/src/mef/mef.cpp.obj: mef/CMakeFiles/mef.dir/includes_CXX.rsp
mef/CMakeFiles/mef.dir/src/mef/mef.cpp.obj: ../mef/src/mef/mef.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object mef/CMakeFiles/mef.dir/src/mef/mef.cpp.obj"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\mef && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mef.dir\src\mef\mef.cpp.obj -c D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\mef\src\mef\mef.cpp

mef/CMakeFiles/mef.dir/src/mef/mef.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mef.dir/src/mef/mef.cpp.i"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\mef && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\mef\src\mef\mef.cpp > CMakeFiles\mef.dir\src\mef\mef.cpp.i

mef/CMakeFiles/mef.dir/src/mef/mef.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mef.dir/src/mef/mef.cpp.s"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\mef && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\mef\src\mef\mef.cpp -o CMakeFiles\mef.dir\src\mef\mef.cpp.s

# Object files for target mef
mef_OBJECTS = \
"CMakeFiles/mef.dir/src/mef/mef.cpp.obj"

# External object files for target mef
mef_EXTERNAL_OBJECTS =

bin/libmef-d.dll: mef/CMakeFiles/mef.dir/src/mef/mef.cpp.obj
bin/libmef-d.dll: mef/CMakeFiles/mef.dir/build.make
bin/libmef-d.dll: lib/libthread-d.dll.a
bin/libmef-d.dll: mef/CMakeFiles/mef.dir/linklibs.rsp
bin/libmef-d.dll: mef/CMakeFiles/mef.dir/objects1.rsp
bin/libmef-d.dll: mef/CMakeFiles/mef.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ..\bin\libmef-d.dll"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\mef && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mef.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mef/CMakeFiles/mef.dir/build: bin/libmef-d.dll

.PHONY : mef/CMakeFiles/mef.dir/build

mef/CMakeFiles/mef.dir/clean:
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\mef && $(CMAKE_COMMAND) -P CMakeFiles\mef.dir\cmake_clean.cmake
.PHONY : mef/CMakeFiles/mef.dir/clean

mef/CMakeFiles/mef.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0 D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\mef D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\mef D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\mef\CMakeFiles\mef.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : mef/CMakeFiles/mef.dir/depend
