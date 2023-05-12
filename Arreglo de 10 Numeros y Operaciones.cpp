#include <iostream>
#include <conio.h>

using namespace std;

int main() {
  double arrayEntrada[10];
  double arraySalida[5];
  double sumaPositivos = 0, sumaNegativos = 0;
  double cantidadPositivos = 0, cantidadNegativos = 0, cantidadNeutros = 0;
  cout <<"Este programa ingresa 10 digitos y los almacena en un arreglo de numeros reales\n"<< endl;
  for(int i=0; i<10; i++){
    cout << "Ingrese el digito No. " << i+1 << ": ";
    cin >> arrayEntrada[i];
  }
  
  for(int i=0; i<10; i++){
    if(arrayEntrada[i] > 0){
      sumaPositivos += arrayEntrada[i];
      cantidadPositivos++;
    }else if(arrayEntrada[i] < 0){
      sumaNegativos += arrayEntrada[i];
      cantidadNegativos++;
    }else{
      cantidadNeutros++;
    }
  }
  cout << "La cantidad de numeros positivos es: " << cantidadPositivos << endl;
  cout << "La cantidad de numeros negativos es: " << cantidadNegativos << endl;
  cout << "La cantidad de numeros neutros/ceros es: " << cantidadNeutros << endl;
  cout << "La suma de los numeros positivos es: " << sumaPositivos << endl;
  cout << "La suma de los numeros negativos es: " << sumaNegativos << endl;
 
 
  return 0;
}