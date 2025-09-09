#include <MyButton.h>

MyButton::MyButton(int buttonPin)
{
    pin = buttonPin;
    pinMode(pin, INPUT_PULLUP);
}
bool MyButton::isPressed()
{
    if (digitalRead(pin) == LOW)
    {
        return true;
    }
    else
    {
        return false;
    }
}