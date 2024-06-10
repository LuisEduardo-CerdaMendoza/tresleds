int aa = 7;
int bb = 8;
int cc = 9;
int dd = 10;
int g = 11;
int gg = 12;
int ggg = 13;

void setup() {
  // put your setup code here, to run once:

  pinMode(aa, INPUT);
  pinMode(bb, INPUT);
  pinMode(cc, INPUT);
  pinMode(dd, INPUT);
  pinMode(g, OUTPUT);
  pinMode(gg, OUTPUT);
  pinMode(ggg, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(aa) == LOW && digitalRead(bb) == LOW && digitalRead(cc) == LOW && digitalRead(dd) == LOW)
  {
    digitalWrite(g, LOW);
    digitalWrite(gg, LOW);
    digitalWrite(ggg, HIGH);
  }else if (digitalRead(aa) == LOW && digitalRead(bb) == LOW && digitalRead(cc) == HIGH && digitalRead(dd) == HIGH)
  {
    digitalWrite(g, LOW);
    digitalWrite(gg, HIGH);
    digitalWrite(ggg, HIGH);
  }else if (digitalRead(aa) == LOW && digitalRead(bb) == HIGH && digitalRead(cc) == HIGH && digitalRead(dd) == LOW)
  {
    digitalWrite(g, HIGH);
    digitalWrite(gg, LOW);
    digitalWrite(ggg, HIGH);
  }else if (digitalRead(aa) == HIGH && digitalRead(bb) == LOW && digitalRead(cc) == LOW && digitalRead(dd) == HIGH)
  {
    digitalWrite(g, HIGH);
    digitalWrite(gg, HIGH);
    digitalWrite(ggg, HIGH);
  }else if (digitalRead(aa) == HIGH && digitalRead(bb) == HIGH && digitalRead(cc) == LOW && digitalRead(dd) == LOW)
  {
    digitalWrite(g, HIGH);
    digitalWrite(gg, HIGH);
    digitalWrite(ggg, LOW);
  }else{
    digitalWrite(g, LOW);
    digitalWrite(gg, LOW);
    digitalWrite(ggg, LOW);
  }

}
