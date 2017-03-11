#include "DHT.h"                // DHT11 温湿度感应器
#define DHTPIN 7                // DHT11 数字引脚
#define DHTTYPE DHT11           // DHT 类型,还有诸如 DHT22

DHT dht(DHTPIN, DHTTYPE);       // 初始化 DHT11

void setup() {
  Serial.begin(9600);
  dht.begin();            // 启动 DHT11
}

void loop() {
  
  delay(2000);           // 每两秒检测一次
 
  float h = dht.readHumidity();           // 读取湿度
  float t = dht.readTemperature();        // 读取摄氏度

  // 判断是否能够读取到值
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
  Serial.print("Humidity:");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature:");
  Serial.print(t);
  Serial.println(" °C ");
  
}

