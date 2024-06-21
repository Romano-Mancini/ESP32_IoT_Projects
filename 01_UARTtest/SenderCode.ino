int i = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  i++;
  Serial.print("Data sent #");
  Serial.println(i);
  delay(1200);
}

