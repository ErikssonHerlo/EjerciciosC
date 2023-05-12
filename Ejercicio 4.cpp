#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{

int indice;
  char cadena[50];
  // system("clear");


  cout << "Cifrar Texto"<<endl;
            cout << "Ingrese la Cadena que desea Cifrar, seguida de Enter:";
            cin.getline(cadena, 50, '\n');


            for (indice = 0; indice < strlen(cadena); indice++)
            {
                char actual = cadena[indice];

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
            cout << "El resultado es: " <<cadena << endl;

  return 0;
}