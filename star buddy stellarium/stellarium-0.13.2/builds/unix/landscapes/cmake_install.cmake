# Install script for directory: /home/cdac/Downloads/stellarium-0.13.2/landscapes

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
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/guereins/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/trees/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/moon/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/hurricane/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/ocean/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/garching/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/mars/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/jupiter/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/saturn/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/uranus/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/neptune/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/grossmugl/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/geneva/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/landscapes/zero/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

