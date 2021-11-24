#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "HttpStatusCodes_C++.h"
#include "WifiSecrets.h"

void connectToWiFi();

ESP8266WebServer server(80);

void setup(void) {
    Serial.begin(115200);
    connectToWiFi();

    server.on("/", []() {
        server.send(HttpStatus::OK, "text/plain", "Hello ESP8266!");
    });

    server.onNotFound([]() {
        server.send(HttpStatus::NotFound, "text/plain", "Resource not found: "+server.uri());
    });

    server.begin();
    Serial.println("HTTP Server ready!");
}

void loop(void) {
    server.handleClient();
}

void connectToWiFi() {
    WiFi.mode(WIFI_STA);
    WiFi.begin(SECRET_WIFI_SSID, SECRET_WIFI_PASSWORD);
    Serial.println((String) "Attempting connection to " + SECRET_WIFI_SSID);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }
    Serial.println();
    Serial.println((String)"Connected to " + SECRET_WIFI_SSID);
    Serial.println((String)"IP address: " + WiFi.localIP().toString());
}
