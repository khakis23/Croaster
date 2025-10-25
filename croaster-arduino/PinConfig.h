#pragma once

// Thermocouple pin assignments
#if defined(ESP8266)
#define SCK_PIN D8
#define SO_PIN D10
#define CS_PIN_BT D9
#define CS_PIN_ET D9
#elif defined(ESP32)
#define SCK_PIN D4
#define SO_PIN D5
#define CS_PIN_BT D7
#define CS_PIN_ET D6
#endif
