#ifndef Display_h
#define Display_h

#include "Arduino.h"

class Display{
    public:
        void show(char alphabet);
        
    private: 
        void reset();
        void light(int pin[2]);
        void turn_matrix_to_display(int matrix[5][4]);

};

#endif