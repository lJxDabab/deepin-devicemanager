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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/deepin-devicemanager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/build-deepin-devicemanager-unknown-Default

# Utility rule file for deepin-devicemanager_autogen.

# Include the progress variables for this target.
include CMakeFiles/deepin-devicemanager_autogen.dir/progress.make

CMakeFiles/deepin-devicemanager_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/build-deepin-devicemanager-unknown-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target deepin-devicemanager"
	/usr/bin/cmake -E cmake_autogen /data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/build-deepin-devicemanager-unknown-Default/CMakeFiles/deepin-devicemanager_autogen.dir/AutogenInfo.cmake ""

deepin-devicemanager_autogen: CMakeFiles/deepin-devicemanager_autogen
deepin-devicemanager_autogen: CMakeFiles/deepin-devicemanager_autogen.dir/build.make

.PHONY : deepin-devicemanager_autogen

# Rule to build all files generated by this target.
CMakeFiles/deepin-devicemanager_autogen.dir/build: deepin-devicemanager_autogen

.PHONY : CMakeFiles/deepin-devicemanager_autogen.dir/build

CMakeFiles/deepin-devicemanager_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/deepin-devicemanager_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/deepin-devicemanager_autogen.dir/clean

CMakeFiles/deepin-devicemanager_autogen.dir/depend:
	cd /data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/build-deepin-devicemanager-unknown-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/deepin-devicemanager /data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/deepin-devicemanager /data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/build-deepin-devicemanager-unknown-Default /data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/build-deepin-devicemanager-unknown-Default /data/home/liujun/Work/Project/DeviceManager/sp2/dde_devicemanager/build-deepin-devicemanager-unknown-Default/CMakeFiles/deepin-devicemanager_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/deepin-devicemanager_autogen.dir/depend
