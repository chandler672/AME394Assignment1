//ESP8266 
#include "ESP8266WiFi.h"

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA); // Station mode
  WiFi.disconnect(); // Disconnect from any WiFi network
  delay(100);
  Serial.println("Hello there, I scan for WiFi");
}

void loop() {
  Serial.print("\nStarting my scan");
  delay(500);
  Serial.print(".");
  delay(500);
  Serial.print(".");
  delay(500);
  Serial.print(".");

  // WiFi.scanNetworks() returns the number of WiFi networks
  int n = WiFi.scanNetworks();
  Serial.println("\nAll done! Here's what I found:");
  if (n == 0)
    Serial.println("No WiFi networks found");
  else
  {
    Serial.print(n);
    Serial.println(" WiFi networks found");
    for (int i = 0; i < n; ++i)
    {
      // Print SSID for each network found
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.println(WiFi.SSID(i));
      delay(10);
    }
  }
  Serial.println("");

  // Wait a bit before scanning again
  Serial.print("Whew, all that scanning tired me out, I'll need about 5 seconds to rest");
  delay(1000);
  Serial.print(".");
  delay(1000);
  Serial.print(".");
  delay(1000);
  Serial.print(".");
  delay(1000);
  Serial.print(".");
  delay(1000);
  
}
