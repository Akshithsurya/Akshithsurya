#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const int ledPin = 2; // GPIO pin where the LED is connected
ESP8266WebServer server(80);

void handleRoot() {
  server.send(200, "text/plain", "Use /on to turn the LED on and /off to turn it off");
}

void handleLEDOn() {
  digitalWrite(ledPin, HIGH);
  server.send(200, "text/plain", "LED is ON");
}

void handleLEDOff() {
  digitalWrite(ledPin, LOW);
  server.send(200, "text/plain", "LED is OFF");
}

void setup() {
  Serial.begin(115200);
  WiFi.softAP("ESP8266_LED_Controller");

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  server.on("/", handleRoot);
  server.on("/on", handleLEDOn);
  server.on("/off", handleLEDOff);

  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}
