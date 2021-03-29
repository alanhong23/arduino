#include "morse.h"
#include "Arduino.h"

Morse::Morse(uint8_t buzzerPin){
    buzzer_pin = buzzerPin;
}

//long buzzer time
void Morse::l(){
    tone(buzzer_pin, 500);
    delay(300);
    noTone(buzzer_pin);
    delay(150);
}

//short buzzer time
void Morse::s(){
    tone(buzzer_pin, 500);
    delay(100);
    noTone(buzzer_pin);
    delay(150);
}

void Morse::buzzer(char alphabet){
        
    switch (alphabet){
        case 'n':
            l();
            s();
            break;
        
        case 'e':
            s();
            break;
        
        case 'v':
            for(int i=0; i<3; i++)
            s();
            l();
            break;
        
        case 'r':
            s();
            l();
            s();
            break;
        
        case 'g':
            l();
            l();
            s();
            break;
        
        case 'o':
            for(int i=0; i<3; i++)
            l();
            break;
        
        case 'a':
            s();
            l();
            break;
        
        case 'i':
            s();    
            s();
            break;
        
        case 'y':
            l();
            s();
            l();    
            l();
            break;
        
        case 'u':
            s();    
            s();
            l();
            break;
            
        case 'p':
            s();
            l();
            l();
            s();
            break;
    }
}