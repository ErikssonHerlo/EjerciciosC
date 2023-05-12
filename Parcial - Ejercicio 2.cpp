#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
    const int size = 10; // Tamaño del arreglo
    int arr[size]; // Declaración del arreglo
    srand(time(NULL)); // Semilla para el generador de números aleatorios
    
    // Generación de números aleatorios diferentes a 0 en un intervalo de -50 a 50
    for (int i = 0; i < size; i++) {
        int num = 0;
        do {
            num = rand() % 101 - 50;
        } while (num == 0 || find(arr, arr + i, num) != arr + i);
        arr[i] = num;
    }
    
    // Impresión del arreglo original
    cout << "Arreglo original:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Elemento " << i << ": " << arr[i] << endl;
    }
    
    // Ordenamiento del arreglo mediante el algoritmo de selección
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    
    // Impresión del arreglo ordenado
    cout << "Arreglo ordenado:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Elemento " << i << ": " << arr[i] << endl;
    }
    
    return 0;
}
