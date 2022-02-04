#ifndef LoRaKeys_h
#define LoRaKeys_h

#include <Arduino.h>
#include <Wire.h>
#include <lmic.h>
#include <hal/hal.h>
#include <SPI.h>

byte DEVADD[4];
byte APPEUI[8];
byte DEVEUI[8];
byte APPKEY[16];
byte NWKKEY[16];
byte eepDEVADD[4];
byte eepAPPEUI[8];
byte eepDEVEUI[8];
byte eepAPPKEY[16];
byte eepNWKKEY[16];

class LoRaKeys {
  private:
    byte _deviceaddress;
    int buildLoRaKeysABP(void);
    int buildLoRaKeysOTTA(void);
    int readEEPROM(unsigned int eeaddress );
  public:
    LoRaKeys(byte);
    void loadLoRaKeys(void);
};

#endif