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

# Utility rule file for translations.

# Include the progress variables for this target.
include po/CMakeFiles/translations.dir/progress.make

po/CMakeFiles/translations:

translations: po/CMakeFiles/translations
translations: po/CMakeFiles/translations.dir/build.make
.PHONY : translations

# Rule to build all files generated by this target.
po/CMakeFiles/translations.dir/build: translations
.PHONY : po/CMakeFiles/translations.dir/build

po/CMakeFiles/translations.dir/clean:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/po && $(CMAKE_COMMAND) -P CMakeFiles/translations.dir/cmake_clean.cmake
.PHONY : po/CMakeFiles/translations.dir/clean

po/CMakeFiles/translations.dir/depend:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdac/Downloads/stellarium-0.13.2 /home/cdac/Downloads/stellarium-0.13.2/po /home/cdac/Downloads/stellarium-0.13.2/builds/unix /home/cdac/Downloads/stellarium-0.13.2/builds/unix/po /home/cdac/Downloads/stellarium-0.13.2/builds/unix/po/CMakeFiles/translations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : po/CMakeFiles/translations.dir/depend

