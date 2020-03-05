set(COMPONENT_SRCS #Apa102.cpp
#					AWS.cpp
#					BLE2902.cpp
#					BLE2904.cpp
#					BLEAddress.cpp
#					BLEAdvertisedDevice.cpp
#					BLEAdvertising.cpp
#					BLEBeacon.cpp
#					BLECharacteristic.cpp
#					BLECharacteristicMap.cpp
#					BLEClient.cpp
#					BLEDescriptor.cpp
#					BLEDescriptorMap.cpp
#					BLEDevice.cpp
#					BLEEddystoneTLM.cpp
#					BLEEddystoneURL.cpp
#					BLEExceptions.cpp
#					BLEHIDDevice.cpp
#					BLERemoteCharacteristic.cpp
#					BLERemoteDescriptor.cpp
#					BLERemoteService.cpp
#					BLEScan.cpp
#					BLESecurity.cpp
#					BLEServer.cpp
#					BLEService.cpp
#					BLEServiceMap.cpp
#					BLEUtils.cpp
#					BLEUUID.cpp
#					BLEValue.cpp
#					Console.cpp
#					CPPNVS.cpp
#					FATFS_VFS.cpp
#					File.cpp
#					FileSystem.cpp
					FreeRTOS.cpp
#					FreeRTOSTimer.cpp
#					FTPCallbacks.cpp
#					FTPServer.cpp
					GeneralUtils.cpp
#					GPIO.cpp
#					HttpParser.cpp
#					HttpRequest.cpp
#					HttpResponse.cpp
#					HttpServer.cpp
#					I2C.cpp
#					I2S.cpp
#					IFTTT.cpp
#					JSON.cpp
#					MAX7219.cpp
#					Memory.cpp
#					MFRC522.cpp
#					MMU.cpp
#					MPU6050.cpp
#					MRFC522Debug.cpp
#					NeoPixelWiFiEventHandler.cpp					
#					OV7670.cpp
#					PCF8574.cpp
#					PCF8575.cpp
#					PubSubClient.cpp
#					PWM.cpp
#					RESTClient.cpp
#					RMT.cpp					
#					SmartLED.cpp
#					SOC.cpp
#					Socket.cpp
#					SockServ.cpp
#					SPI.cpp
#					SSLUtils.cpp
#					System.cpp
					Task_cxx.cpp
#					TFTP.cpp
#					U8G2.cpp
#					WebServer.cpp
#					WebSocket.cpp
#					WebSocketFileTransfer.cpp
					WiFi.cpp					
					WiFiEventHandler.cpp
#					WS2812.cpp
					)

# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES
  "console"
  "fatfs"
  "json"
  "mdns"
  "nvs_flash"
)
set(COMPONENT_PRIV_REQUIRES )

#file(GLOB COMPONENT_SRCS
#  LIST_DIRECTORIES false
#  "*.h"
#  "*.cpp"
#  "*.c"
#  "*.S"
#)
set(COMPONENT_ADD_INCLUDEDIRS ".")

register_component()
