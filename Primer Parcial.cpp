#include <iostream>
#include <conio.h>

using namespace std;
bool verificador(int numero);
int main() {
   int numero =0;
  cout <<"Este programa imprime un mensaje de CUMPLE o NO CUMPLE si un numero ingresado es igual a la suma de todos sus divisores "<< endl;


  while(numero <= 0) {
    cout << "El Numero debe ser Mayor a 0"<<endl;
    cout << "Ingrese un numero para el calculo: ";
    cin >> numero;
  }

  if(verificador(numero)){
      cout << "CUMPLE" << endl;
    } else {
      cout << "NO CUMPLE" << endl;
    }
  
  return 0;
}


bool verificador(int numero){
  int suma = 0;
for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;
            cout<<suma<<"";
        }
    }
    if (suma == numero) {
        return true;
    }
  return false;
}

