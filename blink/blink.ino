void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//设置13号引脚为输出模式
  pinMode(12,OUTPUT);//设置12号引脚为输出模式
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(500);// 单位是毫秒
  digitalWrite(13,LOW);
  delay(500);
}
