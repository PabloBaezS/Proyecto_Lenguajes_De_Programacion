#include <iostream>
#include "Menu.cpp"
#include "SistemaO.cpp"
using namespace std;

int main() {

    Menu *m = new Menu();
    SistemaO *s = new SistemaO();

    cout << s->verificar();
    int n = 4;
    int i = 1;
    while(i <= n){
        cout<<"|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|MENU|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"| 1) Para hacer la suma, resta, multiplicacion y division de dos numeros a,b establecidos|"<<endl;
        cout<<"| 2) Para encontrar el valor n-esimo de la serie Factorial dado un valor establecido     |"<<endl;
        cout<<"| 3) Para encontrar el valor n-esimo en el Triangulo de Pascal dado un valor establecido |"<<endl;
        cout<<"| 4) Para dadas dos matrices sumarlas,restarlas,multiplicarlas y dividirlas              |"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_||_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|"<<endl;
        int sw;
        cin>> sw;
        if (sw !=  1||sw !=  2||sw !=  3||sw !=  4){
            m->setValor(sw);
            m->swtCs(m->getValor());
        }
        i = i+1;
    }



    return 0;
}
