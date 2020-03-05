set(COMPONENT_SRCS 
	"src/bufferfiller.cpp"
	"src/dhcp.cpp"
	"src/dns.cpp"
#	"src/EEPROM.cpp"
	"src/enc28j60.cpp"
	"src/EtherCard.cpp"
	"src/stash.cpp"
	"src/tcpip.cpp"
	"src/udpserver.cpp"
	"src/webutil.cpp"
	)

set(COMPONENT_REQUIRES 
	"arduino-esp32"
	)

set(COMPONENT_ADD_INCLUDEDIRS
	"."
	"src"
	)

register_component()