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
include plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/depend.make

# Include the progress variables for this target.
include plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/flags.make

plugins/Exoplanets/src/qrc_Exoplanets.cpp: ../../plugins/Exoplanets/resources/exoplanets.json
plugins/Exoplanets/src/qrc_Exoplanets.cpp: ../../plugins/Exoplanets/resources/exoplanet.png
plugins/Exoplanets/src/qrc_Exoplanets.cpp: ../../plugins/Exoplanets/resources/btExoplanets-on.png
plugins/Exoplanets/src/qrc_Exoplanets.cpp: ../../plugins/Exoplanets/resources/btExoplanets-off.png
plugins/Exoplanets/src/qrc_Exoplanets.cpp: plugins/Exoplanets/src/__/resources/Exoplanets.qrc.depends
plugins/Exoplanets/src/qrc_Exoplanets.cpp: ../../plugins/Exoplanets/resources/Exoplanets.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_Exoplanets.cpp"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/lib/x86_64-linux-gnu/qt5/bin/rcc -name Exoplanets -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src/qrc_Exoplanets.cpp /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/resources/Exoplanets.qrc

plugins/Exoplanets/src/ui_exoplanetsDialog.h: ../../plugins/Exoplanets/src/gui/exoplanetsDialog.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_exoplanetsDialog.h"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src/ui_exoplanetsDialog.h /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/gui/exoplanetsDialog.ui

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/flags.make
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o: ../../plugins/Exoplanets/src/Exoplanets.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/Exoplanets.cpp

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/Exoplanets.cpp > CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.i

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/Exoplanets.cpp -o CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.s

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o.requires:
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o.requires

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o.provides: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o.requires
	$(MAKE) -f plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/build.make plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o.provides.build
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o.provides

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o.provides.build: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/flags.make
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o: ../../plugins/Exoplanets/src/Exoplanet.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/Exoplanet.cpp

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/Exoplanet.cpp > CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.i

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/Exoplanet.cpp -o CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.s

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o.requires:
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o.requires

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o.provides: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o.requires
	$(MAKE) -f plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/build.make plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o.provides.build
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o.provides

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o.provides.build: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/flags.make
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o: ../../plugins/Exoplanets/src/gui/ExoplanetsDialog.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/gui/ExoplanetsDialog.cpp

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/gui/ExoplanetsDialog.cpp > CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.i

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src/gui/ExoplanetsDialog.cpp -o CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.s

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o.requires:
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o.requires

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o.provides: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o.requires
	$(MAKE) -f plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/build.make plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o.provides.build
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o.provides

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o.provides.build: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/flags.make
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o: plugins/Exoplanets/src/qrc_Exoplanets.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src/qrc_Exoplanets.cpp

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src/qrc_Exoplanets.cpp > CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.i

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src/qrc_Exoplanets.cpp -o CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.s

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o.requires:
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o.requires

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o.provides: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o.requires
	$(MAKE) -f plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/build.make plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o.provides.build
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o.provides

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o.provides.build: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/flags.make
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o: plugins/Exoplanets/src/Exoplanets-static_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src/Exoplanets-static_automoc.cpp

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src/Exoplanets-static_automoc.cpp > CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.i

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src/Exoplanets-static_automoc.cpp -o CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.s

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o.requires:
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o.requires

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o.provides: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o.requires
	$(MAKE) -f plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/build.make plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o.provides.build
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o.provides

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o.provides.build: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o

# Object files for target Exoplanets-static
Exoplanets__static_OBJECTS = \
"CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o" \
"CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o" \
"CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o" \
"CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o" \
"CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o"

# External object files for target Exoplanets-static
Exoplanets__static_EXTERNAL_OBJECTS =

plugins/Exoplanets/src/libExoplanets.a: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o
plugins/Exoplanets/src/libExoplanets.a: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o
plugins/Exoplanets/src/libExoplanets.a: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o
plugins/Exoplanets/src/libExoplanets.a: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o
plugins/Exoplanets/src/libExoplanets.a: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o
plugins/Exoplanets/src/libExoplanets.a: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/build.make
plugins/Exoplanets/src/libExoplanets.a: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libExoplanets.a"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && $(CMAKE_COMMAND) -P CMakeFiles/Exoplanets-static.dir/cmake_clean_target.cmake
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exoplanets-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/build: plugins/Exoplanets/src/libExoplanets.a
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/build

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/requires: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets.cpp.o.requires
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/requires: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanet.cpp.o.requires
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/requires: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/gui/ExoplanetsDialog.cpp.o.requires
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/requires: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/qrc_Exoplanets.cpp.o.requires
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/requires: plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/Exoplanets-static_automoc.cpp.o.requires
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/requires

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/clean:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src && $(CMAKE_COMMAND) -P CMakeFiles/Exoplanets-static.dir/cmake_clean.cmake
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/clean

plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/depend: plugins/Exoplanets/src/qrc_Exoplanets.cpp
plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/depend: plugins/Exoplanets/src/ui_exoplanetsDialog.h
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdac/Downloads/stellarium-0.13.2 /home/cdac/Downloads/stellarium-0.13.2/plugins/Exoplanets/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/Exoplanets/src/CMakeFiles/Exoplanets-static.dir/depend
