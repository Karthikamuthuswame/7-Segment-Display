
#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

void setup() {
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
}

void loop() {
  displayDigit(0);
  delay(1000);
  displayDigit(1);
  delay(1000);
  displayDigit(2);
  delay(1000);
  displayDigit(3);
  delay(1000);
  displayDigit(4);
  delay(1000);
  displayDigit(5);
  delay(1000);
  displayDigit(6);
  delay(1000);
  displayDigit(7);
  delay(1000);
  displayDigit(8);
  delay(1000);
  displayDigit(9);
  delay(1000);
}
void displayDigit(int digit) {
  switch (digit) {
    case 0:
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, LOW);
      break;
    case 1:
      break;
    default:
      break;
  }
}
