# ESP32BTSpeaker
Bluetooth Speaker Using ESP32 and MAX98357A Modules

## Description
Simple circuit to make an old vacuum tubes radion working again as a cluetooth speaker

## Components

- Old vacuum tubes radio
- [Starduino MCU-32S](https://3dstar.ro/placi-dezvoltare/placa-dezvoltare-starduino-mcu-32s) (basicaly an ESP32-S and its pin extension board)
- MAX98357A I2S amplifier
- HW-131 Power Supply

### Development Components

- CP2102 USB to UART TTL Serial Converter Module




## Pinout


|ESP32|MAX98357A|USB UART CP2102|HW-131 Power Supply 3.3V |Speaker|Comments|
|--|--|--|--|--|--|
|Pin 26|DIN|||||
|Pin 33|LRC|||||
|Pin 32|BCLK|||||
|GND|||➖|||
|3.3V|||➕|||
|RX1||TXD|||Development only|
|TX0||RXD|||Development only|
|GND||GND|||Development only|
|Pin 0|||➖||This is connected only on upload step|
||GND||➖|||
||Vin||➕|||
||Speaker ➕|||🔈||
||Speaker ➖|||🔈||