
#include <Keypad.h>



const byte ROWS = 4;
const byte COLS = 4;
char keyMap [ROWS][COLS]= {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};
byte rowPins[ROWS] = {3, 4, 5, 6};
byte colPins[COLS] = {7, 8, 9, 10};
Keypad keypad = keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup(){
  serial.begin(9600);
}

void loop(){
  char key = keypad.getKey();

  if (key){
    serial.println(key);
  }
}
  
