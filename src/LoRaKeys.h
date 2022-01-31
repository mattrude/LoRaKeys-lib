#ifndef LoRaKeys_h
#define LoRaKeys_h

#include <Arduino.h>
#include <Wire.h>
#include <lmic.h>
#include <hal/hal.h>
#include <SPI.h>

class LoRaKeys {
  public:

    byte readEEPROM(unsigned int eeaddress );
    void loadLoRaKeys(void);

  private:
    byte DEVADD[4];
    byte APPEUI[8];
    byte DEVEUI[8];
    byte APPKEY[16];
    byte NWKKEY[16];
};

#endif