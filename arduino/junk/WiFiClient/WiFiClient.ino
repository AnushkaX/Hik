
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

// Hardcode WiFi parameters as this isn't going to be moving around.
const char* ssid = "( 0 _ 0 )";
const char* password = "helloWorld@123";

// Start a TCP Server on port 5045
WiFiServer server(22);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("");
  //Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.print("Connected to "); Serial.println(ssid);
  Serial.print("IP Address: "); Serial.println(WiFi.localIP());

  // Start the TCP server
  server.begin();
}

void loop() {
  TCPServer();
}

void TCPServer () {
  WiFiClient client = server.available();
  if (client) {
    if (client.connected()) {
      Serial.println("Connected to client");
    }
    //    if (client.available()) {
    // Read incoming message
    String msg = client.readString();
    // Send back something to the clinet
    if (msg.substring(2, 5) == "off") {
      pinMode(LED_BUILTIN,LOW);
    }
    if (msg.substring(2, 4) == "on") {
      pinMode(LED_BUILTIN,HIGH);
      
    }

    Serial.println(msg);
  }
  //  }
}
