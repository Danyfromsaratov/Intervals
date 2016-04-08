Servo myservo; 
int echoPin = 9; 
int trigPin = 8; 
int cm; 
void setup() 
{ 
myservo.attach(6); 
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 

} 

void servo(int cm) 
{ 

if (cm>=10 && cm<40) 
{ 
myservo.write(45); 
} 
else { 
if (cm>=40 && cm<70) 
{ 
myservo.write(90); 
} 
else { 
if (cm>=70 && cm<=100 ){ 
myservo.write(135) ; 
} 
else 
{ 
myservo.write(5) ; 
} 
} 
}} 

void distans () 
{ 
int dist; 
digitalWrite(trigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(trigPin, LOW); 
dist = pulseIn(echoPin, HIGH); 
cm = dist / 58 ; 
Serial.print(cm); 
Serial.println(" cm"); 
servo(cm); 
} 
void loop() 
{ 
distans(); 
delay(2000); 
}