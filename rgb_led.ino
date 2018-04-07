#define RED_PIN     5
#define GREEN_PIN   4
#define BLUE_PIN    3

#define DELAY_MS    500

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  red();
  delay(DELAY_MS);
  green();
  delay(DELAY_MS);
  blue();
  delay(DELAY_MS);
  off();
  delay(DELAY_MS);
}

void red() {
  digitalWrite(RED_PIN, 255);
  digitalWrite(GREEN_PIN, 0);
  digitalWrite(BLUE_PIN, 0);
}

void green() {
  digitalWrite(RED_PIN, 0);
  digitalWrite(GREEN_PIN, 255);
  digitalWrite(BLUE_PIN, 0);
}

void blue() {
  digitalWrite(RED_PIN, 0);
  digitalWrite(GREEN_PIN, 0);
  digitalWrite(BLUE_PIN, 255);
}

void off() {
  digitalWrite(RED_PIN, 0);
  digitalWrite(GREEN_PIN, 0);
  digitalWrite(BLUE_PIN, 0);
}

