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
include window/CMakeFiles/window.dir/depend.make

# Include the progress variables for this target.
include window/CMakeFiles/window.dir/progress.make

# Include the compile flags for this target's objects.
include window/CMakeFiles/window.dir/flags.make

window/CMakeFiles/window.dir/src/window/window.cpp.obj: window/CMakeFiles/window.dir/flags.make
window/CMakeFiles/window.dir/src/window/window.cpp.obj: window/CMakeFiles/window.dir/includes_CXX.rsp
window/CMakeFiles/window.dir/src/window/window.cpp.obj: ../window/src/window/window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object window/CMakeFiles/window.dir/src/window/window.cpp.obj"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\window && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\window.dir\src\window\window.cpp.obj -c D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\window\src\window\window.cpp

window/CMakeFiles/window.dir/src/window/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/window.dir/src/window/window.cpp.i"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\window && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\window\src\window\window.cpp > CMakeFiles\window.dir\src\window\window.cpp.i

window/CMakeFiles/window.dir/src/window/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/window.dir/src/window/window.cpp.s"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\window && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\window\src\window\window.cpp -o CMakeFiles\window.dir\src\window\window.cpp.s

# Object files for target window
window_OBJECTS = \
"CMakeFiles/window.dir/src/window/window.cpp.obj"

# External object files for target window
window_EXTERNAL_OBJECTS =

bin/libwindow-d.dll: window/CMakeFiles/window.dir/src/window/window.cpp.obj
bin/libwindow-d.dll: window/CMakeFiles/window.dir/build.make
bin/libwindow-d.dll: lib/libthread-d.dll.a
bin/libwindow-d.dll: lib/libglad.dll.a
bin/libwindow-d.dll: window/CMakeFiles/window.dir/linklibs.rsp
bin/libwindow-d.dll: window/CMakeFiles/window.dir/objects1.rsp
bin/libwindow-d.dll: window/CMakeFiles/window.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ..\bin\libwindow-d.dll"
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\window && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\window.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
window/CMakeFiles/window.dir/build: bin/libwindow-d.dll

.PHONY : window/CMakeFiles/window.dir/build

window/CMakeFiles/window.dir/clean:
	cd /d D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\window && $(CMAKE_COMMAND) -P CMakeFiles\window.dir\cmake_clean.cmake
.PHONY : window/CMakeFiles/window.dir/clean

window/CMakeFiles/window.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0 D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\window D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\window D:\UserData\Documents\vscode-workspace\StillHope\StillHope_build_1.0\build\window\CMakeFiles\window.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : window/CMakeFiles/window.dir/depend
