/*串口收发例程serial_transmit_receive
 * 
 * 使用ESP32上USB相连的串口0（UART0）连接电脑进行数据的收发,波特率设置为9600
 * 功能描述：
 *    接收电脑发送数据，判断字符为'H'，则点亮LED，并发送对应字符串信息到电脑；字符为'L'，则点亮熄灭，接着发送到电脑
 * 
 */


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char rec = Serial.read();
  if(rec == 'H'){
    digitalWrite(2, HIGH);
    Serial.println("Led on.");
  }
  if(rec == 'L'){
    digitalWrite(2, LOW);
    Serial.println("Led off.");
  }
}
