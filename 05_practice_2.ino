#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  
  toggle = toggle_state(toggle);  // toggle = 0
  digitalWrite(PIN_LED, toggle);  // 켜짐
  delay(1000);
  
  while(count++<5){
    toggle = 1;
    digitalWrite(PIN_LED, toggle);  // 꺼짐
    delay(100);
    toggle = 0;
    digitalWrite(PIN_LED, toggle);  // 켜짐
    delay(100);
    Serial.println(count);
  }
  toggle = 1;
  digitalWrite(PIN_LED, toggle);  // 꺼짐
  while(1){   //infinite loop

  }
}

int toggle_state(int toggle){
  return toggle;
}