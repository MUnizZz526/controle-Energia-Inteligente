
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int potenciometro = A0;
const int ledprimario = 9;
const int ledsecundario = 3;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(ledprimario, OUTPUT);
  pinMode(ledsecundario, OUTPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

void loop() {
  int nivel = analogRead(potenciometro);
  Serial.println(nivel);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nivel: ");
  lcd.print(nivel);

  if (nivel > 800){
    digitalWrite(ledprimario , HIGH);
    digitalWrite(ledsecundario , HIGH);
  } else if(nivel > 500){
    digitalWrite(ledprimario, HIGH);
    digitalWrite(ledsecundario, LOW);
  } else {
    digitalWrite(ledprimario , LOW);
    digitalWrite(ledsecundario, LOW);
  }

  delay(500);
}
