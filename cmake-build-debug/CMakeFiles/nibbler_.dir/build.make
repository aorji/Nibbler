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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aorji/Desktop/nibbler_

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aorji/Desktop/nibbler_/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/nibbler_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nibbler_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nibbler_.dir/flags.make

CMakeFiles/nibbler_.dir/src/Game.cpp.o: CMakeFiles/nibbler_.dir/flags.make
CMakeFiles/nibbler_.dir/src/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aorji/Desktop/nibbler_/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nibbler_.dir/src/Game.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nibbler_.dir/src/Game.cpp.o -c /Users/aorji/Desktop/nibbler_/src/Game.cpp

CMakeFiles/nibbler_.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nibbler_.dir/src/Game.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aorji/Desktop/nibbler_/src/Game.cpp > CMakeFiles/nibbler_.dir/src/Game.cpp.i

CMakeFiles/nibbler_.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nibbler_.dir/src/Game.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aorji/Desktop/nibbler_/src/Game.cpp -o CMakeFiles/nibbler_.dir/src/Game.cpp.s

CMakeFiles/nibbler_.dir/src/Snake.cpp.o: CMakeFiles/nibbler_.dir/flags.make
CMakeFiles/nibbler_.dir/src/Snake.cpp.o: ../src/Snake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aorji/Desktop/nibbler_/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/nibbler_.dir/src/Snake.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nibbler_.dir/src/Snake.cpp.o -c /Users/aorji/Desktop/nibbler_/src/Snake.cpp

CMakeFiles/nibbler_.dir/src/Snake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nibbler_.dir/src/Snake.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aorji/Desktop/nibbler_/src/Snake.cpp > CMakeFiles/nibbler_.dir/src/Snake.cpp.i

CMakeFiles/nibbler_.dir/src/Snake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nibbler_.dir/src/Snake.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aorji/Desktop/nibbler_/src/Snake.cpp -o CMakeFiles/nibbler_.dir/src/Snake.cpp.s

CMakeFiles/nibbler_.dir/src/SFML.cpp.o: CMakeFiles/nibbler_.dir/flags.make
CMakeFiles/nibbler_.dir/src/SFML.cpp.o: ../src/SFML.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aorji/Desktop/nibbler_/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/nibbler_.dir/src/SFML.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nibbler_.dir/src/SFML.cpp.o -c /Users/aorji/Desktop/nibbler_/src/SFML.cpp

CMakeFiles/nibbler_.dir/src/SFML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nibbler_.dir/src/SFML.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aorji/Desktop/nibbler_/src/SFML.cpp > CMakeFiles/nibbler_.dir/src/SFML.cpp.i

CMakeFiles/nibbler_.dir/src/SFML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nibbler_.dir/src/SFML.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aorji/Desktop/nibbler_/src/SFML.cpp -o CMakeFiles/nibbler_.dir/src/SFML.cpp.s

CMakeFiles/nibbler_.dir/main.cpp.o: CMakeFiles/nibbler_.dir/flags.make
CMakeFiles/nibbler_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aorji/Desktop/nibbler_/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/nibbler_.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nibbler_.dir/main.cpp.o -c /Users/aorji/Desktop/nibbler_/main.cpp

CMakeFiles/nibbler_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nibbler_.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aorji/Desktop/nibbler_/main.cpp > CMakeFiles/nibbler_.dir/main.cpp.i

CMakeFiles/nibbler_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nibbler_.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aorji/Desktop/nibbler_/main.cpp -o CMakeFiles/nibbler_.dir/main.cpp.s

# Object files for target nibbler_
nibbler__OBJECTS = \
"CMakeFiles/nibbler_.dir/src/Game.cpp.o" \
"CMakeFiles/nibbler_.dir/src/Snake.cpp.o" \
"CMakeFiles/nibbler_.dir/src/SFML.cpp.o" \
"CMakeFiles/nibbler_.dir/main.cpp.o"

# External object files for target nibbler_
nibbler__EXTERNAL_OBJECTS =

nibbler_: CMakeFiles/nibbler_.dir/src/Game.cpp.o
nibbler_: CMakeFiles/nibbler_.dir/src/Snake.cpp.o
nibbler_: CMakeFiles/nibbler_.dir/src/SFML.cpp.o
nibbler_: CMakeFiles/nibbler_.dir/main.cpp.o
nibbler_: CMakeFiles/nibbler_.dir/build.make
nibbler_: CMakeFiles/nibbler_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aorji/Desktop/nibbler_/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable nibbler_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nibbler_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nibbler_.dir/build: nibbler_

.PHONY : CMakeFiles/nibbler_.dir/build

CMakeFiles/nibbler_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nibbler_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nibbler_.dir/clean

CMakeFiles/nibbler_.dir/depend:
	cd /Users/aorji/Desktop/nibbler_/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aorji/Desktop/nibbler_ /Users/aorji/Desktop/nibbler_ /Users/aorji/Desktop/nibbler_/cmake-build-debug /Users/aorji/Desktop/nibbler_/cmake-build-debug /Users/aorji/Desktop/nibbler_/cmake-build-debug/CMakeFiles/nibbler_.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nibbler_.dir/depend

