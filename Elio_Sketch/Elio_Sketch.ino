/*
  @author Elio Baserga
  @date 26.03.2019
  @title Lichtsignal
*/

int signal1rot = 2;
int signal1orange = 3;
int signal1gruen = 4;
int signal2rot = 5;
int signal2orange = 6;
int signal2gruen = 7;

void setup() {
  pinMode(signal1rot, OUTPUT);
  pinMode(signal1orange, OUTPUT);
  pinMode(signal1gruen, OUTPUT);
  pinMode(signal2rot, OUTPUT);
  pinMode(signal2orange, OUTPUT);
  pinMode(signal2gruen, OUTPUT);
}

void loop() { 

  //Setzt das erste Lichtsignal auf Grün und das zweite auf Rot. Schlatet auch die Orangen aus.
  digitalWrite(signal1rot, LOW);
  digitalWrite(signal1orange, HIGH);         
  digitalWrite(signal1gruen, HIGH);
  digitalWrite(signal2rot, HIGH);
  digitalWrite(signal2orange, HIGH);
  digitalWrite(signal2gruen, LOW);

  //5 Sekunden beibehalten
  delay(5000);

  //Setzt beide Lichtsignale auf Orange
  digitalWrite(signal2gruen, HIGH);
  digitalWrite(signal1orange, LOW);
  digitalWrite(signal2orange, LOW);

  //1 Sekunden beibehalten
  delay(1000);

  //Setzt das erste Lichtsignal auf Rot und das zweite auf Grün. Schlatet auch die Orangen aus.
  digitalWrite(signal1rot, HIGH);
  digitalWrite(signal1orange, HIGH);
  digitalWrite(signal1gruen, LOW);
  digitalWrite(signal2orange, HIGH);
  digitalWrite(signal2rot, LOW);

  //5 Sekunden beibehalten
  delay(5000);

  //Setzt beide Lichtsignale auf Orange
  digitalWrite(signal1gruen, HIGH);
  digitalWrite(signal1orange, LOW);
  digitalWrite(signal2orange, LOW);

  //1 Sekunden beibehalten
  delay(1000);
}
