#include "display.h"
#include "Arduino.h"

#define p1 7
#define p2 6
#define p3 5
#define p4 4
#define p5 3

int leds[5][4][2] = {
  { {p1, p2}, {p2, p1}, {p2, p3}, {p3, p2} },
  { {p3, p4}, {p4, p3}, {p4, p5}, {p5, p4} },
  { {p1, p3}, {p3, p1}, {p2, p4}, {p4, p2} },
  { {p3, p5}, {p5, p3}, {p1, p4}, {p4, p1} },
  { {p2, p5}, {p5, p2}, {p1, p5}, {p5, p1} }
};

//reset all pins to high impedance
void Display::reset(){
  for(int i=3; i<8; i++)
  pinMode(i, INPUT);
}

//turn on specific led
void Display::light(int pins[2]){
  pinMode( pins[0], OUTPUT );
  digitalWrite( pins[0], HIGH );

  pinMode( pins[1], OUTPUT );
  digitalWrite( pins[1], LOW );
}

//light up leds
void Display::turn_matrix_to_display(int matrix[5][4]){
  int time = 0;
  int duration = 100;

  while (time < duration){
      for(int i=0; i<5; i++){
          for(int a=0; a<4; a++){

          reset();
          if( matrix[i][a] == 1)
              light(leds[i][a]);
              delayMicroseconds(500);
              
          }
      }
      time ++;
  }
  reset();
}

void Display::show(char alphabet){
      
  switch (alphabet){
    case 'n':{
      int matrix[5][4] = {
        {1,1,0,1},
        {1,1,0,1},
        {1,0,1,1},
        {1,0,1,1},
        {1,0,0,1}
      };
    
      turn_matrix_to_display(matrix);
      break;
    }
    
    case 'e':{
      int matrix[5][4] = {
        {1,1,1,1},
        {1,0,0,0},
        {1,1,1,0},
        {1,0,0,0},
        {1,1,1,1}
      };
  
      turn_matrix_to_display(matrix);
      break;
    }
    
    case 'v':{
      int matrix[5][4] = {
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {0,1,1,0},
        {0,1,1,0}
      };

      turn_matrix_to_display(matrix);
      break;
    }
    
    case 'r':{
        int matrix[5][4] = {
          {1,1,1,0},
          {1,0,0,1},
          {1,1,1,0},
          {1,0,1,0},
          {1,0,0,1}
        };
      turn_matrix_to_display(matrix);
      break;
    }
    
    case 'g':{
      int matrix[5][4] = {
          {1,1,1,1},
          {1,0,0,0},
          {1,0,1,1},
          {1,0,0,1},
          {1,1,1,1}
        };

      turn_matrix_to_display(matrix);
      break;
    }
    
    case 'o':{
      int matrix[5][4] = {
          {1,1,1,1},
          {1,0,0,1},
          {1,0,0,1},
          {1,0,0,1},
          {1,1,1,1}
        };

      turn_matrix_to_display(matrix);
      break;
    }
    
    case 'a':{
      int matrix[5][4] = {
          {0,1,1,0},
          {0,1,1,0},
          {1,0,0,1},
          {1,1,1,1},
          {1,0,0,1}
      };

      turn_matrix_to_display(matrix);
      break;
    }
    
    case 'i':{
      int matrix[5][4] = {
        {0,1,1,0},
        {0,1,1,0},
        {0,1,1,0},
        {0,1,1,0},
        {0,1,1,0}
      };

      turn_matrix_to_display(matrix);
      break;
    }
    
    case 'y':{
      int matrix[5][4] = {
        {1,0,0,1},
        {1,1,1,1},
        {0,1,1,0},
        {0,1,1,0},
        {0,1,1,0}
      };

      turn_matrix_to_display(matrix);
      break;
    }
    
    case 'u':{
      int matrix[5][4] = {
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,1,1,1}
      };

      turn_matrix_to_display(matrix);
      break;
    }
        
    case 'p':{
      int matrix[5][4] = {
        {1,1,1,0},
        {1,0,0,1},
        {1,1,1,0},
        {1,0,0,0},
        {1,0,0,0}
      };
    
      turn_matrix_to_display(matrix);
      break;
    }
  }
}