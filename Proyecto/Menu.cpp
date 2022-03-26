#include "operacionesAritm.h"
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|MENU|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|"<<endl;
    cout<<"| 1) Para encontrar el valor n-esimo en el Triangulo de Pascal dado un entero n  |"<<endl;
    cout<<"| 2) Para encontrar el valor n-esimo de la serie Factorial dado un entero n      |"<<endl;
    cout<<"| 3) Para hacer la suma, resta, multiplicacion y division de dos numeros a,b     |"<<endl;
    cout<<"| 4) Para dadas dos matrices sumarlas,restarlas,multiplicarlas y dividirlas      |"<<endl;
    cout<<"| 5) Para salir del programa                                                     |"<<endl;
    cout<<"|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_||_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|"<<endl;
    while(true) {
        cout<<"| Por favor elija una opcion:";cin>>n;
        if (n==5){
            cout<<"Gracias por usar el menu";
            break;
        }
        if (n==2) {
            cout << "ingrese el numero factorial:";
            float a;
            cin >> a;
            operacionesAritm o = operacionesAritm(0,0,a);
            cout<<"El n_ezimo del factorial es:"<<o.factorial(a,1)<<endl;
        }

        if (n==3) {
            cout << "ingrese el primer numero(a):";
            float a;
            cin >> a;
            cout << "ingrese el segundo numero(b):";
            float b;
            cin >> b;
            operacionesAritm o = operacionesAritm(a, b,0);
            o.suma();
            o.resta();
            o.multiplicacion();
            o.division();
        }
    }

}
