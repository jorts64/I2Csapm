#include "I2Csapm.h"
#include <Wire.h>

I2Csapm SAPM(0x38);



void setup() {
   SAPM.begin();
}

void loop() {
   int x = SAPM.read(I2Csapm_A0);
   SAPM.write(I2Csapm_LED_ON);

}
