#include <SoftwareSerial.h>
int BluetoothData; 
bool ledstate=false;
#define _pin_RX 0
#define _pin_TX 1
unsigned long interval=1000; // the time we need to wait
unsigned long previousMillis=0; // millis() returns an unsigned long.
 
SoftwareSerial HC(_pin_RX, _pin_TX);
int a=2,b=3,c=4,d=5,e=6,f=7,g=8,h=9,i=10,j=11;
// the setup function runs once when you press reset or power the board
void setup() {
   HC.begin(9600);
  HC.println("Bluetooth Enabled! Press 1 to turn LED13 ON, 0 to turn OFF.");
pinMode(a,OUTPUT);pinMode(b,OUTPUT);pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);pinMode(e,OUTPUT);pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);pinMode(h,OUTPUT);pinMode(i,OUTPUT);
  pinMode(j,OUTPUT);
  // initialize digital pin LED_BUILTIN as an output.
}

// the loop function runs over and over again forever
void loop() {
  if (ledstate==true){
  kedip();
  }
  else if (ledstate==false){
   ledstate=false; 
}
unsigned long currentMillis = millis(); // grab current time
 
 // check if "interval" time has passed (1000 milliseconds)
 if ((unsigned long)(currentMillis - previousMillis) >= interval) {
  if(HC.available()){
  BluetoothData=HC.read();
       if(BluetoothData=='X'){
      ledstate=false;
      delay(1000);
      semuanyala();
      HC.println("LED10 is ON");
    }
   else if (BluetoothData=='x'){
     ledstate=false;
      delay(1000);
      semuamati();
      HC.println("LED10 is OFF");
    }
    else if (BluetoothData=='Z'){
 ledstate=true;                  
      HC.println("LED Berkedip");
    }
    delay(100);
  }
   previousMillis = millis();
 }
  
}

void semuanyala(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(j, HIGH);
}
void semuamati(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
  digitalWrite(i, LOW);
  digitalWrite(j, LOW);
}
void kedip(){
        digitalWrite(a, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(j, HIGH);
  delay(1000);                     // wait for a second
 digitalWrite(a, LOW);
  digitalWrite(b, LOW);    // turn the LED off by making the voltage LOW
 digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
 digitalWrite(h, LOW);
 digitalWrite(i, LOW);
 digitalWrite(j, LOW);
  delay(1000);
  
}
