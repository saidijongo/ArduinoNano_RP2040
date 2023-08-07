// LEDs 핀 구성
const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]); 

void setup() {
  // 아웃풋 정하기
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // LED 하나씩 깜빡시키기
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn LED on
    delay(500); // Wait for 0.5 seconds
    digitalWrite(ledPins[i], LOW); // Turn LED off
  }

  // 30밀리 대기
  delay(500);

  // LED들 다 같이 한번에 켜놓기
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); 
  }
  delay(1000); // 1sec 대기
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW); // LED들 다 같이 한번에 켜놓기
  }
  delay(1000); // 1sec 대기
}
