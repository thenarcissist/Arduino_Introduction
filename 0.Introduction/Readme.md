# Introduction

### What is a Microcontroller?
A microcontroller (or MCU for microcontroller unit) is a small computer on a single integrated circuit. In modern terminology, it is a system on a chip or SoC. A microcontroller contains one or more CPUs (processor cores) along with memory and programmable input/output peripherals - Wikipedia  :stuck_out_tongue:

At the fundamental level, microcontrollers are just tiny computers and are found in vehicles, robots, office machines, medical devices, mobile radio transceivers, vending machines and home appliances among other devices.


There are Many Microcontrollers available in the market.
We use Arduino because it is open source, flexible, easy to use, inexpensive and most importantly has a large online community.

### Different types Arduinos in market
  * [Arduino Uno](https://store.arduino.cc/usa/arduino-uno-rev3)
  * [Arduino Nano ](https://store.arduino.cc/usa/arduino-nano)
  * [Arduino Micro](https://store.arduino.cc/usa/arduino-micro)
  * [Arduino Mega](https://store.arduino.cc/usa/arduino-mega-2560-rev3)
  * [Arduino Duemilanove](https://www.arduino.cc/en/Main/arduinoBoardDuemilanove)
  * And many more 

## Arduino Uno Pin Diagram

  ![Image](https://www.robomart.com/image/catalog/RM0058/01.jpg)

### Different Pins Available in Arduino Uno
   [Link](https://www.arduino.cc/en/Reference/Board)

   * Digital I/O Pins  - 14 (of which 6 provide PWM output)
   * Analog Input Pins - 6
   * Commucation Pins (Digital Pins 0 and 1)
   * Power Pins
## Arduino IDE

 [Link](https://www.arduino.cc/en/Guide/Environment) <br/>

 ![Image](https://cdn.sparkfun.com/assets/learn_tutorials/3/4/9/Arduino_template.png)

## Few Basic Inbuilt Functions
  [Link](https://www.arduino.cc/en/Reference/HomePage)
### pinMode(pin,Mode)
   Configures the specified pin to behave either as an input or an output. 

   The only time you MUST call pinMode() is to set up a pin for use as a digital OUTPUT.  As a best practice, if you plan to use a pin as a digital INPUT or analog OUTPUT (PWM), you should call pinMode() in setup(), even though it is optional.  That way when you, or someone else, reads your code, you quickly see the pins in use.
   ```
   int ledPin = 13;                 // LED connected to digital pin 13

   void setup()
   {
     pinMode(ledPin, OUTPUT);      // sets the digital pin as output
   }
   ```
### digitalRead(pin)
   Reads the value from a specified digital pin, either HIGH or LOW.
   ```
  void loop()
  {
    val = digitalRead(inPin);   // read the input pin
  }
   ```
### digitalWrite(pin,VALUE)

  Write a HIGH or a LOW value to a digital pin.

  If the pin has been configured as an OUTPUT with pinMode(), its voltage will be set to the corresponding value: 5V (or 3.3V on 3.3V boards) for HIGH, 0V (ground) for LOW.

  If the pin is configured as an INPUT, digitalWrite() will enable (HIGH) or disable (LOW) the internal pullup on the input pin. It is recommended to set the pinMode() to INPUT_PULLUP to enable the internal pull-up resistor. See the digital pins tutorial for more information.

  NOTE: If you do not set the pinMode() to OUTPUT, and connect an LED to a pin, when calling digitalWrite(HIGH), the LED may appear dim. Without explicitly setting pinMode(), digitalWrite() will have enabled the internal pull-up resistor, which acts like a large current-limiting resistor.
  ```
  void loop()
  {
    digitalWrite(ledPin, HIGH);   // sets the LED on
    delay(1000);                  // waits for a second
    digitalWrite(ledPin, LOW);    // sets the LED off
    delay(1000);                  // waits for a second
  }
  ```
### analogRead(pin)
  Reads the value from the specified analog pin.

  The Arduino board contains a 6 channel (8 channels on the Mini and Nano, 16 on the Mega), 10-bit analog to digital converter. This means that it will map input voltages between 0 and 5 volts into integer values between 0 and 1023. This yields a resolution between readings of: 5 volts / 1024 units or, .0049 volts (4.9 mV) per unit. 

  ```
  void loop()

  {

    val = analogRead(analogPin);    // read the input pin

    Serial.println(val);             // debug value

  }
  ```

### analogWrite(pin,Value)
  Writes an analog value (PWM wave) to a pin. Can be used to light a LED at varying brightnesses or drive a motor at various speeds. 
  After a call to analogWrite(), the pin will generate a steady square wave of the specified duty cycle until the next call to analogWrite() (or a call to digitalRead() or digitalWrite() on the same pin). The frequency of the PWM signal on most pins is approximately 490 Hz. On the Uno and similar boards, pins 5 and 6 have a frequency of approximately 980 Hz. Pins 3 and 11 on the Leonardo also run at 980 Hz.

  On most Arduino boards (those with the ATmega168 or ATmega328), this function works on pins 3, 5, 6, 9, 10, and 11. On the Arduino Mega, it works on pins 2 - 13 and 44 - 46. 
  ```
  void loop()

  {

    val = analogRead(analogPin);   // read the input pin

    analogWrite(ledPin, val / 4);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255

  }
  ```
### Serial.begin(rate)
  Sets the data rate in bits per second (baud) for serial data transmission. 
  For communicating with the computer, use one of these rates: 300, 600, 1200, 2400, 4800, 9600, 14400, 19200, 28800, 38400, 57600, or 115200. You can, however, specify other rates - for example, to communicate over pins 0 and 1 with a component that requires a particular baud rate.

  An optional second argument configures the data, parity, and stop bits. The default is 8 data bits, no parity, one stop bit.

  ```
  void setup() {
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  }
  ```
### Serial.println(data)
  Prints data to the serial port as human-readable ASCII text. 
  This command can take many forms. Numbers are printed using an ASCII character for each digit. Floats are similarly printed as ASCII digits, defaulting to two decimal places. Bytes are sent as a single character.

  ```
  void loop() {
  // read the analog input on pin 0:
  analogValue = analogRead(0);

  // print it out in many formats:
  Serial.println(analogValue);       // print as an ASCII-encoded decimal
  Serial.println(analogValue, DEC);  // print as an ASCII-encoded decimal
  Serial.println(analogValue, HEX);  // print as an ASCII-encoded hexadecimal
  Serial.println(analogValue, OCT);  // print as an ASCII-encoded octal
  Serial.println(analogValue, BIN);  // print as an ASCII-encoded binary

  // delay 10 milliseconds before the next reading:
  delay(10);
  }
  ```
