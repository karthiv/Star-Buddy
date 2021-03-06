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
include plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/depend.make

# Include the progress variables for this target.
include plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/flags.make

plugins/MeteorShowers/src/qrc_MeteorShower.cpp: ../../plugins/MeteorShowers/resources/showers.json
plugins/MeteorShowers/src/qrc_MeteorShower.cpp: ../../plugins/MeteorShowers/resources/radiant.png
plugins/MeteorShowers/src/qrc_MeteorShower.cpp: ../../plugins/MeteorShowers/resources/btMS-off.png
plugins/MeteorShowers/src/qrc_MeteorShower.cpp: ../../plugins/MeteorShowers/resources/btMS-on.png
plugins/MeteorShowers/src/qrc_MeteorShower.cpp: ../../plugins/MeteorShowers/resources/radiantSetting.png
plugins/MeteorShowers/src/qrc_MeteorShower.cpp: plugins/MeteorShowers/src/__/resources/MeteorShower.qrc.depends
plugins/MeteorShowers/src/qrc_MeteorShower.cpp: ../../plugins/MeteorShowers/resources/MeteorShower.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_MeteorShower.cpp"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/lib/x86_64-linux-gnu/qt5/bin/rcc -name MeteorShower -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/qrc_MeteorShower.cpp /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/resources/MeteorShower.qrc

plugins/MeteorShowers/src/ui_meteorShowerDialog.h: ../../plugins/MeteorShowers/src/gui/meteorShowerDialog.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_meteorShowerDialog.h"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/ui_meteorShowerDialog.h /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/gui/meteorShowerDialog.ui

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/flags.make
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o: ../../plugins/MeteorShowers/src/MeteorShower.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/MeteorShower.cpp

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/MeteorShower.cpp > CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.i

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/MeteorShower.cpp -o CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.s

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o.requires:
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o.requires

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o.provides: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o.requires
	$(MAKE) -f plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/build.make plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o.provides.build
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o.provides

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o.provides.build: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/flags.make
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o: ../../plugins/MeteorShowers/src/MeteorShowers.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/MeteorShowers.cpp

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/MeteorShowers.cpp > CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.i

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/MeteorShowers.cpp -o CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.s

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o.requires:
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o.requires

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o.provides: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o.requires
	$(MAKE) -f plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/build.make plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o.provides.build
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o.provides

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o.provides.build: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/flags.make
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o: ../../plugins/MeteorShowers/src/MeteorStream.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/MeteorStream.cpp

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/MeteorStream.cpp > CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.i

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/MeteorStream.cpp -o CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.s

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o.requires:
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o.requires

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o.provides: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o.requires
	$(MAKE) -f plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/build.make plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o.provides.build
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o.provides

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o.provides.build: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/flags.make
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o: ../../plugins/MeteorShowers/src/gui/MeteorShowerDialog.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/gui/MeteorShowerDialog.cpp

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/gui/MeteorShowerDialog.cpp > CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.i

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src/gui/MeteorShowerDialog.cpp -o CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.s

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o.requires:
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o.requires

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o.provides: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o.requires
	$(MAKE) -f plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/build.make plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o.provides.build
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o.provides

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o.provides.build: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/flags.make
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o: plugins/MeteorShowers/src/qrc_MeteorShower.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/qrc_MeteorShower.cpp

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/qrc_MeteorShower.cpp > CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.i

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/qrc_MeteorShower.cpp -o CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.s

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o.requires:
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o.requires

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o.provides: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o.requires
	$(MAKE) -f plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/build.make plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o.provides.build
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o.provides

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o.provides.build: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/flags.make
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o: plugins/MeteorShowers/src/MeteorShowers-static_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/MeteorShowers-static_automoc.cpp

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/MeteorShowers-static_automoc.cpp > CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.i

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/MeteorShowers-static_automoc.cpp -o CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.s

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o.requires:
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o.requires

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o.provides: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o.requires
	$(MAKE) -f plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/build.make plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o.provides.build
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o.provides

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o.provides.build: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o

# Object files for target MeteorShowers-static
MeteorShowers__static_OBJECTS = \
"CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o" \
"CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o" \
"CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o" \
"CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o" \
"CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o" \
"CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o"

# External object files for target MeteorShowers-static
MeteorShowers__static_EXTERNAL_OBJECTS =

plugins/MeteorShowers/src/libMeteorShowers.a: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o
plugins/MeteorShowers/src/libMeteorShowers.a: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o
plugins/MeteorShowers/src/libMeteorShowers.a: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o
plugins/MeteorShowers/src/libMeteorShowers.a: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o
plugins/MeteorShowers/src/libMeteorShowers.a: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o
plugins/MeteorShowers/src/libMeteorShowers.a: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o
plugins/MeteorShowers/src/libMeteorShowers.a: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/build.make
plugins/MeteorShowers/src/libMeteorShowers.a: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libMeteorShowers.a"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && $(CMAKE_COMMAND) -P CMakeFiles/MeteorShowers-static.dir/cmake_clean_target.cmake
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MeteorShowers-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/build: plugins/MeteorShowers/src/libMeteorShowers.a
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/build

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/requires: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShower.cpp.o.requires
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/requires: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers.cpp.o.requires
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/requires: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorStream.cpp.o.requires
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/requires: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/gui/MeteorShowerDialog.cpp.o.requires
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/requires: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/qrc_MeteorShower.cpp.o.requires
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/requires: plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/MeteorShowers-static_automoc.cpp.o.requires
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/requires

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/clean:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src && $(CMAKE_COMMAND) -P CMakeFiles/MeteorShowers-static.dir/cmake_clean.cmake
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/clean

plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/depend: plugins/MeteorShowers/src/qrc_MeteorShower.cpp
plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/depend: plugins/MeteorShowers/src/ui_meteorShowerDialog.h
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdac/Downloads/stellarium-0.13.2 /home/cdac/Downloads/stellarium-0.13.2/plugins/MeteorShowers/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/MeteorShowers/src/CMakeFiles/MeteorShowers-static.dir/depend

