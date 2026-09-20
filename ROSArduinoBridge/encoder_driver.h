/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
     
#ifdef ARDUINO_ENC_COUNTER
  //The encoder pins are connected arduino mega2650 AVR pin PORTK(which are
  //analog pins A8 to A15)
  //Analog left motor encoder
  #define LEFT_ENC_PIN_A PK0  //pin A8
  #define LEFT_ENC_PIN_B PK1  //pin A9 
  
  //Connect right motor encoder
  #define RIGHT_ENC_PIN_A PK2  //pin A10
  #define RIGHT_ENC_PIN_B PK3   //pin A11
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();
