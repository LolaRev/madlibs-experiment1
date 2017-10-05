
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {

  int slideVal = analogRead(A1);
  Serial.println(slideVal);



  if (slideVal > 81 && slideVal < 299) {
Serial.println("BEAT1");
 analogWrite(11, 100);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(2000); 


    
    analogWrite(11, 750);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200); 


analogWrite(11, 100);   // turn the LED on (HIGH is the voltage level)
    delay(50);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(50); 

    

      analogWrite(11, 750);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200); 

    
    
analogWrite(11, 100);   // turn the LED on (HIGH is the voltage level)
    delay(50);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(50); 

    

      analogWrite(11, 750);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200); 
  
    
    
  } else if (slideVal > 300 && slideVal < 899) {
Serial.println("BEAT2");
 analogWrite(11, 80);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

    analogWrite(11, 100);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

    analogWrite(11, 150);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

    analogWrite(11, 100);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

     analogWrite(11, 80);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

     analogWrite(11, 80);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

    analogWrite(11, 100);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

    analogWrite(11, 150);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

    analogWrite(11, 100);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

     analogWrite(11, 80);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

     analogWrite(11, 80);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

    analogWrite(11, 100);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

    analogWrite(11, 150);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

    analogWrite(11, 100);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second

     analogWrite(11, 80);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(11, 0);    // turn the LED off by making the voltage LOW
    delay(200);                       // wait for a second
    
  } if (slideVal > 0 && slideVal < 80) {


analogWrite(11, 0);   
    
  }

}
