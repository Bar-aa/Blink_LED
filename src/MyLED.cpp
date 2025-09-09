#include "MyLED.h"

MyLED::MyLED(int ledPin)
{
    pin = ledPin;
    pinMode(pin, OUTPUT);
}

void MyLED::turnOn()
{
    digitalWrite(pin, HIGH);
}

void MyLED::turnOff()
{
    digitalWrite(pin, LOW);
}
