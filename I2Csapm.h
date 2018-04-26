//
//    FILE: I2Csapm.H
//  AUTHOR: Jordi Orts
//    DATE: 26-04-2018
// VERSION: 0.1.00
// PURPOSE: I2C slave arduino pro micro
//     URL: http://
//
// HISTORY:
// see I2Csapm.cpp file
//

#ifndef _I2Csapm_H
#define _I2Csapm_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#define I2Csapm_LIB_VERSION "0.1.00"

#define I2Csapm_A0  0
#define I2Csapm_A1  1
#define I2Csapm_A2  2
#define I2Csapm_A3  3
#define I2Csapm_A4  4
#define I2Csapm_A5  5
#define I2Csapm_SW  6
#define I2Csapm_ROT 7;
#define I2Csapm_POS 8
#define I2Csapm_KEY 9

#define I2Csapm_LED_OFF  0
#define I2Csapm_LED_ON   1

class I2Csapm
{
public:
    explicit I2Csapm(const uint8_t deviceAddress);

    void begin();

    int16_t read(uint8_t reg);
    void write(const uint8_t reg);

private:
    uint8_t _address;
    int16_t _dataIn;
    uint8_t _dataOut;
};

#endif
//
// END OF FILE
//

