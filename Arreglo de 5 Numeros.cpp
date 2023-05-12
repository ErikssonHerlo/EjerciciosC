#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
  double arrayEntrada[5];
  double arraySalida[5];
   int aux = 1, fibonacci = 0, limite, init = 1;
  cout <<"Este programa 5 digitos y los almacena en un arreglo de numeros reales\n"<< endl;
  for(int i=0; i<5; i++){
    cout << "Ingrese el digito No. " << i+1 << ": ";
    cin >> arrayEntrada[i];
  }
  cout << "El arreglo de numeros reales resultante es: " << endl;
  for(int i=0; i<5; i++){
    arraySalida[i] = pow(arrayEntrada[i],i);
    cout<<"("<<arrayEntrada[i]<<")"<<"^"<<i<<" = "<<arraySalida[i]<<endl;
  }

 
  return 0;
}