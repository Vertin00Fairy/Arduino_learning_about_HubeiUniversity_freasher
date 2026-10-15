/*这段程序是让5号输出让led灯闪烁1秒间隔1秒后将闪烁时间和熄灭时间都增加0.25s的程序*/
unsigned long lighttime = 1000;//初始亮灯时间为1s
unsigned long lowtime = 250;//初始熄灯时间为250ms
void setup() {
  pinMode(5,OUTPUT);
  //5号银角输出

}

void loop() {
  digitalWrite(5,HIGH);
  delay(lighttime);//将整个代码延后lighttime
  digitalWrite(5,LOW);
  delay(lowtime);
  lighttime = lighttime + 250;
  lowtime = lowtime + 250;           //每次循环都加0.25s的熄灭和点亮时间

}
