//
// Created by Jonathan Betancur on 19/04/2022.
//

#include "eJcoco.h"

using namespace std;

void eJcoco::calculadora() {
    system("java -jar JCoCo.jar funcionesArit.casm");
}

void eJcoco::factorial() {
    system("java -jar JCoCo.jar Factorial.casm");
}

void eJcoco::pascal() {
    system("java -jar JCoCo.jar Pascal.casm");
}
void eJcoco::matrices() {
    system("java -jar JCoCo.jar Matrices.casm");
}

eJcoco::eJcoco() = default;
