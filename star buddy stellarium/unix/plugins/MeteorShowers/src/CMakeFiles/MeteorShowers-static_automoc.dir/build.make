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

# Utility rule file for MeteorShowers-static_automoc.

# Include the progress variables for this target.
include plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/progress.make

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Automoc for target MeteorShowers-static"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/cmake -E cmake_automoc /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/ Debug

MeteorShowers-static_automoc: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc
MeteorShowers-static_automoc: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/build.make
.PHONY : MeteorShowers-static_automoc

# Rule to build all files generated by this target.
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/build: MeteorShowers-static_automoc
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/build

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/clean:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && $(CMAKE_COMMAND) -P CMakeFiles/MeteorShowers-static_automoc.dir/cmake_clean.cmake
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/clean

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/depend:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdac/Downloads/stellarium-0.13.2 /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static_automoc.dir/depend
