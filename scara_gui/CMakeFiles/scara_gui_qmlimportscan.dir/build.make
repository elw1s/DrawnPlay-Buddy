# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ardakilic/Desktop/CSE396/GUI/scara_gui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ardakilic/Desktop/CSE396/GUI/scara_gui

# Utility rule file for scara_gui_qmlimportscan.

# Include any custom commands dependencies for this target.
include CMakeFiles/scara_gui_qmlimportscan.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/scara_gui_qmlimportscan.dir/progress.make

CMakeFiles/scara_gui_qmlimportscan: .qt_plugins/Qt6_QmlPlugins_Imports_scara_gui.cmake

.qt_plugins/Qt6_QmlPlugins_Imports_scara_gui.cmake: /home/ardakilic/Qt/6.6.1/gcc_64/libexec/qmlimportscanner
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ardakilic/Desktop/CSE396/GUI/scara_gui/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running qmlimportscanner for scara_gui"
	/home/ardakilic/Qt/6.6.1/gcc_64/libexec/qmlimportscanner @/home/ardakilic/Desktop/CSE396/GUI/scara_gui/.qt_plugins/Qt6_QmlPlugins_Imports_scara_gui.rsp

scara_gui_qmlimportscan: .qt_plugins/Qt6_QmlPlugins_Imports_scara_gui.cmake
scara_gui_qmlimportscan: CMakeFiles/scara_gui_qmlimportscan
scara_gui_qmlimportscan: CMakeFiles/scara_gui_qmlimportscan.dir/build.make
.PHONY : scara_gui_qmlimportscan

# Rule to build all files generated by this target.
CMakeFiles/scara_gui_qmlimportscan.dir/build: scara_gui_qmlimportscan
.PHONY : CMakeFiles/scara_gui_qmlimportscan.dir/build

CMakeFiles/scara_gui_qmlimportscan.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/scara_gui_qmlimportscan.dir/cmake_clean.cmake
.PHONY : CMakeFiles/scara_gui_qmlimportscan.dir/clean

CMakeFiles/scara_gui_qmlimportscan.dir/depend:
	cd /home/ardakilic/Desktop/CSE396/GUI/scara_gui && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ardakilic/Desktop/CSE396/GUI/scara_gui /home/ardakilic/Desktop/CSE396/GUI/scara_gui /home/ardakilic/Desktop/CSE396/GUI/scara_gui /home/ardakilic/Desktop/CSE396/GUI/scara_gui /home/ardakilic/Desktop/CSE396/GUI/scara_gui/CMakeFiles/scara_gui_qmlimportscan.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/scara_gui_qmlimportscan.dir/depend
