#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    int opcion = 0, op = 0;
    int indice;
    char cadena[50];
    char actual =' ';

    while (opcion != 5)
    {
        // system("clear");
        cout << "Examen Final \n\n";
        cout << " Nombre: Mario Alejandro Cano Almengor" << endl;
        cout << " Carnet: 201930347" << endl;
        cout << " Curso: Programación de Computadoras 1 - A" << endl;
        cout << " Fecha: 10/11/2022" << endl;
        cout << "         Menú de Opciones \n";
        cout << "----------------------------------------\n";
        cout << "\t1 - Dibujar Iniciales \n";
        cout << "\t2 - Calculo de un NIT \n";
        cout << "\t3 - M.C.M \n";
        cout << "\t4 - Cifrar Texto \n\n";
        cout << "\t5 - Salir \n";
        cout << "----------------------------------------\n";
        cout << "Seleccione una opcion" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Dibujar Iniciales\n";
            cout << "\t1 - Primera Inicial \n";
            cout << "\t2 - Segunda Inicial \n";
            cout << "\t3 - Tercera Inicial \n";
            cout << "\t4 - Cuarta Inicial \n\n";
            cout << "\t5 - Salir \n";
            cout << "----------------------------------------\n";
            cout << "Seleccione una opcion" << endl;
            cin >> op;
            switch (op)
            {
            case 1:
                cout << " __  __ \n"
                     << "|  \\/  |\n"
                     << "| |\\/| |\n"
                     << "| |  | |\n"
                     << "|_|  |_| \n\n";
                break;
            case 2:
                cout << "    _ \n"
                     << "   / \\ \n"
                     << "  / _ \\ \n"
                     << " / ___ \\ \n"
                     << "/_/   \\_\\ \n\n";
                break;
            case 3:
                cout << "  ____\n"
                     << " / ___|\n"
                     << "| |    \n"
                     << "| |___ \n"
                     << " \\____|\n\n";
                break;

            case 4:
                cout << "    _ \n"
                     << "   / \\ \n"
                     << "  / _ \\ \n"
                     << " / ___ \\ \n"
                     << "/_/   \\_\\ \n\n";
                break;

            case 5:
                cout << "Salir al Menu Principal\n";
                break;
            default:
                cout << "Opcion no valida\n";
                break;
            }
            break;
        case 2:
            cout << "Calculo de un NIT \n";
            break;
        case 3:
            cout << "M.C.M \n ";
            break;
        case 4:
            cout << "Cifrar Texto" << endl;
            cout << "Ingrese la Cadena que desea Cifrar, y finalice con un Punto (.)" << endl;
            cin.getline(cadena, 50, '.');

            for (indice = 0; indice < strlen(cadena); indice++)
            {
                 actual = cadena[indice];

                switch (actual)
                {
                case 'O':
                case 'o':
                    cadena[indice] = '0';
                    break;
                case 'i':
                case 'I':
                    cadena[indice] = '1';
                    break;
                case 'z':
                case 'Z':
                    cadena[indice] = '2';
                    break;
                case 'e':
                case 'E':
                    cadena[indice] = '3';
                    break;
                case 'a':
                case 'A':
                    cadena[indice] = '4';
                    break;
                case 's':
                case 'S':
                    cadena[indice] = '5';
                    break;
                case 'g':
                case 'G':
                    cadena[indice] = '6';
                    break;

                case 'l':
                case 'L':
                    cadena[indice] = '1';
                    break;

                case 'b':
                case 'B':
                    cadena[indice] = '8';
                    break;

                case 'q':
                case 'Q':
                    cadena[indice] = '9';
                    break;
                }
            }
            cout << "El resultado es: " << cadena << endl;

            break;
        case 5:
            cout << "Presione cualquier tecla para salir\n";
            break;
        default:
            cout << "Opcion no valida\n";
            break;
        }
    }
    getch();
}