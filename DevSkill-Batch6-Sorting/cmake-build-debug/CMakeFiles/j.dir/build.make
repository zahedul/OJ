# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/j.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/j.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/j.dir/flags.make

CMakeFiles/j.dir/J-QuickSort/j.cpp.o: CMakeFiles/j.dir/flags.make
CMakeFiles/j.dir/J-QuickSort/j.cpp.o: ../J-QuickSort/j.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/j.dir/J-QuickSort/j.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/j.dir/J-QuickSort/j.cpp.o -c /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/J-QuickSort/j.cpp

CMakeFiles/j.dir/J-QuickSort/j.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/j.dir/J-QuickSort/j.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/J-QuickSort/j.cpp > CMakeFiles/j.dir/J-QuickSort/j.cpp.i

CMakeFiles/j.dir/J-QuickSort/j.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/j.dir/J-QuickSort/j.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/J-QuickSort/j.cpp -o CMakeFiles/j.dir/J-QuickSort/j.cpp.s

# Object files for target j
j_OBJECTS = \
"CMakeFiles/j.dir/J-QuickSort/j.cpp.o"

# External object files for target j
j_EXTERNAL_OBJECTS =

j : CMakeFiles/j.dir/J-QuickSort/j.cpp.o
j : CMakeFiles/j.dir/build.make
j : CMakeFiles/j.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable j"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/j.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/j.dir/build: j

.PHONY : CMakeFiles/j.dir/build

CMakeFiles/j.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/j.dir/cmake_clean.cmake
.PHONY : CMakeFiles/j.dir/clean

CMakeFiles/j.dir/depend:
	cd /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/cmake-build-debug /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/cmake-build-debug /Users/zahed/projects/OJ/DevSkill-Batch6-Sorting/cmake-build-debug/CMakeFiles/j.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/j.dir/depend

