#ifndef MYLED_H
#define MYLED_H

#include <Arduino.h>

class MyLED
{
private:
    int pin;

public:
    MyLED(int ledPin);
    void turnOn();
    void turnOff();
};

#endif
