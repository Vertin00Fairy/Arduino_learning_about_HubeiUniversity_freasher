unsigned long previousBlinkTime; 
unsigned long onTime = 250;
unsigned long offTime = 250;  //初始熄灯亮灯时间都是250ms
bool ledOn = false;           //初始灯的状态为0
int LED_PIN = 5; 

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  millisBlink(currentMillis);
}
void millisBlink(unsigned long currentTime){
  unsigned long currentInterval = ledOn ? onTime : offTime;  //检验现在是什么状态，如果是熄灯（ledOn为0 false）那位就用offTime赋值，反之用onTime
  if (currentTime - previousBlinkTime >= currentInterval) {
    previousBlinkTime = currentTime;
    ledOn = (ledOn == 1) ? 0 : 1;  //运行第一次会把ledOn变成1，会面会一直变
    digitalWrite(LED_PIN, ledOn);
    if (ledOn == 1) {  // 刚刚变成了亮灯
      offTime += 250;  // 下一次的熄灯时间延长
      if (offTime > 2000) offTime = 250; // 防止无限变长，超过2秒就重置
      Serial.print("亮灯中... 下次熄灭时间: ");
      Serial.println(offTime);
    }else {           // 刚刚变成了熄灯
      onTime += 250;   // 下一次的亮灯时间延长
      if (onTime > 2000) onTime = 250;   // 防止无限变长
      Serial.print("熄灭中... 下次亮灯时间: ");
      Serial.println(onTime);
      }
  }
}
 
