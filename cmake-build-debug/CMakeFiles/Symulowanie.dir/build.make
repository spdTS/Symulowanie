# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /private/var/folders/4y/86x768r923dcnlk353mp6wt40000gp/T/AppTranslocation/78D16617-E9BB-4DCE-BACD-36293C81DD9A/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/4y/86x768r923dcnlk353mp6wt40000gp/T/AppTranslocation/78D16617-E9BB-4DCE-BACD-36293C81DD9A/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/seba/Desktop/Programowanie/SPD/Symulowanie

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/seba/Desktop/Programowanie/SPD/Symulowanie/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Symulowanie.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Symulowanie.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Symulowanie.dir/flags.make

CMakeFiles/Symulowanie.dir/main.cpp.o: CMakeFiles/Symulowanie.dir/flags.make
CMakeFiles/Symulowanie.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/seba/Desktop/Programowanie/SPD/Symulowanie/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Symulowanie.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Symulowanie.dir/main.cpp.o -c /Users/seba/Desktop/Programowanie/SPD/Symulowanie/main.cpp

CMakeFiles/Symulowanie.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Symulowanie.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/seba/Desktop/Programowanie/SPD/Symulowanie/main.cpp > CMakeFiles/Symulowanie.dir/main.cpp.i

CMakeFiles/Symulowanie.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Symulowanie.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/seba/Desktop/Programowanie/SPD/Symulowanie/main.cpp -o CMakeFiles/Symulowanie.dir/main.cpp.s

# Object files for target Symulowanie
Symulowanie_OBJECTS = \
"CMakeFiles/Symulowanie.dir/main.cpp.o"

# External object files for target Symulowanie
Symulowanie_EXTERNAL_OBJECTS =

Symulowanie: CMakeFiles/Symulowanie.dir/main.cpp.o
Symulowanie: CMakeFiles/Symulowanie.dir/build.make
Symulowanie: CMakeFiles/Symulowanie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/seba/Desktop/Programowanie/SPD/Symulowanie/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Symulowanie"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Symulowanie.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Symulowanie.dir/build: Symulowanie

.PHONY : CMakeFiles/Symulowanie.dir/build

CMakeFiles/Symulowanie.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Symulowanie.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Symulowanie.dir/clean

CMakeFiles/Symulowanie.dir/depend:
	cd /Users/seba/Desktop/Programowanie/SPD/Symulowanie/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/seba/Desktop/Programowanie/SPD/Symulowanie /Users/seba/Desktop/Programowanie/SPD/Symulowanie /Users/seba/Desktop/Programowanie/SPD/Symulowanie/cmake-build-debug /Users/seba/Desktop/Programowanie/SPD/Symulowanie/cmake-build-debug /Users/seba/Desktop/Programowanie/SPD/Symulowanie/cmake-build-debug/CMakeFiles/Symulowanie.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Symulowanie.dir/depend

