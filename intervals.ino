
const int ledPin8 = 8; 
const int ledPin9 = 9;
const int ledPin10 = 10;
const int ledPin12 = 12;
const int ledPin13 = 13;
int ledState8 = LOW;            
int ledState9 = LOW;   
int ledState10 = LOW;   
int ledState12 = LOW;   
int ledState13 = LOW;  
 
unsigned long previousMillis = 0;        

// constants won't change :
const long interval8 = 1000;          
const long interval9 = 500;  
const long interval10 = 333;  
const long interval12 = 250;  
const long interval13 = 200;



void setup() {
  pinMode(ledPin8, OUTPUT);
   pinMode(ledPin9, OUTPUT);
    pinMode(ledPin10, OUTPUT);
     pinMode(ledPin12, OUTPUT);
      pinMode(ledPin13, OUTPUT);
}

void loop() {
  delay(3);
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval8) {
    previousMillis = currentMillis;
    
    if (ledState8 == LOW) {
      ledState8 = HIGH;
    } else {
      ledState8 = LOW;
    }
    digitalWrite(ledPin8, ledState8);
  }

delay(3);
  unsigned long currentMillis = millis();
 if (currentMillis - previousMillis >= interval9) {
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState9 == LOW) {
      ledState9 = HIGH;
    } else {
      ledState9 = LOW;
    }
    digitalWrite(ledPin9, ledState9);
  }

  delay(3);
  unsigned long currentMillis = millis();
   if (currentMillis - previousMillis >= interval10) {
    previousMillis = currentMillis;
    if (ledState10 == LOW) {
      ledState10 = HIGH;
    } else {
      ledState10 = LOW;
    } 
    digitalWrite(ledPin10, ledState10);
  }

delay(3);
  unsigned long currentMillis = millis();
   if (currentMillis - previousMillis >= interval12) {
    previousMillis = currentMillis;

    if (ledState12 == LOW) {
      ledState12 = HIGH;
    } else {
      ledState12 = LOW;
    }
    digitalWrite(ledPin12, ledState12);
  }

  
delay(3);
   if (currentMillis - previousMillis >= interval13) {
    previousMillis = currentMillis;
    if (ledState13 == LOW) {
      ledState13 = HIGH;
    } else {
      ledState13 = LOW;
    }
    digitalWrite(ledPin13, ledState13);
  }
  
}

