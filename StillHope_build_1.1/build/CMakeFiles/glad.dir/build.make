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
include CMakeFiles/glad.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/glad.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/glad.dir/flags.make

CMakeFiles/glad.dir/lib/glad/glad.c.obj: CMakeFiles/glad.dir/flags.make
CMakeFiles/glad.dir/lib/glad/glad.c.obj: ../lib/glad/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/glad.dir/lib/glad/glad.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\glad.dir\lib\glad\glad.c.obj -c D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\lib\glad\glad.c

CMakeFiles/glad.dir/lib/glad/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glad.dir/lib/glad/glad.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\lib\glad\glad.c > CMakeFiles\glad.dir\lib\glad\glad.c.i

CMakeFiles/glad.dir/lib/glad/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glad.dir/lib/glad/glad.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\lib\glad\glad.c -o CMakeFiles\glad.dir\lib\glad\glad.c.s

# Object files for target glad
glad_OBJECTS = \
"CMakeFiles/glad.dir/lib/glad/glad.c.obj"

# External object files for target glad
glad_EXTERNAL_OBJECTS =

bin/libglad.dll: CMakeFiles/glad.dir/lib/glad/glad.c.obj
bin/libglad.dll: CMakeFiles/glad.dir/build.make
bin/libglad.dll: CMakeFiles/glad.dir/linklibs.rsp
bin/libglad.dll: CMakeFiles/glad.dir/objects1.rsp
bin/libglad.dll: CMakeFiles/glad.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library bin\libglad.dll"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\glad.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/glad.dir/build: bin/libglad.dll

.PHONY : CMakeFiles/glad.dir/build

CMakeFiles/glad.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\glad.dir\cmake_clean.cmake
.PHONY : CMakeFiles/glad.dir/clean

CMakeFiles/glad.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1 D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1 D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.1\build\CMakeFiles\glad.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/glad.dir/depend
