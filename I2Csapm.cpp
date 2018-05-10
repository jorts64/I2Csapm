//
//    FILE: I2Csapm.cpp
//  AUTHOR: Jordi Orts
//    DATE: 26-04-2018
// VERSION: 0.1.10
// PURPOSE: I2C slave arduino pro micro
//     URL: http://
//
// HISTORY:
// 0.1.00 initial version
//

#include "I2Csapm.h"

#include <Wire.h>

I2Csapm::I2Csapm(const uint8_t deviceAddress)
{
    _address = deviceAddress;
    _dataIn = 0;
    _dataOut = 0xFF;
}

void I2Csapm::begin()
{
  Wire.begin();
}

int16_t I2Csapm::read(const uint8_t reg)
{
  Wire.beginTransmission(_address);
  Wire.write(reg);
  Wire.endTransmission();
  Wire.beginTransmission(_address);
  Wire.requestFrom(_address,(uint8_t)2);
  _dataIn = Wire.read()<<8 | Wire.read();
  Wire.endTransmission();
  return(_dataIn);
}

void I2Csapm::write(const uint8_t reg)
{
  Wire.beginTransmission(_address);
  Wire.write(reg);
  Wire.endTransmission();
}


//
// END OF FILE
//
