//Programa que envia sinal alto para a saida 7
//aguarde 1 segundo e repita novamente
void setup() {
  //definir porta 7 como saida
  pinMode (7, OUTPUT);
}

//definir a parte do código que se repete
void loop() {
  //envia sinal alto
  digitalWrite(7, HIGH);
  delay (1000);
  //envia sinal baixo
  digitalWrite(7, LOW);
  delay(1000);
}
