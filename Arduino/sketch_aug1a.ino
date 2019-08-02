#include "DigiKeyboard.h"
//#include "Keyboard.h"
void fun() {
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); 
    DigiKeyboard.delay(1000);

    DigiKeyboard.print("cmd");  
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); 
    DigiKeyboard.delay(700); 
    
  }
void setup() {

 
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  fun();
//  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT | KEY_F10); 
//  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_UP_ARROW); 

//  DigiKeyboard.print("xsetroot -solid black"); 
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
// DigiKeyboard.delay(2000); 

 
  DigiKeyboard.print("hollywood");    
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
  DigiKeyboard.delay(7000);
//  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT| KEY_C); 
//  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_C); 
//  DigiKeyboard.print("exit");    
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
  
//  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, MOD_ALT_LEFT | KEY_T);        
  fun();
  DigiKeyboard.print("firefox -new-tab http://geektyper.com/scp/ & xdotool search --sync --onlyvisible --class \"Firefox\" windowactivate key F11 "); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(200);

  for(int i=0; i<20; i++) {
    DigiKeyboard.sendKeyStroke(KEY_A); 
    DigiKeyboard.delay(200);
  }
  DigiKeyboard.sendKeyStroke(KEY_1);        
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_2);          
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_3);        
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_4);          
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_5);          
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_6);          
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_7);            
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_8);          
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_9);          
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_0);          
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);          
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(MOD_SHIFT_RIGHT);          
  DigiKeyboard.delay(200);
//  DigiKeyboard.sendKeyStroke(KEY_HOME);         
  DigiKeyboard.delay(200);
//  DigiKeyboard.sendKeyStroke(KEY_END);            
  DigiKeyboard.delay(200);
//  DigiKeyboard.sendKeyStroke(KEY_TAB);            
  DigiKeyboard.delay(2000);
//  DigiKeyboard.sendKeyStroke(KEY_ESC);          
  DigiKeyboard.delay(4000);  

  fun();
  DigiKeyboard.print("mplayer -xy 4096 -geometry 50%:50% -loop 10 /home/aswinkumar99/Downloads/hacker1.mp4");   
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 

}


void loop() {

}
