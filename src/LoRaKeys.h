#ifndef LoRaKeys_h
#define LoRaKeys_h

#include <Arduino.h>
#include <Wire.h>
#include <lmic.h>
#include <hal/hal.h>
#include <SPI.h>

class LoRaKeys {
  public:

    byte DEVADD[4];
    byte APPEUI[8];
    byte DEVEUI[8];
    byte APPKEY[16];
    byte NWKKEY[16];

    void buildLoRaKeys(void);

  private:
    byte eepDEVADD[4];
    byte eepNWKKEY[16];
    byte eepAPPEUI[8];
    byte eepDEVEUI[8];
    byte eepAPPKEY[16];

    void loadLoRaKeys(void);
    byte readEEPROM(unsigned int eeaddress );
};

#endif