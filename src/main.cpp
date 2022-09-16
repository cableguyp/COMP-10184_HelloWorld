#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  // start the USB serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nCaleb Priede - 000803812");

  // print the ChipID of the device connected (my ChipId is 12376529)
  Serial.println("ESP8266 Chip ID: " + String(ESP.getChipId()));

  // print the Flash Chip ID of the device connected (my Flash Chip ID is 1458415)
  Serial.println("Flash Chip ID: " + String(ESP.getFlashChipId()) + "\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  Serial.println("Device has been running for " + String(millis()) + " milliseconds.");
}