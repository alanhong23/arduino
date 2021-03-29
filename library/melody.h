#ifndef Melody_h
#define Melody_h

#include "Arduino.h"


class Melody{
    public:
        Melody(uint8_t buzzerPin);
        void play(int tempo=140);

    private:
        uint8_t buzzer_pin;
    
};

#endif