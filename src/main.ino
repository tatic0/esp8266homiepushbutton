#include <Homie.h>

void setup() {
  //Homie.setFirmware("bare-minimum", "1.0.0"); //fucks setup mode, AP not starting
  Homie.setBrand("TryMeAP");
  Serial.begin(115200);
  Serial.println("Setup function loaded, entering ESP setup ...");
  Homie.setup();
}

void loop() {
  Serial.println("Entering main loop");
  delay(100);
  Homie.loop();
}
