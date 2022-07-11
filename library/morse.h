#ifndef Mourse_h
#define Mourse_h

#include "Arduino.h"

class Morse{
    public:
        Morse(uint8_t buzzerPin);
        void buzzer(char alphabet);

   private:
        uint8_t buzzer_pin;
        void s();
        void l();
      
};

#endif
