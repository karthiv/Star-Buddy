# Install script for directory: /home/cdac/Downloads/stellarium-0.13.2/scripts

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/scripts" TYPE FILE FILES
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/startup.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/landscapes.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/lunar_partial.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/lunar_total.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/screensaver.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/common_objects.inc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/solar_eclipse.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/zodiac.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/triple_sunrise_and_sunsets.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/phobos_phun_1.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/phobos_phun_2.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/phobos_phun_3.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/phobos_phun_4.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/phobos_phun_5.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/solar_system_screensaver.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/constellations_tour.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/sun.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/earth_1.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/earth_2.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/earth_3.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/earth_4.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/earth_5.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/earth_6.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/transit_of_venus.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/analemma.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/supernova.ssc"
    "/home/cdac/Downloads/stellarium-0.13.2/scripts/sky_cultures.ssc"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

