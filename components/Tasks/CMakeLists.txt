set(COMPONENT_SRCS 	OPCUA_Task.cpp
					RS422_task.cpp
					WiFi_Task.cpp
					Eth_Task.cpp
					WeldingMachine.cpp
					Task_Sync.cpp
					ADS_Task.cpp
					)

#set(COMPONENT_ADD_INCLUDEDIRS "." "./lib")
set(COMPONENT_ADD_INCLUDEDIRS ".")

set(COMPONENT_REQUIRES	cpp_utils
						EtherCard
						MultiSerial
						ADS1015
						freertos
						lwip
						esp_eth
						esp_event
						open62541
						)

#include custom namespace for TIG4						
#set(COMPONENT_SRCS ${COMPONENT_SRCS} "./lib/open62541.c"
								#	"./lib/TYPES_DI_generated.c"
								#	"./lib/TYPES_TIG4_generated.c"
								#	"./lib/ua_namespace_di.c"
								#	"./lib/ua_namespace_tig4.c"
#								)

register_component()