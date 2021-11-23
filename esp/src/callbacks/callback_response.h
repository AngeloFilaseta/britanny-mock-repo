#ifndef ESP_CALLBACK_CLIENT_H
#define ESP_CALLBACK_CLIENT_H

#include <Arduino.h>
#include <coap-simple.h>
#include "util/packet_message.h"

// CoAP client response callback
void callback_response(CoapPacket &packet, IPAddress ip, int port) {
    Serial.println("[Coap Response got]");
    Serial.println(packetMessage(packet));
}

#endif //ESP_CALLBACK_CLIENT_H
