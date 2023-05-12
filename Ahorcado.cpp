#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
 
const int max_intentos = 7; // Número máximo de intentos antes de perder el juego
string seleccionarPalabra(int tema);
bool esLetraRepetida(string letrasUsadas, char letra) ;

int main() {
    string palabra_secreta; // Palabra secreta que debe adivinar el jugador
    string temaSeleccionado; // Tema seleccionado al azar
    srand(time(0)); // Inicializar la semilla para generar números aleatorios
    cout << "Bienvenido al Juego del Ahorcado" << endl << endl;
     // Jugadores y selección aleatoria del turno inicial
    string jugador1, jugador2;
    string jugador_actual;
    string letrasIngresadas = "";
    cout << "Ingrese el nombre del jugador 1: ";
    cin >> jugador1;
    cout << "Ingrese el nombre del jugador 2: ";
    cin >> jugador2;
    int turno = rand() % 2 + 1; // 1: jugador 1, 2: jugador 2
    if (turno == 1) {
        cout << "Jugador 1 inicia el juego" << endl;
        jugador_actual = jugador1;
    } else {
        cout << "Jugador 2 inicia el juego" << endl;
        jugador_actual = jugador2;
    }

    // Seleccionar tema al azar
    int tema = rand() % 3; // Generar un número aleatorio del 0 al 2
    switch (tema) {
        case 0:
            temaSeleccionado = "Ingenieria Mecanica";
            // Seleccionar palabra al azar
            
            break;
        case 1:
            temaSeleccionado = "Ingenieria Industrial";
            break;
        case 2:
            temaSeleccionado = "Ingeniería Mecanica Industrial";
            break;
    }
    cout << "Tema seleccionado: " << temaSeleccionado << endl;
    palabra_secreta= seleccionarPalabra(tema);
    
    string palabra_descubierta(palabra_secreta.length(), '*'); // Crear una cadena de guiones de la misma longitud que la palabra secreta

   
    
    // Bucle principal del juego
    int intentos_restantes = max_intentos +palabra_secreta.length();
    while (intentos_restantes > 0 && palabra_descubierta != palabra_secreta) {
        bool acierto = false; // Bandera para indicar si el jugador ha acertado o no
        // Imprimir información del juego
        cout <<"\n*****************************" <<endl;
        cout << "Es el turno del Jugador: " << jugador_actual << endl;
        cout << "Palabra secreta: " << palabra_descubierta << endl;
        cout << "Letras ingresadas: " << letrasIngresadas << endl;
        cout << "Intentos restantes: " << intentos_restantes << endl;

        // Pedir una letra al jugador actual
        char letra;
        cout << "Introduce una letra (solo letras minusculas): ";
        cin >> letra;
        if(isdigit(letra)){
            cout<<"No se permiten numeros"<<endl;
            continue;
        } else if(!islower(letra)){
            cout<<"No se permiten mayusculas"<<endl;
            continue;
        } 

        if(esLetraRepetida(letrasIngresadas, letra)){
            acierto = false;
        } else {
            letrasIngresadas += letra;
            // Verificar si la letra ingresada está en la palabra secreta
            for (int i = 0; i < palabra_secreta.length(); i++) {
                if (palabra_secreta[i] == letra) {
                    palabra_descubierta[i] = letra;
                    acierto = true;
                }
            }
        }
        
        // Imprimir mensaje según si el jugador ha acertado o no
        if (acierto) {
            cout << "¡Correcto!" << endl;
            if(palabra_descubierta != palabra_secreta){
                cout<<"Jugador: "<<jugador_actual<<" puede seguir adivinando letras"<<endl;
            }
            
        } else {
            cout << "¡Incorrecto!" << endl;
            intentos_restantes--;
            // Cambiar al siguiente jugador
            if (jugador_actual == jugador1) {
                jugador_actual = jugador2;
            } else {
                jugador_actual = jugador1;
            }
        }

        
    }

    // Imprimir mensaje de final del juego
    if (intentos_restantes == 0) {
        cout<<"\n*************EMPATE****************"<<endl;
        cout<<"Se han terminado los turnos de ambos jugadores"<<endl;
        cout <<"La palabra secreta era: " << palabra_secreta << endl;
    } 

    return 0;
}

string seleccionarPalabra(int tema)
{
    // Definir las palabras por tema
    string palabrasMecanica[] = {"rueda", "motor", "transmision", "suspension", "freno", "embrague", "aceite", "correa", "amortiguador", "volante", "carburador", "radiador", "escape", "alternador", "inyeccion"};
    string palabrasIndustrial[] = {"maquina", "robotica", "automatizacion", "proceso", "producto", "calidad", "industria", "fabricacion", "mantenimiento", "planta", "eficiencia", "produccion", "seguridad", "medicion", "norma"};
    string palabrasMecanicaIndustrial[] = {"metalurgia", "fundicion", "maquinaria", "acero", "moldeo", "herramienta", "torno", "fresadora", "forja", "estampado", "troquelado", "reductores", "elevadores", "gruas", "transportador"};
    
    string palabraSeleccionada;
    
    if (tema == 0)
    {
        palabraSeleccionada = palabrasMecanica[rand() % 15];
    }
    else if (tema == 1)
    {
        palabraSeleccionada = palabrasIndustrial[rand() % 15];
    }
    else if (tema == 2)
    {
        palabraSeleccionada = palabrasMecanicaIndustrial[rand() % 15];
    }
    else
    {
        // Si el tema no es válido, seleccionar una palabra aleatoria de mecánica
        palabraSeleccionada = palabrasMecanica[rand() % 15];
    }
    
    return palabraSeleccionada;
}

bool esLetraRepetida(string letrasUsadas, char letra) {
    for (char c : letrasUsadas) {
        if (c == letra) {
            cout << "Error: la letra " << letra << " ya fue usada." << endl;
            return true;
        }
    }
    return false;
}
