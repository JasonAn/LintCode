# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /media/jason/Program/Jetbrains/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /media/jason/Program/Jetbrains/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jason/Github/Lintcode/64

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jason/Github/Lintcode/64/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/64.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/64.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/64.dir/flags.make

CMakeFiles/64.dir/main.cpp.o: CMakeFiles/64.dir/flags.make
CMakeFiles/64.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/Github/Lintcode/64/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/64.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/64.dir/main.cpp.o -c /home/jason/Github/Lintcode/64/main.cpp

CMakeFiles/64.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/64.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/Github/Lintcode/64/main.cpp > CMakeFiles/64.dir/main.cpp.i

CMakeFiles/64.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/64.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/Github/Lintcode/64/main.cpp -o CMakeFiles/64.dir/main.cpp.s

CMakeFiles/64.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/64.dir/main.cpp.o.requires

CMakeFiles/64.dir/main.cpp.o.provides: CMakeFiles/64.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/64.dir/build.make CMakeFiles/64.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/64.dir/main.cpp.o.provides

CMakeFiles/64.dir/main.cpp.o.provides.build: CMakeFiles/64.dir/main.cpp.o


# Object files for target 64
64_OBJECTS = \
"CMakeFiles/64.dir/main.cpp.o"

# External object files for target 64
64_EXTERNAL_OBJECTS =

64: CMakeFiles/64.dir/main.cpp.o
64: CMakeFiles/64.dir/build.make
64: CMakeFiles/64.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jason/Github/Lintcode/64/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 64"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/64.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/64.dir/build: 64

.PHONY : CMakeFiles/64.dir/build

CMakeFiles/64.dir/requires: CMakeFiles/64.dir/main.cpp.o.requires

.PHONY : CMakeFiles/64.dir/requires

CMakeFiles/64.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/64.dir/cmake_clean.cmake
.PHONY : CMakeFiles/64.dir/clean

CMakeFiles/64.dir/depend:
	cd /home/jason/Github/Lintcode/64/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jason/Github/Lintcode/64 /home/jason/Github/Lintcode/64 /home/jason/Github/Lintcode/64/cmake-build-debug /home/jason/Github/Lintcode/64/cmake-build-debug /home/jason/Github/Lintcode/64/cmake-build-debug/CMakeFiles/64.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/64.dir/depend
