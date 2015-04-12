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
include plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/depend.make

# Include the progress variables for this target.
include plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/flags.make

plugins/Supernovae/src/qrc_Supernovae.cpp: ../../plugins/Supernovae/resources/supernovae.json
plugins/Supernovae/src/qrc_Supernovae.cpp: plugins/Supernovae/src/__/resources/Supernovae.qrc.depends
plugins/Supernovae/src/qrc_Supernovae.cpp: ../../plugins/Supernovae/resources/Supernovae.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_Supernovae.cpp"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/lib/x86_64-linux-gnu/qt5/bin/rcc -name Supernovae -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src/qrc_Supernovae.cpp /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/resources/Supernovae.qrc

plugins/Supernovae/src/ui_supernovaeDialog.h: ../../plugins/Supernovae/src/gui/supernovaeDialog.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_supernovaeDialog.h"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src/ui_supernovaeDialog.h /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/gui/supernovaeDialog.ui

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/flags.make
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o: ../../plugins/Supernovae/src/Supernovae.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/Supernovae.cpp

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Supernovae-static.dir/Supernovae.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/Supernovae.cpp > CMakeFiles/Supernovae-static.dir/Supernovae.cpp.i

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Supernovae-static.dir/Supernovae.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/Supernovae.cpp -o CMakeFiles/Supernovae-static.dir/Supernovae.cpp.s

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o.requires:
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o.requires

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o.provides: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o.requires
	$(MAKE) -f plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/build.make plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o.provides.build
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o.provides

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o.provides.build: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/flags.make
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o: ../../plugins/Supernovae/src/Supernova.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Supernovae-static.dir/Supernova.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/Supernova.cpp

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Supernovae-static.dir/Supernova.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/Supernova.cpp > CMakeFiles/Supernovae-static.dir/Supernova.cpp.i

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Supernovae-static.dir/Supernova.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/Supernova.cpp -o CMakeFiles/Supernovae-static.dir/Supernova.cpp.s

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o.requires:
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o.requires

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o.provides: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o.requires
	$(MAKE) -f plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/build.make plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o.provides.build
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o.provides

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o.provides.build: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/flags.make
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o: ../../plugins/Supernovae/src/gui/SupernovaeDialog.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/gui/SupernovaeDialog.cpp

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/gui/SupernovaeDialog.cpp > CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.i

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src/gui/SupernovaeDialog.cpp -o CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.s

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o.requires:
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o.requires

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o.provides: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o.requires
	$(MAKE) -f plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/build.make plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o.provides.build
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o.provides

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o.provides.build: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/flags.make
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o: plugins/Supernovae/src/qrc_Supernovae.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src/qrc_Supernovae.cpp

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src/qrc_Supernovae.cpp > CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.i

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src/qrc_Supernovae.cpp -o CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.s

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o.requires:
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o.requires

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o.provides: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o.requires
	$(MAKE) -f plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/build.make plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o.provides.build
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o.provides

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o.provides.build: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/flags.make
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o: plugins/Supernovae/src/Supernovae-static_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src/Supernovae-static_automoc.cpp

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src/Supernovae-static_automoc.cpp > CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.i

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src/Supernovae-static_automoc.cpp -o CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.s

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o.requires:
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o.requires

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o.provides: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o.requires
	$(MAKE) -f plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/build.make plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o.provides.build
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o.provides

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o.provides.build: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o

# Object files for target Supernovae-static
Supernovae__static_OBJECTS = \
"CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o" \
"CMakeFiles/Supernovae-static.dir/Supernova.cpp.o" \
"CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o" \
"CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o" \
"CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o"

# External object files for target Supernovae-static
Supernovae__static_EXTERNAL_OBJECTS =

plugins/Supernovae/src/libSupernovae.a: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o
plugins/Supernovae/src/libSupernovae.a: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o
plugins/Supernovae/src/libSupernovae.a: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o
plugins/Supernovae/src/libSupernovae.a: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o
plugins/Supernovae/src/libSupernovae.a: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o
plugins/Supernovae/src/libSupernovae.a: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/build.make
plugins/Supernovae/src/libSupernovae.a: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libSupernovae.a"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && $(CMAKE_COMMAND) -P CMakeFiles/Supernovae-static.dir/cmake_clean_target.cmake
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Supernovae-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/build: plugins/Supernovae/src/libSupernovae.a
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/build

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/requires: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae.cpp.o.requires
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/requires: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernova.cpp.o.requires
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/requires: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/gui/SupernovaeDialog.cpp.o.requires
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/requires: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/qrc_Supernovae.cpp.o.requires
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/requires: plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/Supernovae-static_automoc.cpp.o.requires
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/requires

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/clean:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src && $(CMAKE_COMMAND) -P CMakeFiles/Supernovae-static.dir/cmake_clean.cmake
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/clean

plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/depend: plugins/Supernovae/src/qrc_Supernovae.cpp
plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/depend: plugins/Supernovae/src/ui_supernovaeDialog.h
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdac/Downloads/stellarium-0.13.2 /home/cdac/Downloads/stellarium-0.13.2/plugins/Supernovae/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/Supernovae/src/CMakeFiles/Supernovae-static.dir/depend

