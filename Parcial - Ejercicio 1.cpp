#include <iostream>
#include <cmath>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para llenar el arreglo con números primos
int llenarArreglo(int arr[], int num1, int num2) {
    int cantidad = 0;
    for (int i = num1; i <= num2; i++) {
        if (esPrimo(i)) {
            arr[cantidad] = i;
            cantidad++;
        }
    }
    return cantidad;
}

// Función para imprimir los elementos del arreglo
void imprimirArreglo(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "No. " << i+1 << ": " << arr[i] << endl;
    }
}

int main() {
    int num1, num2;
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];

    // Validación de entradaq
    // Llenado del arreglo con números primos
    int size = llenarArreglo(arr, num1, num2);

    // Impresión del arreglo
    cout << "Los numeros primos entre " << num1 << " y " << num2 << " son:" << endl;
    imprimirArreglo(arr, size);

    return 0;
}
