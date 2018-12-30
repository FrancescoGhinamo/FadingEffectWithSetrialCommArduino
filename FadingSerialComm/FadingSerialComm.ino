
const int analogOut = 11;
const int sensorIn = A0;

void setup() {
  pinMode(analogOut, OUTPUT);
  pinMode(sensorIn, INPUT);

  Serial.begin(9600);

}

void loop() {
  int readValue = analogRead(sensorIn);
  int parsedValue = map(readValue, 0, 1023, 0, 255);
  parsedValue = constrain(parsedValue, 0, 255);
  Serial.println(parsedValue);

  analogWrite(analogOut, parsedValue);
  delay(1);

}
