# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jakub/zad-5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jakub/zad-5

# Include any dependencies generated for this target.
include CMakeFiles/project_name.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project_name.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project_name.dir/flags.make

CMakeFiles/project_name.dir/src/Bottom.cpp.o: CMakeFiles/project_name.dir/flags.make
CMakeFiles/project_name.dir/src/Bottom.cpp.o: src/Bottom.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakub/zad-5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project_name.dir/src/Bottom.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_name.dir/src/Bottom.cpp.o -c /home/jakub/zad-5/src/Bottom.cpp

CMakeFiles/project_name.dir/src/Bottom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_name.dir/src/Bottom.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakub/zad-5/src/Bottom.cpp > CMakeFiles/project_name.dir/src/Bottom.cpp.i

CMakeFiles/project_name.dir/src/Bottom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_name.dir/src/Bottom.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakub/zad-5/src/Bottom.cpp -o CMakeFiles/project_name.dir/src/Bottom.cpp.s

CMakeFiles/project_name.dir/src/Bottom.cpp.o.requires:

.PHONY : CMakeFiles/project_name.dir/src/Bottom.cpp.o.requires

CMakeFiles/project_name.dir/src/Bottom.cpp.o.provides: CMakeFiles/project_name.dir/src/Bottom.cpp.o.requires
	$(MAKE) -f CMakeFiles/project_name.dir/build.make CMakeFiles/project_name.dir/src/Bottom.cpp.o.provides.build
.PHONY : CMakeFiles/project_name.dir/src/Bottom.cpp.o.provides

CMakeFiles/project_name.dir/src/Bottom.cpp.o.provides.build: CMakeFiles/project_name.dir/src/Bottom.cpp.o


CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o: CMakeFiles/project_name.dir/flags.make
CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o: src/RotationMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakub/zad-5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o -c /home/jakub/zad-5/src/RotationMatrix.cpp

CMakeFiles/project_name.dir/src/RotationMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_name.dir/src/RotationMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakub/zad-5/src/RotationMatrix.cpp > CMakeFiles/project_name.dir/src/RotationMatrix.cpp.i

CMakeFiles/project_name.dir/src/RotationMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_name.dir/src/RotationMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakub/zad-5/src/RotationMatrix.cpp -o CMakeFiles/project_name.dir/src/RotationMatrix.cpp.s

CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o.requires:

.PHONY : CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o.requires

CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o.provides: CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/project_name.dir/build.make CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o.provides.build
.PHONY : CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o.provides

CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o.provides.build: CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o


CMakeFiles/project_name.dir/src/Surface.cpp.o: CMakeFiles/project_name.dir/flags.make
CMakeFiles/project_name.dir/src/Surface.cpp.o: src/Surface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakub/zad-5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project_name.dir/src/Surface.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_name.dir/src/Surface.cpp.o -c /home/jakub/zad-5/src/Surface.cpp

CMakeFiles/project_name.dir/src/Surface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_name.dir/src/Surface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakub/zad-5/src/Surface.cpp > CMakeFiles/project_name.dir/src/Surface.cpp.i

CMakeFiles/project_name.dir/src/Surface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_name.dir/src/Surface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakub/zad-5/src/Surface.cpp -o CMakeFiles/project_name.dir/src/Surface.cpp.s

CMakeFiles/project_name.dir/src/Surface.cpp.o.requires:

.PHONY : CMakeFiles/project_name.dir/src/Surface.cpp.o.requires

CMakeFiles/project_name.dir/src/Surface.cpp.o.provides: CMakeFiles/project_name.dir/src/Surface.cpp.o.requires
	$(MAKE) -f CMakeFiles/project_name.dir/build.make CMakeFiles/project_name.dir/src/Surface.cpp.o.provides.build
.PHONY : CMakeFiles/project_name.dir/src/Surface.cpp.o.provides

CMakeFiles/project_name.dir/src/Surface.cpp.o.provides.build: CMakeFiles/project_name.dir/src/Surface.cpp.o


CMakeFiles/project_name.dir/src/Water.cpp.o: CMakeFiles/project_name.dir/flags.make
CMakeFiles/project_name.dir/src/Water.cpp.o: src/Water.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakub/zad-5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project_name.dir/src/Water.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_name.dir/src/Water.cpp.o -c /home/jakub/zad-5/src/Water.cpp

CMakeFiles/project_name.dir/src/Water.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_name.dir/src/Water.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakub/zad-5/src/Water.cpp > CMakeFiles/project_name.dir/src/Water.cpp.i

CMakeFiles/project_name.dir/src/Water.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_name.dir/src/Water.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakub/zad-5/src/Water.cpp -o CMakeFiles/project_name.dir/src/Water.cpp.s

CMakeFiles/project_name.dir/src/Water.cpp.o.requires:

.PHONY : CMakeFiles/project_name.dir/src/Water.cpp.o.requires

CMakeFiles/project_name.dir/src/Water.cpp.o.provides: CMakeFiles/project_name.dir/src/Water.cpp.o.requires
	$(MAKE) -f CMakeFiles/project_name.dir/build.make CMakeFiles/project_name.dir/src/Water.cpp.o.provides.build
.PHONY : CMakeFiles/project_name.dir/src/Water.cpp.o.provides

CMakeFiles/project_name.dir/src/Water.cpp.o.provides.build: CMakeFiles/project_name.dir/src/Water.cpp.o


CMakeFiles/project_name.dir/src/cuboid.cpp.o: CMakeFiles/project_name.dir/flags.make
CMakeFiles/project_name.dir/src/cuboid.cpp.o: src/cuboid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakub/zad-5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project_name.dir/src/cuboid.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_name.dir/src/cuboid.cpp.o -c /home/jakub/zad-5/src/cuboid.cpp

CMakeFiles/project_name.dir/src/cuboid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_name.dir/src/cuboid.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakub/zad-5/src/cuboid.cpp > CMakeFiles/project_name.dir/src/cuboid.cpp.i

CMakeFiles/project_name.dir/src/cuboid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_name.dir/src/cuboid.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakub/zad-5/src/cuboid.cpp -o CMakeFiles/project_name.dir/src/cuboid.cpp.s

CMakeFiles/project_name.dir/src/cuboid.cpp.o.requires:

.PHONY : CMakeFiles/project_name.dir/src/cuboid.cpp.o.requires

CMakeFiles/project_name.dir/src/cuboid.cpp.o.provides: CMakeFiles/project_name.dir/src/cuboid.cpp.o.requires
	$(MAKE) -f CMakeFiles/project_name.dir/build.make CMakeFiles/project_name.dir/src/cuboid.cpp.o.provides.build
.PHONY : CMakeFiles/project_name.dir/src/cuboid.cpp.o.provides

CMakeFiles/project_name.dir/src/cuboid.cpp.o.provides.build: CMakeFiles/project_name.dir/src/cuboid.cpp.o


CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o: CMakeFiles/project_name.dir/flags.make
CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o: src/gnuplot_link.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakub/zad-5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o -c /home/jakub/zad-5/src/gnuplot_link.cpp

CMakeFiles/project_name.dir/src/gnuplot_link.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_name.dir/src/gnuplot_link.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakub/zad-5/src/gnuplot_link.cpp > CMakeFiles/project_name.dir/src/gnuplot_link.cpp.i

CMakeFiles/project_name.dir/src/gnuplot_link.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_name.dir/src/gnuplot_link.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakub/zad-5/src/gnuplot_link.cpp -o CMakeFiles/project_name.dir/src/gnuplot_link.cpp.s

CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o.requires:

.PHONY : CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o.requires

CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o.provides: CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o.requires
	$(MAKE) -f CMakeFiles/project_name.dir/build.make CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o.provides.build
.PHONY : CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o.provides

CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o.provides.build: CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o


CMakeFiles/project_name.dir/src/main.cpp.o: CMakeFiles/project_name.dir/flags.make
CMakeFiles/project_name.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jakub/zad-5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/project_name.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_name.dir/src/main.cpp.o -c /home/jakub/zad-5/src/main.cpp

CMakeFiles/project_name.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_name.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakub/zad-5/src/main.cpp > CMakeFiles/project_name.dir/src/main.cpp.i

CMakeFiles/project_name.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_name.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakub/zad-5/src/main.cpp -o CMakeFiles/project_name.dir/src/main.cpp.s

CMakeFiles/project_name.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/project_name.dir/src/main.cpp.o.requires

CMakeFiles/project_name.dir/src/main.cpp.o.provides: CMakeFiles/project_name.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/project_name.dir/build.make CMakeFiles/project_name.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/project_name.dir/src/main.cpp.o.provides

CMakeFiles/project_name.dir/src/main.cpp.o.provides.build: CMakeFiles/project_name.dir/src/main.cpp.o


# Object files for target project_name
project_name_OBJECTS = \
"CMakeFiles/project_name.dir/src/Bottom.cpp.o" \
"CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o" \
"CMakeFiles/project_name.dir/src/Surface.cpp.o" \
"CMakeFiles/project_name.dir/src/Water.cpp.o" \
"CMakeFiles/project_name.dir/src/cuboid.cpp.o" \
"CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o" \
"CMakeFiles/project_name.dir/src/main.cpp.o"

# External object files for target project_name
project_name_EXTERNAL_OBJECTS =

project_name: CMakeFiles/project_name.dir/src/Bottom.cpp.o
project_name: CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o
project_name: CMakeFiles/project_name.dir/src/Surface.cpp.o
project_name: CMakeFiles/project_name.dir/src/Water.cpp.o
project_name: CMakeFiles/project_name.dir/src/cuboid.cpp.o
project_name: CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o
project_name: CMakeFiles/project_name.dir/src/main.cpp.o
project_name: CMakeFiles/project_name.dir/build.make
project_name: CMakeFiles/project_name.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jakub/zad-5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable project_name"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project_name.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project_name.dir/build: project_name

.PHONY : CMakeFiles/project_name.dir/build

CMakeFiles/project_name.dir/requires: CMakeFiles/project_name.dir/src/Bottom.cpp.o.requires
CMakeFiles/project_name.dir/requires: CMakeFiles/project_name.dir/src/RotationMatrix.cpp.o.requires
CMakeFiles/project_name.dir/requires: CMakeFiles/project_name.dir/src/Surface.cpp.o.requires
CMakeFiles/project_name.dir/requires: CMakeFiles/project_name.dir/src/Water.cpp.o.requires
CMakeFiles/project_name.dir/requires: CMakeFiles/project_name.dir/src/cuboid.cpp.o.requires
CMakeFiles/project_name.dir/requires: CMakeFiles/project_name.dir/src/gnuplot_link.cpp.o.requires
CMakeFiles/project_name.dir/requires: CMakeFiles/project_name.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/project_name.dir/requires

CMakeFiles/project_name.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project_name.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project_name.dir/clean

CMakeFiles/project_name.dir/depend:
	cd /home/jakub/zad-5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jakub/zad-5 /home/jakub/zad-5 /home/jakub/zad-5 /home/jakub/zad-5 /home/jakub/zad-5/CMakeFiles/project_name.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project_name.dir/depend

