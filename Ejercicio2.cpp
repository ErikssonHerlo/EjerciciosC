#include <iostream>
#include <conio.h>
#include <vector>
#include <sstream>

using namespace std;

void fraseEscalonada(string const &fraseEntrada, const char delimitador, vector<string> &salida);

int main() {
    string fraseEntrada;
    const char delimitador = ' ';
    int espaciado = 0;
    
    cout<<"Ingrese una frase: "<<endl;
    getline(cin,fraseEntrada);

    vector<string> salida;
	fraseEscalonada(fraseEntrada, delimitador, salida);
    
	for (auto &fraseEntrada: salida) {
		cout<<fraseEntrada<<endl;
        espaciado = espaciado + fraseEntrada.length();
        for(int i=0;i<espaciado;i++){
            cout<<delimitador;
        }
        
	}
    return 0;

}

void fraseEscalonada(string const &fraseEntrada, const char delimitador,
			vector<string> &salida)
{
	// Construye un Stream con la frase de entrada
	stringstream inputStream(fraseEntrada);

	string cadena;
    //Cada vez que encuentra un delimitador, hace un push y lo guarda en la variable cadena
	while (getline(inputStream, cadena, delimitador)) {

		salida.push_back(cadena);
	}
}