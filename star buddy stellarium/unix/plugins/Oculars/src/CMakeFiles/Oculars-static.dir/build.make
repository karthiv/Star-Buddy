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
include plugins/Oculars/src/CMakeFiles/Oculars-static.dir/depend.make

# Include the progress variables for this target.
include plugins/Oculars/src/CMakeFiles/Oculars-static.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make

plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_ocular_on.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_ocular_off.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/normalStyle.css
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/nightStyle.css
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/default_ocular.ini
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_crosshairs_off.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_crosshairs_on.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_sensor_off.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_sensor_on.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_telrad_off.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_telrad_on.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_settings_off.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/bt_settings_on.png
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/CelestronMicroGuide.png
plugins/Oculars/src/qrc_Oculars.cpp: plugins/Oculars/src/__/resources/Oculars.qrc.depends
plugins/Oculars/src/qrc_Oculars.cpp: ../../plugins/Oculars/resources/Oculars.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_Oculars.cpp"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/lib/x86_64-linux-gnu/qt5/bin/rcc -name Oculars -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src/qrc_Oculars.cpp /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/resources/Oculars.qrc

plugins/Oculars/src/ui_ocularDialog.h: ../../plugins/Oculars/src/gui/ocularDialog.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_ocularDialog.h"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src/ui_ocularDialog.h /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/ocularDialog.ui

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o: ../../plugins/Oculars/src/CCD.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/CCD.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/CCD.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/CCD.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/CCD.cpp > CMakeFiles/Oculars-static.dir/CCD.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/CCD.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/CCD.cpp -o CMakeFiles/Oculars-static.dir/CCD.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o: ../../plugins/Oculars/src/Lens.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/Lens.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Lens.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/Lens.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Lens.cpp > CMakeFiles/Oculars-static.dir/Lens.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/Lens.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Lens.cpp -o CMakeFiles/Oculars-static.dir/Lens.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o: ../../plugins/Oculars/src/Ocular.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/Ocular.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Ocular.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/Ocular.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Ocular.cpp > CMakeFiles/Oculars-static.dir/Ocular.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/Ocular.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Ocular.cpp -o CMakeFiles/Oculars-static.dir/Ocular.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o: ../../plugins/Oculars/src/Oculars.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/Oculars.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Oculars.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/Oculars.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Oculars.cpp > CMakeFiles/Oculars-static.dir/Oculars.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/Oculars.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Oculars.cpp -o CMakeFiles/Oculars-static.dir/Oculars.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o: ../../plugins/Oculars/src/Telescope.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/Telescope.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Telescope.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/Telescope.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Telescope.cpp > CMakeFiles/Oculars-static.dir/Telescope.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/Telescope.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/Telescope.cpp -o CMakeFiles/Oculars-static.dir/Telescope.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o: ../../plugins/Oculars/src/gui/OcularDialog.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/OcularDialog.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/OcularDialog.cpp > CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/OcularDialog.cpp -o CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o: ../../plugins/Oculars/src/gui/PropertyBasedTableModel.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/PropertyBasedTableModel.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/PropertyBasedTableModel.cpp > CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/PropertyBasedTableModel.cpp -o CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o: ../../plugins/Oculars/src/gui/OcularsGuiPanel.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/OcularsGuiPanel.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/OcularsGuiPanel.cpp > CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src/gui/OcularsGuiPanel.cpp -o CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o: plugins/Oculars/src/qrc_Oculars.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src/qrc_Oculars.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src/qrc_Oculars.cpp > CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src/qrc_Oculars.cpp -o CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/flags.make
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o: plugins/Oculars/src/Oculars-static_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cdac/Downloads/stellarium-0.13.2/builds/unix/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o -c /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src/Oculars-static_automoc.cpp

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.i"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src/Oculars-static_automoc.cpp > CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.i

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.s"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src/Oculars-static_automoc.cpp -o CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.s

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o.requires:
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o.requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o.provides: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o.requires
	$(MAKE) -f plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o.provides.build
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o.provides

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o.provides.build: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o

# Object files for target Oculars-static
Oculars__static_OBJECTS = \
"CMakeFiles/Oculars-static.dir/CCD.cpp.o" \
"CMakeFiles/Oculars-static.dir/Lens.cpp.o" \
"CMakeFiles/Oculars-static.dir/Ocular.cpp.o" \
"CMakeFiles/Oculars-static.dir/Oculars.cpp.o" \
"CMakeFiles/Oculars-static.dir/Telescope.cpp.o" \
"CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o" \
"CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o" \
"CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o" \
"CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o" \
"CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o"

# External object files for target Oculars-static
Oculars__static_EXTERNAL_OBJECTS =

plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build.make
plugins/Oculars/src/libOculars.a: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libOculars.a"
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && $(CMAKE_COMMAND) -P CMakeFiles/Oculars-static.dir/cmake_clean_target.cmake
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Oculars-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build: plugins/Oculars/src/libOculars.a
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/build

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/CCD.cpp.o.requires
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Lens.cpp.o.requires
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Ocular.cpp.o.requires
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars.cpp.o.requires
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Telescope.cpp.o.requires
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularDialog.cpp.o.requires
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/PropertyBasedTableModel.cpp.o.requires
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/gui/OcularsGuiPanel.cpp.o.requires
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/qrc_Oculars.cpp.o.requires
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires: plugins/Oculars/src/CMakeFiles/Oculars-static.dir/Oculars-static_automoc.cpp.o.requires
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/requires

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/clean:
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src && $(CMAKE_COMMAND) -P CMakeFiles/Oculars-static.dir/cmake_clean.cmake
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/clean

plugins/Oculars/src/CMakeFiles/Oculars-static.dir/depend: plugins/Oculars/src/qrc_Oculars.cpp
plugins/Oculars/src/CMakeFiles/Oculars-static.dir/depend: plugins/Oculars/src/ui_ocularDialog.h
	cd /home/cdac/Downloads/stellarium-0.13.2/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdac/Downloads/stellarium-0.13.2 /home/cdac/Downloads/stellarium-0.13.2/plugins/Oculars/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src /home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/src/CMakeFiles/Oculars-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/Oculars/src/CMakeFiles/Oculars-static.dir/depend
