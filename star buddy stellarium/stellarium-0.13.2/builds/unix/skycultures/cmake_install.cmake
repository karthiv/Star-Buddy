# Install script for directory: /home/cdac/Downloads/stellarium-0.13.2/skycultures

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
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/arabic/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/arabic_moon_stations/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/aztec/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/boorong/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/chinese/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/egyptian/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/inuit/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/indian/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/japanese_moon_stations/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/korean/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/lakota/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/maori/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/mongolian/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/navajo/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/norse/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/polynesian/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/romanian/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/sami/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/siberian/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/tongan/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/tupi/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/western/cmake_install.cmake")
  INCLUDE("/home/cdac/Downloads/stellarium-0.13.2/builds/unix/skycultures/western_rey/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

