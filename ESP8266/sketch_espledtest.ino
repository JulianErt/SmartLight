int front = 5; // Assign LED pin i.e: D1 on NodeMCU
int back = 4; 
int interior = 14; 

void setup() {

// initialize GPIO 5 as an output

pinMode(front, OUTPUT);
pinMode(back, OUTPUT);
pinMode(interior, OUTPUT);

digitalWrite(front, HIGH); // turn the LED on
digitalWrite(back, HIGH); // turn the LED on
digitalWrite(interior, HIGH); // turn the LED on

}

// the loop function runs over and over again forever

void loop() {


digitalWrite(front, HIGH); // turn the LED on
digitalWrite(back, HIGH); // turn the LED on
digitalWrite(interior, HIGH); // turn the LED on
delay(1000); // wait for a second


//digitalWrite(front, LOW); // turn the LED off
//digitalWrite(front, LOW); // turn the LED on
//digitalWrite(back, LOW); // turn the LED on
//digitalWrite(interior, LOW); // turn the LED on
//digitalWrite(interior, LOW); // turn the LED on

delay(1000); // wait for a second

}