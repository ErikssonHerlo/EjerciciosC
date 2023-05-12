#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int opcion = 0, op = 0;
    while (opcion != 8)
    {
        // system("clear");
        cout << "\nMenú If Anidados \n\n";
        cout << "----------------------------------------\n";
        cout << "\t1 - Lunes" << endl;
        cout << "\t2 - Martes" << endl;
        cout << "\t3 - Miercoles" << endl;
        cout << "\t4 - Jueves" << endl;
        cout << "\t5 - Viernes" << endl;
        cout << "\t6 - Sabado" << endl;
        cout << "\t7 - Domingo" << endl;
        cout << "\t8 - Salir" << endl;
        cout << "----------------------------------------\n";
        cout << "Seleccione una opcion" << endl;
        cin >> opcion;

        if(opcion == 1){
            cout<<"Lunes"<<endl;
        } else if(opcion == 2){
            cout<<"Martes"<<endl;
        } else if(opcion == 3){
            cout<<"Miercoles"<<endl;
        } else if(opcion == 4){
            cout<<"Jueves"<<endl;
        } else if(opcion == 5){
            cout<<"Viernes"<<endl;
        } else if(opcion == 6){
            cout<<"Sabado"<<endl;
        } else if(opcion == 7){
            cout<<"Domingo"<<endl;
        } else if(opcion == 8){
            cout<<"Salir"<<endl;
        } else {
            cout<<"Opcion no valida"<<endl;
        }
        


    }
    getch();
}