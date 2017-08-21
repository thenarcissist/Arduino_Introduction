  digitalWrite(trigPin, LOW);  // Added this line
   delayMicroseconds(2); // Added this line
   digitalWrite(trigPin, HIGH);
 //  delayMicroseconds(1000); - Removed this line
   delayMicroseconds(10); // Added this line
   digitalWrite(trigPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   distance = (duration/2) / 29.1;