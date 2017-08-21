int ledPin = ...;      // To-Do

int val = 0;         // variable to store the read value



void setup()

{

  pinMode(ledPin,...);   // To-Do

}



void loop()

{

  for (val = 0; val < 255; ++val)
  {
  	analogWrite(ledPin, val);  //To-Do
  }

  for (...;...; ...)
  {
  	
  }

  delay(...)...

}