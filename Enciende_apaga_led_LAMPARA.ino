/*Name: Alba Guimerans
 * 27/04/2021
 * Enciende y apaga led
 * 
 */


const int LED=6;
const int BOTON=10;
int val;
int previoVal;
bool encenderLed = false;
void setup(){
pinMode(LED,OUTPUT);
pinMode(BOTON,INPUT);
pinMode(LED,OUTPUT);
pinMode(BOTON,INPUT);
}
void loop(){
val=digitalRead(BOTON);
if  (val==HIGH && previoVal == LOW){
  encenderLed = !encenderLed;
}

if (encenderLed){
  digitalWrite(LED,HIGH);
}
else { digitalWrite(LED,LOW);
}
previoVal=val;
}
