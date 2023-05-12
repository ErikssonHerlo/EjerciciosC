#include <iostream>
#include <conio.h>

using namespace std;

int main() {
  double arrayEntrada[8];
  int arrayRepetidos[8] = {0};
  bool repetido = false;
  cout <<"Este programa ingresa 8 digitos y los almacena en un arreglo de numeros reales\n"<< endl;
  
  for(int i=0; i<8; i++){
    cout << "Ingrese el digito No. " << i+1 << ": ";
    cin >> arrayEntrada[i];
  }
  
  // En este ciclo contamos la frecuencia de repitencia de los numeros
  for (int i = 0; i < 8; i++) {
      for (int j = i + 1; j < 8; j++) {
          if (arrayEntrada[i] == arrayEntrada[j]) {
              arrayRepetidos[i]++;
          }
      }
  }
  // mostrar los numeros que se repiten
  for (int i = 0; i < 8; i++) {
      if (arrayRepetidos[i] > 0) {
          cout << "El numero " << arrayEntrada[i] << " se repite " << arrayRepetidos[i] + 1 << " veces" << endl;
          repetido = true;
      }
  }
  if (!repetido) {
      cout << "No se encontraron numeros repetidos" << endl;
  }
  return 0;
}