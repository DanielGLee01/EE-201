// https://wokwi.com/projects/345891950346371666

#define pot1 A5 // Defines Potentiometer
#define LED 8 // Defines LED

void setup() {
  // put your setup code here, to run once:
  pinMode(pot1, INPUT);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int LEDstatus = analogRead(pot1);
  digitalWrite(8, HIGH);
  delay(LEDstatus);
  digitalWrite(8, LOW);
  delay(LEDstatus);

  Serial.println(LEDstatus);
}
