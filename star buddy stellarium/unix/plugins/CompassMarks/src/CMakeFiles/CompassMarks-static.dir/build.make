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

# Include any dependencies generated for this target.
include plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/depend.make

# Include the progress variables for this target.
include plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/flags.make

plugins/CompassMarks/src/qrc_CompassMarks.cpp: ../../plugins/CompassMarks/bt_compass_on.png
plugins/CompassMarks/src/qrc_CompassMarks.cpp: ../../plugins/CompassMarks/bt_compass_off.png
plugins/CompassMarks/src/qrc_CompassMarks.cpp: plugins/CompassMarks/src/__/CompassMarks.qrc.depends
plugins/CompassMarks/src/qrc_CompassMarks.cpp: ../../plugins/CompassMarks/CompassMarks.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_CompassMarks.cpp"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/lib/x86_64-linux-gnu/qt5/bin/rcc -name CompassMarks -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src/qrc_CompassMarks.cpp /home/cdac/Downloads/stellarium-0.13.2/plugins/CompassMarks/CompassMarks.qrc

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/flags.make
plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o: ../../plugins/CompassMarks/src/CompassMarks.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/CompassMarks/src/CompassMarks.cpp

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/CompassMarks/src/CompassMarks.cpp > CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.i

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/CompassMarks/src/CompassMarks.cpp -o CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.s

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o.requires:
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o.requires

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o.provides: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o.requires
	$(MAKE) -f plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/build.make plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o.provides.build
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o.provides

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o.provides.build: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/flags.make
plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o: plugins/CompassMarks/src/qrc_CompassMarks.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src/qrc_CompassMarks.cpp

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src/qrc_CompassMarks.cpp > CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.i

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src/qrc_CompassMarks.cpp -o CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.s

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o.requires:
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o.requires

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o.provides: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o.requires
	$(MAKE) -f plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/build.make plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o.provides.build
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o.provides

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o.provides.build: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/flags.make
plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o: plugins/CompassMarks/src/CompassMarks-static_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src/CompassMarks-static_automoc.cpp

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src/CompassMarks-static_automoc.cpp > CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.i

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src/CompassMarks-static_automoc.cpp -o CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.s

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o.requires:
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o.requires

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o.provides: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o.requires
	$(MAKE) -f plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/build.make plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o.provides.build
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o.provides

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o.provides.build: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o

# Object files for target CompassMarks-static
CompassMarks__static_OBJECTS = \
"CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o" \
"CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o" \
"CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o"

# External object files for target CompassMarks-static
CompassMarks__static_EXTERNAL_OBJECTS =

plugins/CompassMarks/src/libCompassMarks.a: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o
plugins/CompassMarks/src/libCompassMarks.a: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o
plugins/CompassMarks/src/libCompassMarks.a: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o
plugins/CompassMarks/src/libCompassMarks.a: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/build.make
plugins/CompassMarks/src/libCompassMarks.a: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libCompassMarks.a"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && $(CMAKE_COMMAND) -P CMakeFiles/CompassMarks-static.dir/cmake_clean_target.cmake
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CompassMarks-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/build: plugins/CompassMarks/src/libCompassMarks.a
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/build

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/requires: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks.cpp.o.requires
plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/requires: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/qrc_CompassMarks.cpp.o.requires
plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/requires: plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/CompassMarks-static_automoc.cpp.o.requires
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/requires

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/clean:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src && $(CMAKE_COMMAND) -P CMakeFiles/CompassMarks-static.dir/cmake_clean.cmake
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/clean

plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/depend: plugins/CompassMarks/src/qrc_CompassMarks.cpp
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdac/Downloads/stellarium-0.13.2 /home/cdac/Downloads/stellarium-0.13.2/plugins/CompassMarks/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/CompassMarks/src/CMakeFiles/CompassMarks-static.dir/depend

