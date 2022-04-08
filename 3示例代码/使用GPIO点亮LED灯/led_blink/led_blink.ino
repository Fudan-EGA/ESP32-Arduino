/*例程led_blink.ino
 * 
 * 控制ESP32管脚2每500ms切换一次电平，使连接的led闪烁
 * 所用到函数均为Arduino通用函数，未导入其他库函数
 * 
 */

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); //设置管脚2为输出模式
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH); //设置管脚2为高电平
  delay(500);  //延时500ms
  digitalWrite(2, LOW); //设置管教2 为低电平
  delay(500);
}
