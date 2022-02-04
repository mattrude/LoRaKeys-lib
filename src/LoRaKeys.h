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
  public:
    int _key_type;
    LoRaKeys(uint8_t, uint8_t);
    void buildLoRaKeysABP(void);
    void buildLoRaKeysOTTA(void);

  private:
    void loadLoRaKeys(void);
    void readEEPROM(unsigned int eeaddress );
};

#endif