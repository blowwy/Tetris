# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/35/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/35/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/boy/Tetris

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/boy/Tetris/cmake-build-debug

# Utility rule file for qtlayoutexample_autogen.

# Include the progress variables for this target.
include CMakeFiles/qtlayoutexample_autogen.dir/progress.make

CMakeFiles/qtlayoutexample_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/boy/Tetris/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target qtlayoutexample"
	/snap/clion/35/bin/cmake/linux/bin/cmake -E cmake_autogen /home/boy/Tetris/cmake-build-debug/CMakeFiles/qtlayoutexample_autogen.dir/AutogenInfo.cmake Debug

qtlayoutexample_autogen: CMakeFiles/qtlayoutexample_autogen
qtlayoutexample_autogen: CMakeFiles/qtlayoutexample_autogen.dir/build.make

.PHONY : qtlayoutexample_autogen

# Rule to build all files generated by this target.
CMakeFiles/qtlayoutexample_autogen.dir/build: qtlayoutexample_autogen

.PHONY : CMakeFiles/qtlayoutexample_autogen.dir/build

CMakeFiles/qtlayoutexample_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qtlayoutexample_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qtlayoutexample_autogen.dir/clean

CMakeFiles/qtlayoutexample_autogen.dir/depend:
	cd /home/boy/Tetris/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/boy/Tetris /home/boy/Tetris /home/boy/Tetris/cmake-build-debug /home/boy/Tetris/cmake-build-debug /home/boy/Tetris/cmake-build-debug/CMakeFiles/qtlayoutexample_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qtlayoutexample_autogen.dir/depend

