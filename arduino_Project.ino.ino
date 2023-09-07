#define Threshold 400

#define MQ2pin 0

float SensorValue; 

void setup() {
	Serial.begin(9600);
	Serial.println("MQ2 warming up!");
	delay(20000); 
}

void loop() {
  sensorValue = analogRead(MQ2pin); 
  
  Serial.print("Sensor Value: ");
  Serial.print(SensorValue);

  if(sensorValue > Threshold)
  {
    Serial.print(" |Smoke Detected!");
  }
  
  Serial.println("");
  delay(2000); 
}
