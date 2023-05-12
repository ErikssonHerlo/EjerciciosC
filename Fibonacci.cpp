#include <iostream>
#include <conio.h>

using namespace std;

int main() {
   int aux = 1, fibonacci = 0, limite, init = 1;
  cout <<"Este programa imprime la sucesion de fibonacci desde \
    1 hasta N, \nsiendo N el numero ingresado por el usuario\n"<< endl;
  cout << "Ingrese un numero para la sucesion de fibonacci: ";
  cin >> limite;

  if(limite > 0) {
    while(init<=limite){
        cout << "[" << fibonacci << "] ";
        aux += fibonacci; /* lo mismo que aux = aux + fib; */
        fibonacci = aux - fibonacci;
        init++;
    }
  } else {
    cout << "El numero debe ser mayor a cero!!" << endl;
  }
  cout << "\n";
  return 0;
}