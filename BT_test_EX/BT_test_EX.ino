//請進入AT模式(壓著HC-05的按鈕進入)
//在序列附輸入AT，如果回傳OK就是進入AT了
//AT+NAME? 可以查名字
//AT+PSWD? 可以查配對碼
//AT+UART? 可以查鮑率
//AT+NAME=你要設的名稱 可以改名字
//AT+PSWD=配對碼 可以設定配對碼
//AT+UART=鮑率,停止位元,同位位元 可以設定鮑率
#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11);(接收腳,傳送腳)
char val;
void setup(){
  // put your setup code here, to run once:
  Serial.begin(38400);
  Serial.println("BT is ready");
  BT.begin(38400);
}
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    val = Serial.read();
    BT.print(val);
  }
  if (BT.available()){
    val = BT.read();
    Serial.print(val);
  }
}
