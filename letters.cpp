#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{   
    char letraElegida;
    cout <<"Ingrese una letra del alfabeto:  ";
    cin>>letraElegida;
    
    letraElegida=toupper(letraElegida);
  
    for(char letra = 65; letra<=90; letra++)
       { 
            cout<<letra;
            if(letra==letraElegida)
            {
                break;
            }
            
       }
    return 0;
}