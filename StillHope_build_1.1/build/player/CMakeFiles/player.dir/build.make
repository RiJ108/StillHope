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
include player/CMakeFiles/player.dir/depend.make

# Include the progress variables for this target.
include player/CMakeFiles/player.dir/progress.make

# Include the compile flags for this target's objects.
include player/CMakeFiles/player.dir/flags.make

player/CMakeFiles/player.dir/src/player/player.cpp.obj: player/CMakeFiles/player.dir/flags.make
player/CMakeFiles/player.dir/src/player/player.cpp.obj: player/CMakeFiles/player.dir/includes_CXX.rsp
player/CMakeFiles/player.dir/src/player/player.cpp.obj: ../player/src/player/player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object player/CMakeFiles/player.dir/src/player/player.cpp.obj"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\player && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\player.dir\src\player\player.cpp.obj -c D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\player\src\player\player.cpp

player/CMakeFiles/player.dir/src/player/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/player.dir/src/player/player.cpp.i"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\player && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\player\src\player\player.cpp > CMakeFiles\player.dir\src\player\player.cpp.i

player/CMakeFiles/player.dir/src/player/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/player.dir/src/player/player.cpp.s"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\player && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\player\src\player\player.cpp -o CMakeFiles\player.dir\src\player\player.cpp.s

# Object files for target player
player_OBJECTS = \
"CMakeFiles/player.dir/src/player/player.cpp.obj"

# External object files for target player
player_EXTERNAL_OBJECTS =

bin/libplayer-d.dll: player/CMakeFiles/player.dir/src/player/player.cpp.obj
bin/libplayer-d.dll: player/CMakeFiles/player.dir/build.make
bin/libplayer-d.dll: lib/libshader-d.dll.a
bin/libplayer-d.dll: lib/libglad.dll.a
bin/libplayer-d.dll: player/CMakeFiles/player.dir/linklibs.rsp
bin/libplayer-d.dll: player/CMakeFiles/player.dir/objects1.rsp
bin/libplayer-d.dll: player/CMakeFiles/player.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ..\bin\libplayer-d.dll"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\player && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\player.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
player/CMakeFiles/player.dir/build: bin/libplayer-d.dll

.PHONY : player/CMakeFiles/player.dir/build

player/CMakeFiles/player.dir/clean:
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\player && $(CMAKE_COMMAND) -P CMakeFiles\player.dir\cmake_clean.cmake
.PHONY : player/CMakeFiles/player.dir/clean

player/CMakeFiles/player.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1 D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\player D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\player D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\player\CMakeFiles\player.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : player/CMakeFiles/player.dir/depend
