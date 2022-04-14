/*例程led_blink.ino
 * 
 * 控制ESP32管脚2每500ms切换一次电平，使连接的led闪烁
 * 所用到函数均为Arduino通用函数，未导入其他库函数
 * 
 */

#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
