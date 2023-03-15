# Plant Watering Alert System
Ever wished your plants could tell you when they need watering?
Well, with an Arduino they can!

## Installation
```console
$ Attach all the required component
$ Complete the circuit (ref: images and specification.txt files)
$ Open the Arduino IDE and Upload the Source code
$ output will shown via LED's and Serial Monitor
```

# _____________ THE SPEC : MAKE YOUR HOUSEPLANT TALK _____________

## The physical device:
   1. computer
   2. USB A/B cable
   3. Arduino uno
   4. BreadBoard
   5. Plant

## IDE:
   1. Arduino IDE
   2. Language -> C Programming

## Requirement to build the Physical Device:
   1 Arduino
   1 solderless breadboard
   1 LED
   1 10K Ohm resistor
   2 galvanized nails
   6 short pieces of jumper wire
   2 long pieces of jumper wire

## Connect the moisture sensor:
   1. Connect a short jumper wire from the GND pin on the Arduino to slot D15 on the breadboard.
   3. Connect a short jumper wire from the 0 analog input pin to slot D10 on the breadboard.
   2. Connect the 10K Ohm resistor from slot C15 on the breadboard to slot C10.
   4. Take one of the galvanized nails, and connect the wire attached to it to slot B10.
   5. Connect a short jumper wire from the 5V pin on the Arduino to slot C5 on the breadboard.
   6. Take the other galvanized nail, and connect the wire attached to it to slot B5.

## For C code:
   Read from the moisture sensor
   Write to the LED
   Write to the serial port
    
## Here are some useful Arduino functions:
   1. void pinMode(int pin, int mode)
   Tells the Arduino whether the digital pin is an input or output. mode can be either
   INPUT or OUTPUT.
   
   2. int digitalRead(int pin)
   Reads the value from the digital pin. The return value can be either HIGH or LOW.
   
   3. void digitalWrite(int pin, int value)
   Writes a value to a digital pin. value can be either HIGH or LOW.

   4. int analogRead(int pin)
   Reads the value from an analog pin. The return value is between 0 and 1023.

   5. void analogWrite(int pin, int value)
   Writes an analog value to a pin. value is between 0 and 255.
   
   6. void Serial.begin(long speed)
   Tells the Arduino to start sending and receiving serial data at speed bits per second.

   You usually set speed to 9600.
   7. void Serial.println(val)
   Prints data to the serial port. val can be any data type.

   8. void delay(long interval)
   Pauses the program for interval milliseconds.
   You’ll need some of these to write the program.

## The finished product:
   You’ll know your Arduino project is complete when you
   put the moisture sensor in your plant’s soil, connect the
   Arduino to your computer, and start getting status updates
   about your plant.
