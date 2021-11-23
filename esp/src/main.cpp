#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <coap-simple.h>
#include "callbacks/callback_light.h"
#include "callbacks/callback_response.h"

const char* ssid = "Minualex";
const char* password = "8u6t6o&mmrvhy";

// UDP and CoAP class
WiFiUDP udp;
Coap coap(udp);

// LED STATE
bool LEDSTATE;

void connectToWifi();
void setupCallbacks();

void setup() {
    Serial.begin(115200);
    connectToWifi();
    // LED State
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);
    LEDSTATE = true;
    setupCallbacks();
    // start coap server/client
    coap.start();
}

void loop() {
    delay(1000);
    coap.loop();
}

void connectToWifi() {
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
}

void setupCallbacks() {
    Serial.println("Setup Callback Light");
    coap.server(callback_light, "light");

    // client response callback.
    // this endpoint is single callback.
    Serial.println("Setup Response Callback");
    coap.response(callback_response);
}
