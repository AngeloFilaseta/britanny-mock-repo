#ifndef ESP_CALLBACK_LIGHT_H
#define ESP_CALLBACK_LIGHT_H

#include <Arduino.h>
#include <coap-simple.h>
#include "util/packet_message.h"

// CoAP server endpoint URL
void callback_light(CoapPacket &packet, IPAddress ip, int port) {

    extern Coap coap;
    extern bool LEDSTATE;

    Serial.println("[Light] ON/OFF");

    String message = packetMessage(packet);

    if (message.equals("0")){
        Serial.println("Led set to off...");
        LEDSTATE = false;
    } else if(message.equals("1")) {
        Serial.println("Led set to on...");
        LEDSTATE = true;
    }

    Serial.println((String)"Sending response to (IP:" + ip.toString() + ":" + port + ", id = "+ packet.messageid + ")");

    if (LEDSTATE) {
        digitalWrite(LED_BUILTIN, HIGH) ;
        coap.sendResponse(ip, port, packet.messageid, "1");
    } else {
        digitalWrite(LED_BUILTIN, LOW) ;
        coap.sendResponse(ip, port, packet.messageid, "0");
    }
    
}

#endif //ESP_CALLBACK_LIGHT_H
