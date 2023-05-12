#include <iostream>
#include <conio.h>

using namespace std;
int global = 0;
int funcionReferencia(int &n, int &m);
double funcionReferencia(double n, double m);
int mayor(int n, int m);
double mayor(double n, double m);
char mayor(char n, char m);

int main() {
    int a = 0;
    int b = 20;
    float c = 3.1416;
    float d = 2.7182;
    int &r = a; // a valia 0
        a = 10; // se asigna un nuevo valor a a, r automaticamente cambia de valor
        r = 20;
        cout<<"r vale: "<<r<<endl;
        cout<<"a vale: "<<a<<endl;
        cout<<"b vale: "<<b<<endl;
        // FUNCION POR REFERENCIA
        cout<<"El numero mayor es: "<<mayor(a,b)<<endl;
        
        cout<<funcionReferencia(a,b)<<endl;
        cout<<"a vale: "<<a<<endl;
        cout<<"b vale: "<<b<<endl;
        
        cout<<funcionReferencia(a,b)<<endl;
        cout<<funcionReferencia(c,d)<<endl;
        cout<<"c vale: "<<c<<endl;
        cout<<"d vale: "<<d<<endl;
        cout<<"El numero mayor es: "<<mayor(a,b)<<endl;
        cout<<mayor(c,d)<<endl;
        cout<<mayor('f','g')<<endl;
        
        //cout<<funcionReferencia(10,20)<<endl;
        cout<<"a vale: "<<a<<endl;
        cout<<"b vale: "<<b<<endl;
        cout<<"global vale: "<<global<<endl;
    return 0;

}

int funcionReferencia(int &n, int &m) {
    n = n +2;
    m = m - 5;
    
    return n+m;
}
double funcionReferencia(double n, double m) {
    n = n +2;
    global = 25;
    m = m - 5;
    clrscr();
    return n+m;
}
int mayor(int n, int m) {
    if (n > m) {
        return n;
    } else {
        return m;
    }
}

double mayor(double n, double m) {
    if (n > m) {
        return n;
    } else {
        return m;
    }
}

char mayor(char n, char m) {
    if (n > m) {
        return n;
    } else {
        return m;
    }
}