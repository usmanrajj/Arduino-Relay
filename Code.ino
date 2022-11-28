/*
Rajj YT
Full Video :-
https://youtu.be/ROVhxbN7l7U

Circuit Diagram :-
https://github.com/usmanrajj/Arduino-Relay
*/

int led = 2;              		// connect led with pin  2 as circuit digram

void setup()
{
pinMode(led,OUTPUT);      		// Show that led (pin 2) act as output
Serial.begin(9600);      		// initialize serial monitor at 9600
}

void loop()
{
  // Led :- ON

Serial.println("Led is ON");	// Show led is High on the serial monitor
digitalWrite(led ,LOW);         // LOW means turn on Relay so Light will on (Normal Close Condition)
delay(3000);                    // wait here for 3 second
  
  // Led :- OFF

Serial.println("Led is OFF");   // show on serial monitor that led 1 is off
digitalWrite(led,HIGH);		// HIGH means turn Off Relay so Light will off(Normal close Condition)
delay(3000);                    // wait for 3 second 
}