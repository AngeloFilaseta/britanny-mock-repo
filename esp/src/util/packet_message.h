#ifndef ESP_PACKET_MESSAGE_H
#define ESP_PACKET_MESSAGE_H

#include <Arduino.h>
#include <coap-simple.h>

String packetMessage(CoapPacket &packet) {
    char p[packet.payloadlen + 1];
    memcpy(p, packet.payload, packet.payloadlen);
    p[packet.payloadlen] = NULL;
    return p;
}

#endif