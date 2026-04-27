int sensorPin = A0;
int redLED = 8;
int greenLED = 9;
int value;

void setup() {
 pinMode(redLED, OUTPUT);
 pinMode(greenLED, OUTPUT);
 Serial.begin(9600);
}

void loop() {
 value = analogRead(sensorPin);
 Serial.println(value);

 if(value > 600) {   // Dry soil
   digitalWrite(redLED, HIGH);
   digitalWrite(greenLED, LOW);
 } else {            // Wet soil
   digitalWrite(redLED, LOW);
   digitalWrite(greenLED, HIGH);
 }

 delay(1000);
}