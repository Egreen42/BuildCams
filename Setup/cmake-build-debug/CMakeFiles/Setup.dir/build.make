# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\ethan\Desktop\Pi's keep breaking\Setup"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Setup.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Setup.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Setup.dir/flags.make

CMakeFiles/Setup.dir/main.cpp.obj: CMakeFiles/Setup.dir/flags.make
CMakeFiles/Setup.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ethan\Desktop\Pi's keep breaking\Setup\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Setup.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Setup.dir\main.cpp.obj -c "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\main.cpp"

CMakeFiles/Setup.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Setup.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\main.cpp" > CMakeFiles\Setup.dir\main.cpp.i

CMakeFiles/Setup.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Setup.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\main.cpp" -o CMakeFiles\Setup.dir\main.cpp.s

CMakeFiles/Setup.dir/BuildCams.cpp.obj: CMakeFiles/Setup.dir/flags.make
CMakeFiles/Setup.dir/BuildCams.cpp.obj: ../BuildCams.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ethan\Desktop\Pi's keep breaking\Setup\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Setup.dir/BuildCams.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Setup.dir\BuildCams.cpp.obj -c "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\BuildCams.cpp"

CMakeFiles/Setup.dir/BuildCams.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Setup.dir/BuildCams.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\BuildCams.cpp" > CMakeFiles\Setup.dir\BuildCams.cpp.i

CMakeFiles/Setup.dir/BuildCams.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Setup.dir/BuildCams.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\BuildCams.cpp" -o CMakeFiles\Setup.dir\BuildCams.cpp.s

# Object files for target Setup
Setup_OBJECTS = \
"CMakeFiles/Setup.dir/main.cpp.obj" \
"CMakeFiles/Setup.dir/BuildCams.cpp.obj"

# External object files for target Setup
Setup_EXTERNAL_OBJECTS =

Setup.exe: CMakeFiles/Setup.dir/main.cpp.obj
Setup.exe: CMakeFiles/Setup.dir/BuildCams.cpp.obj
Setup.exe: CMakeFiles/Setup.dir/build.make
Setup.exe: CMakeFiles/Setup.dir/linklibs.rsp
Setup.exe: CMakeFiles/Setup.dir/objects1.rsp
Setup.exe: CMakeFiles/Setup.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ethan\Desktop\Pi's keep breaking\Setup\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Setup.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Setup.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Setup.dir/build: Setup.exe

.PHONY : CMakeFiles/Setup.dir/build

CMakeFiles/Setup.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Setup.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Setup.dir/clean

CMakeFiles/Setup.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ethan\Desktop\Pi's keep breaking\Setup" "C:\Users\ethan\Desktop\Pi's keep breaking\Setup" "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\cmake-build-debug" "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\cmake-build-debug" "C:\Users\ethan\Desktop\Pi's keep breaking\Setup\cmake-build-debug\CMakeFiles\Setup.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Setup.dir/depend

