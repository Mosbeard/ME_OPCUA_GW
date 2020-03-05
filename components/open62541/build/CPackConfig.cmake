# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BINARY_7Z "")
set(CPACK_BINARY_BUNDLE "")
set(CPACK_BINARY_CYGWIN "")
set(CPACK_BINARY_DEB "")
set(CPACK_BINARY_DRAGNDROP "")
set(CPACK_BINARY_FREEBSD "")
set(CPACK_BINARY_IFW "")
set(CPACK_BINARY_NSIS "")
set(CPACK_BINARY_NUGET "")
set(CPACK_BINARY_OSXX11 "")
set(CPACK_BINARY_PACKAGEMAKER "")
set(CPACK_BINARY_PRODUCTBUILD "")
set(CPACK_BINARY_RPM "")
set(CPACK_BINARY_STGZ "")
set(CPACK_BINARY_TBZ2 "")
set(CPACK_BINARY_TGZ "")
set(CPACK_BINARY_TXZ "")
set(CPACK_BINARY_TZ "")
set(CPACK_BINARY_WIX "")
set(CPACK_BINARY_ZIP "")
set(CPACK_BUILD_SOURCE_DIRS "C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541;C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build")
set(CPACK_CMAKE_GENERATOR "Ninja")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "open62541 team")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "C:/Program Files/CMake/share/cmake-3.16/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "open62541 built using CMake")
set(CPACK_GENERATOR "TGZ;DEB;RPM")
set(CPACK_INSTALL_CMAKE_PROJECTS "C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build;open62541;ALL;/")
set(CPACK_INSTALL_PREFIX "C:/Program Files (x86)/open62541")
set(CPACK_MODULE_PATH "C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/tools/cmake")
set(CPACK_NSIS_DISPLAY_NAME "open62541 0.0.0-unknown")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "open62541 0.0.0-unknown")
set(CPACK_OUTPUT_CONFIG_FILE "C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION "open62541 is a C-based library (linking with C++ projects is possible) with all necessary tools to implement dedicated OPC UA clients and servers, or to integrate OPC UA-based communication into existing applications.")
set(CPACK_PACKAGE_DESCRIPTION_FILE "C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/README.md")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "OPC UA implementation")
set(CPACK_PACKAGE_FILE_NAME "open62541-0.0.0-unknown-Generic")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "open62541 0.0.0-unknown")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "open62541 0.0.0-unknown")
set(CPACK_PACKAGE_NAME "open62541")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "open62541 team")
set(CPACK_PACKAGE_VERSION "0.0.0-unknown")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0-unknown")
set(CPACK_RESOURCE_FILE_LICENSE "C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/LICENSE")
set(CPACK_RESOURCE_FILE_README "C:/Program Files/CMake/share/cmake-3.16/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "C:/Program Files/CMake/share/cmake-3.16/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_7Z "ON")
set(CPACK_SOURCE_CYGWIN "")
set(CPACK_SOURCE_GENERATOR "7Z;ZIP")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/CPackSourceConfig.cmake")
set(CPACK_SOURCE_RPM "")
set(CPACK_SOURCE_TBZ2 "")
set(CPACK_SOURCE_TGZ "")
set(CPACK_SOURCE_TXZ "")
set(CPACK_SOURCE_TZ "")
set(CPACK_SOURCE_ZIP "ON")
set(CPACK_SYSTEM_NAME "Generic")
set(CPACK_TOPLEVEL_TAG "Generic")
set(CPACK_WIX_SIZEOF_VOID_P "4")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
