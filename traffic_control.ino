
int red = 8;
int yellow = 9;
int green = 10;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {

    char signal = Serial.read();

    if(signal == 'A') {
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, HIGH);

      delay(5000);

      digitalWrite(green, LOW);
      digitalWrite(red, HIGH);
    }
  }
}
