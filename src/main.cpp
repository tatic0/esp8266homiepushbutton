#include <Homie.h>
#define GPIO 14
int val = 0;

void setup() {
  //Homie_setFirmware("bare-minimum", "1.0.0"); //fucks setup mode, AP not starting
  Homie.setBrand("AP-passwd");
  Serial.begin(115200);
  Serial.println("Setup function loaded, entering ESP setup ...");
  pinMode(GPIO, INPUT);
  val = digitalRead(GPIO);
  if (val = HIGH) {
    Serial.println("starrting setup mode");
    Homie.setup();
  }
  else {
    Serial.println("nothing happens here");
  }
}

void loop() {
  Serial.println("Entering main loop");
  Homie.loop(); // normal mode and network connection up
}
