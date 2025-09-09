#include <Arduino.h>
#include "MyLED.h"
#include "MyButton.h"

#define LED_PIN 2
#define BUTTON_PIN 0

MyLED led(LED_PIN);
MyButton button(BUTTON_PIN);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  if (button.isPressed())
  {
    led.turnOn();
    Serial.println("LED is on");
    Serial.println("Button is pressed");
  }
  else
  {
    led.turnOff();
    Serial.println("LED is off");
    Serial.println("Button is not pressed");
  }
  delay(500);
}
