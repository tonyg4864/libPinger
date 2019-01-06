#include "PingerController.h"

void testPing(int pin){
    int cmDist = ping_cm(pin);                 // Get cm distance from Ping)))
    print("cmDist = %d\n", cmDist);           // Display distance
    pause(200);                               // Wait 1/5 second
}

int getPingCMDistance(int pin){
    int cmDist = ping_cm(pin);                 // Get cm distance from Ping)))
    print("cmDist = %d\n", cmDist);           // Display distance
    pause(200);                               // Wait 1/5 second
    return cmDist;
}