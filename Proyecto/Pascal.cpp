//
// Created by Jonathan Betancur on 26/03/2022.
//

#include "Pascal.h"
#include <bits/stdc++.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Escriba un numero para el triangulo \n";
    cin>>(n);
    round(n);
    try{
        printPascal(n);
        sumapascal(n);
    } catch(const char *msg) {
        std::cerr << msg << std::endl;
    }
    return 0;
}
