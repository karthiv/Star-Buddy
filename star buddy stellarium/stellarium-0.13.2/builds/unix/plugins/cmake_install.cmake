# Install script for directory: /home/cdac/Downloads/stellarium-0.13.2/plugins

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Debug")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/AngleMeasure/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/CompassMarks/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Exoplanets/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/EquationOfTime/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/FOV/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/MeteorShowers/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/NavStars/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Novae/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Observability/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Oculars/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/PointerCoordinates/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Pulsars/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Quasars/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Satellites/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/SolarSystemEditor/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/Supernovae/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/TextUserInterface/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/TelescopeControl/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/plugins/TimeZoneConfiguration/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

