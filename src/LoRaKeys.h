#ifndef LoRaKeys_h
#define LoRaKeys_h

#include <Arduino.h>
#include <Wire.h>
#include <lmic.h>
#include <hal/hal.h>
#include <SPI.h>

class LoRaKeys
{
  public:
    void buildLoRaKeysABP(void);
    void buildLoRaKeysOTTA(void);

  private:
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

    void loadLoRaKeys(void);
    void readEEPROM(unsigned int eeaddress );
};

#endif