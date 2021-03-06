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
include plugins/Observability/src/CMakeFiles/Observability-static.dir/depend.make

# Include the progress variables for this target.
include plugins/Observability/src/CMakeFiles/Observability-static.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/Observability/src/CMakeFiles/Observability-static.dir/flags.make

plugins/Observability/src/qrc_Observability.cpp: ../../plugins/Observability/bt_observab_on.png
plugins/Observability/src/qrc_Observability.cpp: ../../plugins/Observability/bt_observab_off.png
plugins/Observability/src/qrc_Observability.cpp: plugins/Observability/src/__/Observability.qrc.depends
plugins/Observability/src/qrc_Observability.cpp: ../../plugins/Observability/Observability.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_Observability.cpp"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/lib/x86_64-linux-gnu/qt5/bin/rcc -name Observability -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src/qrc_Observability.cpp /home/cdac/Downloads/stellarium-0.13.2/plugins/Observability/Observability.qrc

plugins/Observability/src/ui_ObservabilityDialog.h: ../../plugins/Observability/src/gui/ObservabilityDialog.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_ObservabilityDialog.h"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src/ui_ObservabilityDialog.h /home/cdac/Downloads/stellarium-0.13.2/plugins/Observability/src/gui/ObservabilityDialog.ui

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o: plugins/Observability/src/CMakeFiles/Observability-static.dir/flags.make
plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o: ../../plugins/Observability/src/Observability.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Observability-static.dir/Observability.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Observability/src/Observability.cpp

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Observability-static.dir/Observability.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Observability/src/Observability.cpp > CMakeFiles/Observability-static.dir/Observability.cpp.i

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Observability-static.dir/Observability.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Observability/src/Observability.cpp -o CMakeFiles/Observability-static.dir/Observability.cpp.s

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o.requires:
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o.requires

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o.provides: plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o.requires
	$(MAKE) -f plugins/Observability/src/CMakeFiles/Observability-static.dir/build.make plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o.provides.build
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o.provides

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o.provides.build: plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o

plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o: plugins/Observability/src/CMakeFiles/Observability-static.dir/flags.make
plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o: ../../plugins/Observability/src/gui/ObservabilityDialog.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Observability/src/gui/ObservabilityDialog.cpp

plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Observability/src/gui/ObservabilityDialog.cpp > CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.i

plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Observability/src/gui/ObservabilityDialog.cpp -o CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.s

plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o.requires:
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o.requires

plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o.provides: plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o.requires
	$(MAKE) -f plugins/Observability/src/CMakeFiles/Observability-static.dir/build.make plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o.provides.build
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o.provides

plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o.provides.build: plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o

plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o: plugins/Observability/src/CMakeFiles/Observability-static.dir/flags.make
plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o: plugins/Observability/src/qrc_Observability.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src/qrc_Observability.cpp

plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Observability-static.dir/qrc_Observability.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src/qrc_Observability.cpp > CMakeFiles/Observability-static.dir/qrc_Observability.cpp.i

plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Observability-static.dir/qrc_Observability.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src/qrc_Observability.cpp -o CMakeFiles/Observability-static.dir/qrc_Observability.cpp.s

plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o.requires:
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o.requires

plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o.provides: plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o.requires
	$(MAKE) -f plugins/Observability/src/CMakeFiles/Observability-static.dir/build.make plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o.provides.build
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o.provides

plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o.provides.build: plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o: plugins/Observability/src/CMakeFiles/Observability-static.dir/flags.make
plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o: plugins/Observability/src/Observability-static_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src/Observability-static_automoc.cpp

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src/Observability-static_automoc.cpp > CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.i

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src/Observability-static_automoc.cpp -o CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.s

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o.requires:
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o.requires

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o.provides: plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o.requires
	$(MAKE) -f plugins/Observability/src/CMakeFiles/Observability-static.dir/build.make plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o.provides.build
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o.provides

plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o.provides.build: plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o

# Object files for target Observability-static
Observability__static_OBJECTS = \
"CMakeFiles/Observability-static.dir/Observability.cpp.o" \
"CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o" \
"CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o" \
"CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o"

# External object files for target Observability-static
Observability__static_EXTERNAL_OBJECTS =

plugins/Observability/src/libObservability.a: plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o
plugins/Observability/src/libObservability.a: plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o
plugins/Observability/src/libObservability.a: plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o
plugins/Observability/src/libObservability.a: plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o
plugins/Observability/src/libObservability.a: plugins/Observability/src/CMakeFiles/Observability-static.dir/build.make
plugins/Observability/src/libObservability.a: plugins/Observability/src/CMakeFiles/Observability-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libObservability.a"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && $(CMAKE_COMMAND) -P CMakeFiles/Observability-static.dir/cmake_clean_target.cmake
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Observability-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/Observability/src/CMakeFiles/Observability-static.dir/build: plugins/Observability/src/libObservability.a
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/build

plugins/Observability/src/CMakeFiles/Observability-static.dir/requires: plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability.cpp.o.requires
plugins/Observability/src/CMakeFiles/Observability-static.dir/requires: plugins/Observability/src/CMakeFiles/Observability-static.dir/gui/ObservabilityDialog.cpp.o.requires
plugins/Observability/src/CMakeFiles/Observability-static.dir/requires: plugins/Observability/src/CMakeFiles/Observability-static.dir/qrc_Observability.cpp.o.requires
plugins/Observability/src/CMakeFiles/Observability-static.dir/requires: plugins/Observability/src/CMakeFiles/Observability-static.dir/Observability-static_automoc.cpp.o.requires
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/requires

plugins/Observability/src/CMakeFiles/Observability-static.dir/clean:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src && $(CMAKE_COMMAND) -P CMakeFiles/Observability-static.dir/cmake_clean.cmake
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/clean

plugins/Observability/src/CMakeFiles/Observability-static.dir/depend: plugins/Observability/src/qrc_Observability.cpp
plugins/Observability/src/CMakeFiles/Observability-static.dir/depend: plugins/Observability/src/ui_ObservabilityDialog.h
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdac/Downloads/stellarium-0.13.2 /home/cdac/Downloads/stellarium-0.13.2/plugins/Observability/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/src/CMakeFiles/Observability-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/Observability/src/CMakeFiles/Observability-static.dir/depend

