#include <display.h>
#include <melody.h>
#include <morse.h>

#define buzzer_pin 9

Morse morse(buzzer_pin);
Display screen;
Melody song(buzzer_pin);

void setup(){
  //setup
  pinMode(buzzer_pin, OUTPUT);
  
  //morse code
  char word[20] = "nevergonnagiveyouup";
  
  for (int i=0; i<19; i++){
    char alphabet = word[i];
    morse.buzzer(alphabet);
   	screen.show(alphabet);
    delay(250);
  }
  song.play();
}

void loop(){
    //no need loop
}
