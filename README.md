# Communication_between_two_Arduino
### How it works:
Arduino1.ino listens to a digital signal on pin 2 and prints its value (0 or 1) to the serial monitor at a baud rate of 9600. It uses the digitalRead() function to read the value.

Arduino2.ino toggles an LED on pin 8 based on a specific sequence of characters ('10') received on the serial port at a baud rate of 9600. It uses the digitalWrite() function to set the LED pin to either HIGH or LOW based on the state of the boolean variable s, which is toggled by detecting the sequence of characters using the Serial.read() function.
### This is the simulation of the Arduino structure
![image](https://github.com/Rama-Alyoubi/Communication_between_two_Arduino/assets/128150728/ba07b36e-c892-4236-8f8a-989dc009f6d1)
![image](https://github.com/Rama-Alyoubi/Communication_between_two_Arduino/assets/128150728/a4f6b223-4281-42a1-9bac-48f7d97dd617)
