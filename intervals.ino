const int ledPin1 = 13; 
const int ledPin2 = 12; 
const int ledPin3 = 11; 
const int ledPin4 = 10; 
const int ledPin5 = 9; 


int ledState1 = LOW; 
int ledState2 = LOW; 
int ledState3 = LOW; 
int ledState4 = LOW; 
int ledState5 = LOW; 

long previousMillis1 = 0; 
long previousMillis2 = 0; 
long previousMillis3 = 0; 
long previousMillis4 = 0; 
long previousMillis5 = 0; 

long interval1 = 1000; 
long interval2 = 500; 
long interval3 = 333; 
long interval4 = 250; 
long interval5 = 100; 


void setup() { 
pinMode(ledPin1, OUTPUT); 
pinMode(ledPin2, OUTPUT); 
pinMode(ledPin3, OUTPUT); 
pinMode(ledPin4, OUTPUT); 
pinMode(ledPin5, OUTPUT); 

} 

void loop() 
{ 

unsigned long currentMillis = millis(); 

//LedPin1 
if(currentMillis - previousMillis1 > interval1) { 
// сохраняем время последнего переключения 
previousMillis1 = currentMillis; 

// если светодиод не горит, то зажигаем, и наоборот 
if (ledState1 == LOW) 
ledState1 = HIGH; 
else 
ledState1 = LOW; 

// устанавливаем состояния выхода, чтобы включить или выключить светодиод 
digitalWrite(ledPin1, ledState1); 
} 


//LedPin2 
if(currentMillis - previousMillis2 > interval2) { 
previousMillis2 = currentMillis; 
if (ledState2 == LOW) 
ledState2 = HIGH; 
else 
ledState2 = LOW; 
digitalWrite(ledPin2, ledState2); 
} 

//LedPin3 
if(currentMillis - previousMillis3 > interval3) { 
previousMillis3 = currentMillis; 
if (ledState3 == LOW) 
ledState3 = HIGH; 
else 
ledState3 = LOW; 
digitalWrite(ledPin3, ledState3); 
} 

//LedPin4 
if(currentMillis - previousMillis4 > interval4) { 
previousMillis4 = currentMillis; 
if (ledState4 == LOW) 
ledState4 = HIGH; 
else 
ledState4 = LOW; 
digitalWrite(ledPin4, ledState4); 
} 

//LedPin5 
if(currentMillis - previousMillis1 > interval5) { 
previousMillis5 = currentMillis; 
if (ledState5 == LOW) 
ledState5 = HIGH; 
else 
ledState5 = LOW; 
digitalWrite(ledPin5, ledState5); 
} 

}

