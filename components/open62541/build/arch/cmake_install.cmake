# Install script for directory: C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/arch

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/open62541")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/arch/posix/cmake_install.cmake")
  include("C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/arch/win32/cmake_install.cmake")
  include("C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/arch/freertosLWIP/cmake_install.cmake")
  include("C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/arch/vxworks/cmake_install.cmake")
  include("C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/arch/eCos/cmake_install.cmake")
  include("C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/arch/wec7/cmake_install.cmake")

endif()

