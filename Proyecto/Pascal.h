//
// Created by Jonathan Betancur on 26/03/2022.
//

#ifndef EJERCICIO_PASCAL_H
#define EJERCICIO_PASCAL_H

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void printPascal(int n)
{

    int arr[n][n]; //arreglo para almacenar los valores del triángulo de pascal

    for (int line = 0; line < n; line++) //itera desde las filas
    {

        for (int i = 0; i <= line; i++) //itera desde las columnas
        {

        if (line == i || i == 0) //cuando el valor de x y de y es el mismo, agrega el uno, y sigue
            arr[line][i] = 1;

        else
            arr[line][i] = arr[line - 1][i - 1] +
                            arr[line - 1][i]; //sino, se suma el anterior de la fila con el actual
        cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}
void sumapascal(int n)
{
    long total = pow(2,n)-1;
    cout<< total;
}
void n_negativa(int n)
{
    if (n<0){
        throw "Error, numero no permitido";
    }
    n = 1;

}
#endif //EJERCICIO_PASCAL_H
