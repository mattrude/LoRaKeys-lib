#ifndef LoRaKeys_h
#define LoRaKeys_h

#include <Arduino.h>
#include <Wire.h>

class LoRaKeys {
  private:
    byte _DEVADD[4];
    byte _APPEUI[8];
    byte _DEVEUI[8];
    byte _APPKEY[16];
    byte _NWKKEY[16];
    int buildLoRaKeysABP(void);
    int buildLoRaKeysOTTA(void);
    int readEEPROM(unsigned int eeaddress );
  public:
    byte DEVADD[4];
    byte APPEUI[8];
    byte DEVEUI[8];
    byte APPKEY[16];
    byte NWKKEY[16];
    LoRaKeys(void);
    void loadLoRaKeys(void);
};

#endif