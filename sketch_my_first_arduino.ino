/*这段程序是让5号输出让led灯闪烁1秒间隔1秒后将闪烁时间和熄灭时间都增加0.25s的程序*/
unsigned long lighttime = 1000;
unsigned long lowtime = 250;
void setup() {
  pinMode(5,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(5,HIGH);
  delay(lighttime);
  digitalWrite(5,LOW);
  delay(lowtime);
  lighttime = lighttime + 250;
  lowtime = lowtime + 250;           //每次循环都加0.25s的熄灭和点亮时间
  // put your main code here, to run repeatedly:
}
