#include <Ticker.h>

template<class T> inline Print &operator <<(Print &obj, T arg) {
  obj.print(arg);
  return obj;
}

Ticker cambiador1;
Ticker cambiador2;
Ticker cambiador3;
Ticker cambiador4;

int contador1 = 0;
int contador2 = 0;

void Funcion1() {
  contador1++;
  Serial << "Funcion 1: " << contador1 << "\n";
}

void Funcion2() {
  contador2++;
  Serial << "Funcion 2: " << contador2 << "\n";
}

void Funcion3(int n) {
  Serial << "El numero " << n << "\n";
}

void Funcion4(String *numero) {
  Serial << "Solo 1 vez" << "\n";
}

void setup() {
  Serial.begin(115200);
  cambiador1.attach(1.5, Funcion1);
  cambiador2.attach_ms(10, Funcion2);

  cambiador3.attach(2.1, Funcion3, 5);
  cambiador4.attach_ms(250, Funcion3, 20);

  cambiador5.once(5, Funcion4);
  cambiador6.once_ms(300, Funcion4);
  cambiador7.once(20, Funcion3, 30);
  cambiador8.once_ms(40, Funcion5, 10);
}

void loop() {

}
