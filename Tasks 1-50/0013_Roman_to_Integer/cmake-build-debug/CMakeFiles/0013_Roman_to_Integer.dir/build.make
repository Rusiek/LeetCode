# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/0013_Roman_to_Integer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/0013_Roman_to_Integer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0013_Roman_to_Integer.dir/flags.make

CMakeFiles/0013_Roman_to_Integer.dir/main.cpp.obj: CMakeFiles/0013_Roman_to_Integer.dir/flags.make
CMakeFiles/0013_Roman_to_Integer.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0013_Roman_to_Integer.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\0013_Roman_to_Integer.dir\main.cpp.obj -c "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer\main.cpp"

CMakeFiles/0013_Roman_to_Integer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0013_Roman_to_Integer.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer\main.cpp" > CMakeFiles\0013_Roman_to_Integer.dir\main.cpp.i

CMakeFiles/0013_Roman_to_Integer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0013_Roman_to_Integer.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer\main.cpp" -o CMakeFiles\0013_Roman_to_Integer.dir\main.cpp.s

# Object files for target 0013_Roman_to_Integer
0013_Roman_to_Integer_OBJECTS = \
"CMakeFiles/0013_Roman_to_Integer.dir/main.cpp.obj"

# External object files for target 0013_Roman_to_Integer
0013_Roman_to_Integer_EXTERNAL_OBJECTS =

0013_Roman_to_Integer.exe: CMakeFiles/0013_Roman_to_Integer.dir/main.cpp.obj
0013_Roman_to_Integer.exe: CMakeFiles/0013_Roman_to_Integer.dir/build.make
0013_Roman_to_Integer.exe: CMakeFiles/0013_Roman_to_Integer.dir/linklibs.rsp
0013_Roman_to_Integer.exe: CMakeFiles/0013_Roman_to_Integer.dir/objects1.rsp
0013_Roman_to_Integer.exe: CMakeFiles/0013_Roman_to_Integer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0013_Roman_to_Integer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0013_Roman_to_Integer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0013_Roman_to_Integer.dir/build: 0013_Roman_to_Integer.exe

.PHONY : CMakeFiles/0013_Roman_to_Integer.dir/build

CMakeFiles/0013_Roman_to_Integer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0013_Roman_to_Integer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0013_Roman_to_Integer.dir/clean

CMakeFiles/0013_Roman_to_Integer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer" "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer" "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer\cmake-build-debug" "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer\cmake-build-debug" "D:\LeetCode\Tasks 1-50\0013_Roman_to_Integer\cmake-build-debug\CMakeFiles\0013_Roman_to_Integer.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/0013_Roman_to_Integer.dir/depend

