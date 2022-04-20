//
// Created by Jonathan Betancur on 19/04/2022.
//

#include "Menu.h"
#include "eJcoco.cpp"
#include <string>

using namespace std;

string Menu::pantalla() {
    return "Bienvenido, Indique el programa a ejecutar: \n1.Calculadora\n2.Factorial\n3.Pascal\n4.Matrices";
}

void Menu::setValor(int v) {
    valor = v;
}

int Menu::getValor() {
    return valor;
}

void Menu::swtCs(int swt) {

    eJcoco *j = new eJcoco();

    switch (swt){

        case 1:
            //agregar los cin y cout dependiendo del Jcoco
            j->calculadora();
            break;

        case 2:
            //agregar los cin y cout dependiendo del Jcoco
            j->factorial();
            break;

        case 3:
            //agregar los cin y cout dependiendo del Jcoco
            j->pascal();
            break;
        case 4:
            j->matrices();
            break;
        case 5:
            cout<<"usted tiene lag mental \ncoloque otro numero\n";
            break;
    }
}

Menu::Menu() {
    valor;
}
