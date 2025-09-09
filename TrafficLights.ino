void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  //GREEN
  Signal(8);

  //YELLOW
  Signal(9);

  //RED
  Signal(10);
}

//Define a func. 'Signal' to optimize the code
void Signal(int pin) {
  digitalWrite(pin, HIGH);
  delay(4500);
  digitalWrite(pin, LOW);
}