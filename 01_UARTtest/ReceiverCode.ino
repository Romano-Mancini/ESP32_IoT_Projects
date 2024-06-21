String reading;

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available()) {
    reading = Serial.readString();
    Serial.print("Data received: ");
    Serial.print(reading);
  }
}