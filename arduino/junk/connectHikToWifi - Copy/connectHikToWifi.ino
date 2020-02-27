
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

const String ssid = "( 0 _ 0 )";
const String password = "helloWorld@123";
const int PORT = 8000;

WiFiServer server(PORT);


void setup() {
  // put your setup code here, to run once:
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
  // put your main code here, to run repeatedly:

  getCommands();
}

void getCommands() {
  WiFiClient client = server.available();

  if (client) {
    if (client.connected()) {
      client.println("Hello");

      String cmd = client.readString();
      Serial.println(cmd);
    }


    //    if (cmd.substring(2, 5) == "off") {
    //      pinMode(LED_BUILTIN, LOW);
    //    }
  }

}
