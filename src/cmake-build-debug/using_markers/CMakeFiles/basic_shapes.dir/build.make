# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/lj/download/clion-2019.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/lj/download/clion-2019.1.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lj/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lj/catkin_ws/src/cmake-build-debug

# Include any dependencies generated for this target.
include using_markers/CMakeFiles/basic_shapes.dir/depend.make

# Include the progress variables for this target.
include using_markers/CMakeFiles/basic_shapes.dir/progress.make

# Include the compile flags for this target's objects.
include using_markers/CMakeFiles/basic_shapes.dir/flags.make

using_markers/CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.o: using_markers/CMakeFiles/basic_shapes.dir/flags.make
using_markers/CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.o: ../using_markers/src/basic_shapes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lj/catkin_ws/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object using_markers/CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.o"
	cd /home/lj/catkin_ws/src/cmake-build-debug/using_markers && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.o -c /home/lj/catkin_ws/src/using_markers/src/basic_shapes.cpp

using_markers/CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.i"
	cd /home/lj/catkin_ws/src/cmake-build-debug/using_markers && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lj/catkin_ws/src/using_markers/src/basic_shapes.cpp > CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.i

using_markers/CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.s"
	cd /home/lj/catkin_ws/src/cmake-build-debug/using_markers && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lj/catkin_ws/src/using_markers/src/basic_shapes.cpp -o CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.s

# Object files for target basic_shapes
basic_shapes_OBJECTS = \
"CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.o"

# External object files for target basic_shapes
basic_shapes_EXTERNAL_OBJECTS =

devel/lib/using_markers/basic_shapes: using_markers/CMakeFiles/basic_shapes.dir/src/basic_shapes.cpp.o
devel/lib/using_markers/basic_shapes: using_markers/CMakeFiles/basic_shapes.dir/build.make
devel/lib/using_markers/basic_shapes: /opt/ros/kinetic/lib/libroscpp.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libboost_signals.so
devel/lib/using_markers/basic_shapes: /opt/ros/kinetic/lib/librosconsole.so
devel/lib/using_markers/basic_shapes: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
devel/lib/using_markers/basic_shapes: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libboost_regex.so
devel/lib/using_markers/basic_shapes: /opt/ros/kinetic/lib/libxmlrpcpp.so
devel/lib/using_markers/basic_shapes: /opt/ros/kinetic/lib/libroscpp_serialization.so
devel/lib/using_markers/basic_shapes: /opt/ros/kinetic/lib/librostime.so
devel/lib/using_markers/basic_shapes: /opt/ros/kinetic/lib/libcpp_common.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libboost_system.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libboost_thread.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libpthread.so
devel/lib/using_markers/basic_shapes: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
devel/lib/using_markers/basic_shapes: using_markers/CMakeFiles/basic_shapes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lj/catkin_ws/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../devel/lib/using_markers/basic_shapes"
	cd /home/lj/catkin_ws/src/cmake-build-debug/using_markers && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/basic_shapes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
using_markers/CMakeFiles/basic_shapes.dir/build: devel/lib/using_markers/basic_shapes

.PHONY : using_markers/CMakeFiles/basic_shapes.dir/build

using_markers/CMakeFiles/basic_shapes.dir/clean:
	cd /home/lj/catkin_ws/src/cmake-build-debug/using_markers && $(CMAKE_COMMAND) -P CMakeFiles/basic_shapes.dir/cmake_clean.cmake
.PHONY : using_markers/CMakeFiles/basic_shapes.dir/clean

using_markers/CMakeFiles/basic_shapes.dir/depend:
	cd /home/lj/catkin_ws/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lj/catkin_ws/src /home/lj/catkin_ws/src/using_markers /home/lj/catkin_ws/src/cmake-build-debug /home/lj/catkin_ws/src/cmake-build-debug/using_markers /home/lj/catkin_ws/src/cmake-build-debug/using_markers/CMakeFiles/basic_shapes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : using_markers/CMakeFiles/basic_shapes.dir/depend
