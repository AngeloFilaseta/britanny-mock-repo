#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "WifiSecrets.h"

// Insert secret values in file "WifiSecrets.h"
const char* ssid = SECRET_WIFI_SSID;
const char* password = SECRET_WIFI_PASSWORD;

ESP8266WebServer server(80);

void setup(void) {
    Serial.begin(115200);
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    Serial.println("");

    // Wait for connection
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.print("Connected to ");
    Serial.println(ssid);
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());

    server.on("/", []() {
        server.send(200, "text/plain", "Hello from esp8266 server web!");
    });

    server.on("/inline", []() {
        server.send(200, "text/plain", "this works as well");
    });

    server.onNotFound([]() {
        server.send(404, "text/plain", "Uri not found "+server.uri());
    });

    server.begin();
    Serial.println("HTTP server started");
}

void loop(void) {
    server.handleClient();
}