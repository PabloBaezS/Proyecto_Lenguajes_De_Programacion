//
// Created by perez on 19/04/2022.
//

#ifndef C___MENU_H
#define C___MENU_H
#include <string>

using namespace std;

class Menu {
public:
    string pantalla();
    void setValor(int);
    int getValor();
    void swtCs(int);
    Menu();

private:
    int valor{};
};


#endif //C___MENU_H
