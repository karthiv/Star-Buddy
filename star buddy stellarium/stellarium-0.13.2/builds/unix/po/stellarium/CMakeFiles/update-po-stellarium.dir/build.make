# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/cdac/Downloads/stellarium-0.13.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cdac/Downloads/stellarium-0.13.2/builds/unix

# Utility rule file for update-po-stellarium.

# Include the progress variables for this target.
include po/stellarium/CMakeFiles/update-po-stellarium.dir/progress.make

po/stellarium/CMakeFiles/update-po-stellarium:

update-po-stellarium: po/stellarium/CMakeFiles/update-po-stellarium
update-po-stellarium: po/stellarium/CMakeFiles/update-po-stellarium.dir/build.make
.PHONY : update-po-stellarium

# Rule to build all files generated by this target.
po/stellarium/CMakeFiles/update-po-stellarium.dir/build: update-po-stellarium
.PHONY : po/stellarium/CMakeFiles/update-po-stellarium.dir/build

po/stellarium/CMakeFiles/update-po-stellarium.dir/clean:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/po/stellarium && $(CMAKE_COMMAND) -P CMakeFiles/update-po-stellarium.dir/cmake_clean.cmake
.PHONY : po/stellarium/CMakeFiles/update-po-stellarium.dir/clean

po/stellarium/CMakeFiles/update-po-stellarium.dir/depend:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdac/Downloads/stellarium-0.13.2 /home/cdac/Downloads/stellarium-0.13.2/po/stellarium /home/cdac/Downloads/stellarium-0.13.2/builds/unix /home/cdac/Downloads/stellarium-0.13.2/builds/unix/po/stellarium /home/cdac/Downloads/stellarium-0.13.2/builds/unix/po/stellarium/CMakeFiles/update-po-stellarium.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : po/stellarium/CMakeFiles/update-po-stellarium.dir/depend
