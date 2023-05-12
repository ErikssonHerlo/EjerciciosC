#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int MAX_SIZE = 12;
const int MIN_SIZE = 4;

// Función para generar una sopa de letras aleatoria
void generarSopa(char sopa[MAX_SIZE][MAX_SIZE], int size) {
    // Generar una semilla aleatoria
    srand(time(0));

    // Llenar la sopa de letras con caracteres aleatorios
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            sopa[i][j] = 'A' + rand() % 26;
        }
    }
}

// Función para imprimir la sopa de letras
void imprimirSopa(char sopa[MAX_SIZE][MAX_SIZE], int size) {
    // Imprimir encabezado con los números de columna
    cout << "   ";
    for (int c = 1; c <= size; c++) {
        cout << c << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        // Imprimir número de fila
        if(i<=8){
            cout << i+1 << "  ";
            
        } else {
             cout << i+1 << " ";
        }
        // Imprimir Matriz de Sopa de Letras
        for (int j = 0; j < size; j++) {
            cout << sopa[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para buscar una palabra en la sopa de letras en dirección horizontal
bool buscarHorizontal(char sopa[MAX_SIZE][MAX_SIZE], int size, string palabra, int &fila, int &columna) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - palabra.size() + 1; j++) {
            bool encontrado = true;
            for (int k = 0; k < palabra.size(); k++) {
                if (sopa[i][j + k] != palabra[k]) {
                    encontrado = false;
                    break;
                }
            }
            if (encontrado) {
                fila = i;
                columna = j;
                return true;
            }
        }
    }
    return false;
}

// Función para buscar una palabra en la sopa de letras en dirección vertical
bool buscarVertical(char sopa[MAX_SIZE][MAX_SIZE], int size, string palabra, int &fila, int &columna) {
    for (int i = 0; i < size - palabra.size() + 1; i++) {
        for (int j = 0; j < size; j++) {
            bool encontrado = true;
            for (int k = 0; k < palabra.size(); k++) {
                if (sopa[i + k][j] != palabra[k]) {
                    encontrado = false;
                    break;
                }
            }
            if (encontrado) {
                fila = i;
                columna = j;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int size;
    do {
        cout << "Ingrese el tamaño de la sopa de letras (entre " << MIN_SIZE << " y " << MAX_SIZE << "): ";
        cin >> size;
    } while (size < MIN_SIZE || size > MAX_SIZE);

    char sopa[MAX_SIZE][MAX_SIZE];
    generarSopa(sopa, size);
    cout << "Sopa de letras:" << endl;
    imprimirSopa(sopa, size);

    string palabra;
    bool validacion = false;
    do {
        cout << "Ingrese una palabra (máximo " << size << " letras): ";
        cin >> palabra;
        validacion = true;
        // Validar que la palabra no contenga números
        for (int i = 0; i < palabra.length(); i++) {
            if (isdigit(palabra[i])) {
                validacion = false;
                break;
            }
        }

        if (!validacion) {
            cout << "La palabra no debe contener números." << endl;
        }
        
        // Validar que la palabra no sea mayor al tamaño de la sopa de letras
        if(palabra.length() > size){
            cout << "La palabra no debe ser mayor al tamaño de la sopa de letras." << endl;
            validacion = false;
        }

    } while (!validacion);

    // Convertir la palabra a mayúsculas    
    for (int i = 0; i < palabra.length(); i++) {
        palabra[i] = toupper(palabra[i]);
    }

    char direccion;
    int fila, columna;
    bool encontrado = false;

do {
    cout<<"Registro Academico Impar"<<endl;
    cout << "Ingrese la dirección de búsqueda (h para horizontal de izquierda a derecha y v para vertical de abajo hacia arriba): ";
    cin >> direccion;
    if (direccion == 'h' || direccion == 'v') {
        if (direccion == 'h') {
            encontrado = buscarHorizontal(sopa, size, palabra, fila, columna);
        } else {
            encontrado = buscarVertical(sopa, size, palabra, fila, columna);
        }
        if (encontrado) {
            cout << "La palabra '" << palabra << "' ha sido encontrada en la fila " << fila+1 << " y columna " << columna+1 << "." << endl;
        } else {
            cout << "La palabra '" << palabra << "' no ha sido encontrada." << endl;
        }
    }
} while (direccion != 'h' && direccion != 'v');

return 0;
}