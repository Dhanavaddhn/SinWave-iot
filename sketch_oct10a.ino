int x = 0;
float y = 0.0;

void setup() {
  Serial.begin(9600);

}

void loop() {

  Serial.printf("%f %f %d\n",sin(y + 2),cos(y + 2),0);
  y = y + 0.1;

  delay(1000);
}
