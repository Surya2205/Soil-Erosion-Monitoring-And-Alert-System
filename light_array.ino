void setup() {
Serial.begin(9600);
}

void loop() {
  int a=digitalRead(12);
  int b=digitalRead(11);
  int c=digitalRead(10);
  int d=digitalRead(9);  
  int e=digitalRead(8);
  int f=digitalRead(7);
  int g=digitalRead(6);
  int h=digitalRead(5);  
//  Serial Monitor
Serial.print(a);
Serial.print("/");
Serial.print(b);
Serial.print("/");
Serial.print(c);
Serial.print("/");
Serial.print(d);
Serial.print("/");
Serial.print(e);
Serial.print("/");
Serial.print(f);
Serial.print("/");
Serial.print(g);
Serial.print("/");
Serial.print(h);
Serial.println();
delay(1000);
}
