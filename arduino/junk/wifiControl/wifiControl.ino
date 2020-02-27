#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer server(80);

int ledPin = 16;
bool ledState = LOW;

const int pingPin = D0; // Trigger Pin of Ultrasonic Sensor
const int echoPin = D1; // Echo Pin of Ultrasonic Sensor




void setup(){
//----------------------------
  Serial.begin(115200); // Starting Serial Terminal
  pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);

//------------------------------------------

  
  pinMode(ledPin, OUTPUT);

WiFi.begin("( 0 _ 0 )", "helloWorld@123"); //Connect to the WiFi network

while (WiFi.status() != WL_CONNECTED) { //Wait for connection

delay(500);
Serial.println("Waiting to connect…");

}

Serial.print("IP address: ");
Serial.println(WiFi.localIP()); //Print the local IP

server.on("/on", turnOn);         //Associate the handler function to the path
server.on("/off", turnOff);        //Associate the handler function to the path
//server.on("/toggle", toggle);   //Associate the handler function to the path

server.begin(); //Start the server
Serial.println("Server listening");
}


void turnOn(){

ledState = HIGH;
digitalWrite(ledPin, ledState);
long cm = getDist();
server.send(200, "text/plain", (String)cm);

}

void turnOff(){

ledState = LOW;
digitalWrite(ledPin, ledState);
server.send(200, "text/plain", "LED off");
}

void loop(){
  server.handleClient();
}
