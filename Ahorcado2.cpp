#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

vector<string> palabras = {"ingenieria", "industrial", "maquinaria", "fabricacion", "procesos", "diseño", "productividad", "calidad", "mantenimiento", "ergonomia", "logistica", "optimizacion", "estadistica", "seguridad", "ambiental"};

int main() {
    srand(time(NULL));
    int tema = rand() % 3 + 1;
    string tema_str;
    vector<string> palabras_sel;
    if (tema == 1) {
        tema_str = "Ingenieria Industrial";
        palabras_sel = {palabras[0], palabras[1], palabras[2], palabras[3], palabras[4], palabras[5], palabras[6], palabras[7], palabras[8], palabras[9], palabras[10], palabras[11], palabras[12], palabras[13], palabras[14]};
    } else if (tema == 2) {
        tema_str = "Ingenieria Mecanica";
        palabras_sel = {palabras[1], palabras[3], palabras[5], palabras[7], palabras[9], palabras[11], palabras[13]};
    } else {
        tema_str = "Materiales de Ingenieria";
        palabras_sel = {palabras[0], palabras[2], palabras[4], palabras[6], palabras[8], palabras[10], palabras[12], palabras[14]};
    }

    // Seleccionar palabra al azar
    string palabra_sel = palabras_sel[rand() % palabras_sel.size()];
    int longitud = palabra_sel.length();

    // Mostrar tema seleccionado y longitud de la palabra
    cout << "Tema: " << tema_str << endl;
    cout << "Palabra seleccionada, longitud: " << longitud << endl;

    // Inicializar palabra con asteriscos
    string palabra_adivinar(longitud, '*');

    // Ingresar nombres de jugadores
    string jugador1, jugador2;
    cout << "Ingrese el nombre del jugador 1: ";
    cin >> jugador1;
    cout << "Ingrese el nombre del jugador 2: ";
    cin >> jugador2;

    // Elegir jugador que inicia
    int turno = rand() % 2 + 1;
    string jugador_actual;
    if (turno == 1) {
        jugador_actual = jugador1;
    } else {
        jugador_actual = jugador2;
    }

    // Inicializar variables para controlar el juego
    int turnos_restantes = longitud + 6;
    int aciertos = 0;
    vector<char> letras_ingresadas;

    // Juego del ahorcado
    while (turnos_restantes > 0 && aciertos < longitud) {
        cout << "-------------------------------------" << endl;
        cout << "Turnos restantes: " << turnos_restantes << endl;
        cout << "Letras ingresadas: ";
        for (char letra : letras_ingresadas) {
            cout << letra << " ";
        }
        cout << endl;
        cout << "Jugador actual: " << jugador_actual << endl;
        cout << "Palabra a adivinar: " << palabra_adivinar << endl;

        // Pedir letra al jugador
char letra_ingresada;
    cout << "Ingrese una letra: ";
    cin >> letra_ingresada;

    // Validar letra ingresada
    if (!isalpha(letra_ingresada)) {
        cout << "Error: Debe ingresar una letra." << endl;
        turno = turno == 1 ? 2 : 1;
        jugador_actual = turno == 1 ? jugador1 : jugador2;
        turnos_restantes--;
        continue;
    }
    letra_ingresada = tolower(letra_ingresada);

    if (find(letras_ingresadas.begin(), letras_ingresadas.end(), letra_ingresada) != letras_ingresadas.end()) {
        cout << "Error: La letra ingresada ya fue ingresada anteriormente." << endl;
        turno = turno == 1 ? 2 : 1;
        jugador_actual = turno == 1 ? jugador1 : jugador2;
        turnos_restantes--;
        continue;
    }

    letras_ingresadas.push_back(letra_ingresada);

    // Verificar si la letra ingresada está en la palabra
    bool encontrado = false;
    for (int i = 0; i < longitud; i++) {
        if (palabra_sel[i] == letra_ingresada) {
            palabra_adivinar[i] = letra_ingresada;
            aciertos++;
            encontrado = true;
        }
    }

    if (encontrado) {
        cout << "¡Adivinaste una letra! :)" << endl;
    } else {
        cout << "¡La letra ingresada no está en la palabra! :(" << endl;
        turno = turno == 1 ? 2 : 1;
        jugador_actual = turno == 1 ? jugador1 : jugador2;
        turnos_restantes--;
    }
}

// Mostrar resultado final
cout << "-------------------------------------" << endl;
cout << "La palabra era: " << palabra_sel << endl;
if (aciertos == longitud) {
    cout << "¡Felicidades " << jugador_actual << ", ganaste el juego! :)" << endl;
} else {
    cout << "¡Empate! No se logró adivinar la palabra." << endl;
}

return 0;
}