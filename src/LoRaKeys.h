#ifndef LoRaKeys_h
#define LoRaKeys_h

#include <Arduino.h>
#include <Wire.h>

class LoRaKeys {
  private:
    byte eepDEVADD[4];
    byte eepAPPEUI[8];
    byte eepDEVEUI[8];
    byte eepAPPKEY[16];
    byte eepNWKKEY[16];
    int buildLoRaKeysABP(void);
    int buildLoRaKeysOTTA(void);
    int readEEPROM(unsigned int eeaddress );
  public:
    LoRaKeys(void);
    void loadLoRaKeys(void);
};

#endif