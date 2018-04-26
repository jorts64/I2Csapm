# I2Csapm
I2C slave arduino pro mini library

ESP8266 boards are great, specilly WeMos D1 board. But sometimes we need more I/O pins, analog inputs...
What about using a cheap Arduino pro mini as a I2C slave?

This library communicates with an arduino I2C slave that offers:
* 6 Analog inputs
* A matrix keypad
* A rotatory encoder
* A led

![Arduino pro mini connections](https://github.com/jorts64/I2Csapm/blob/master/docs/promini8MHz.png)

[Robotdyn](https://robotdyn.com/promini-atmega328p.html) offers one arduino pro mini running at 3.3V, but only at 8MHz. Enough for us! And in this model you can access A6 and A7 pins.

WORK in PROGRESS !
