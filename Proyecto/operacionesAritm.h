#ifndef UNTITLED_OPERACIONESARITM_H
#define UNTITLED_OPERACIONESARITM_H
#include<iostream>
#include<stdlib.h>
using namespace std;

class operacionesAritm {
protected:
    float a;
    float b;
    int c;
public:
    operacionesAritm(float,float,int);
    void suma();
    void resta();
    void division();
    void multiplicacion();
    int factorial(int c,int d);
};
operacionesAritm::operacionesAritm(float _a,float _b,int _c){
    a = _a;
    b = _b;
    c = _c;
}
void operacionesAritm::suma(){
    cout<<"La suma es: "<<a+b<<endl;;
}
void operacionesAritm::resta(){
    cout<<"La resta es: "<<a-b<<endl;;
}
void operacionesAritm::multiplicacion(){
    cout<<"La multiplicacion es: "<<a*b<<endl;;
}
void operacionesAritm::division(){
    if(b==0){
        cout<<"ERROR: Division por cero no permitida!";
    }
    cout<<"La division es: "<<a/b<<endl;;
    }
int operacionesAritm::factorial(int c,int d){
    if (c >= 1) {
        a = c/d;
        return factorial(a,d+1);
    }
    return d-2;

}




#endif //UNTITLED_OPERACIONESARITM_H
