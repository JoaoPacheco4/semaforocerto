// C++ code
//
const int botao = 0;
const int bota = 1;
const int bot = 2;
int cond = 3;
int con = 4;
int co = 5;
void setup()
{
 pinMode(9, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(botao, INPUT);
 pinMode(bota, INPUT);
 pinMode(bot, INPUT);
}

void loop()
{
  //PISCA ALERTA
  cond = digitalRead(botao);
  if(cond == HIGH) {
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(500);
  }
  
  //SETA DIREITA
  con = digitalRead(bota);
  if(cond == HIGH) {
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(500);
  }
  
  //SETA ESQUERDA
  co = digitalRead(bot);
  if(cond == HIGH) {
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(500);
  } 
}