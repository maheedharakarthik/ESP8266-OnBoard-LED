#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Your_Blynk_Auth_Token";

char ssid[] = "Your_SSID";
char pass[] = "Your_Password";

void setup() {
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE(V0) {
  int ledState = param.asInt();
  digitalWrite(LED_BUILTIN, ledState);
}