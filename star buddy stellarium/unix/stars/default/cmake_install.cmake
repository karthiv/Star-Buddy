# Install script for directory: /home/cdac/Downloads/stellarium-0.13.2/stars/default

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/stars/default" TYPE FILE FILES
    "/home/cdac/Downloads/stellarium-0.13.2/stars/default/defaultStarsConfig.json"
    "/home/cdac/Downloads/stellarium-0.13.2/stars/default/name.fab"
    "/home/cdac/Downloads/stellarium-0.13.2/stars/default/stars_0_0v0_5.cat"
    "/home/cdac/Downloads/stellarium-0.13.2/stars/default/stars_1_0v0_5.cat"
    "/home/cdac/Downloads/stellarium-0.13.2/stars/default/stars_2_0v0_5.cat"
    "/home/cdac/Downloads/stellarium-0.13.2/stars/default/stars_3_1v0_3.cat"
    "/home/cdac/Downloads/stellarium-0.13.2/stars/default/stars_hip_cids_0v0_0.cat"
    "/home/cdac/Downloads/stellarium-0.13.2/stars/default/stars_hip_sp_0v0_0.cat"
    "/home/cdac/Downloads/stellarium-0.13.2/stars/default/gcvs_hip_part.dat"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

