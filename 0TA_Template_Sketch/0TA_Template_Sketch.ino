#include <credentials.h>

const char* ssid = mySSID;
const char* password = myPASSWORD;

#include "OTA.h"
unsigned long entry;
void setup() {
  Serial.begin(115200);
  Serial.println("Booting");

  ArduinoOTA.setHostname("TemplateSketch");
  setupOTA();

  // your code

}

void loop() {
  ArduinoOTA.handle();
  
  // your code here

}
