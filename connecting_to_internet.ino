#include<ESP8266WiFi.h> // HEADER FILE FOR ESP8266 AND WIFI CONNECTIVITY

const char* ssid="homewifi";  // NAME OF WIFI NETWORK
const char* pass="1SAvasyam!damsarvam";// PASSWORD OF WIFI NETWORK

void setup() {
  Serial.begin(4800);
  WiFi.begin(ssid,pass); // Initializes the WiFi library's network settings and provides the current status.
  Serial.print("connecting to ");
  Serial.print(ssid);
  while(WiFi.status()!=WL_CONNECTED)
  {
    Serial.print(".");
    delay(50);
    }
 Serial.println();
  Serial.println("connected successfully");
 Serial.println("IP address of ESP is");
  Serial.println(WiFi.localIP());
}

 

void loop() {
  // put your main code here, to run repeatedly:

}
