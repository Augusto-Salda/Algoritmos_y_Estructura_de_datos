#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Operacion{
private: 
    int Numero1;
    int Numero2;

public:
    int suma();
    float resta();
    float dividir();
    int multiplicacion();
    void obtener();
};

void Operacion::obtener(){
    cout<<"\n Dame el numero 1: \n"<<endl;
    cin>>Numero1;
    cout<<"\n Dame el numero 2: \n"<<endl;
    cin>>Numero2;
}

int Operacion::suma(){
    int res;
    res=Numero1+Numero2;
    return res;
}

float Operacion::resta(){
    float res;
    res=Numero1-Numero2;
    return res;
}

int Operacion::multiplicacion(){
    int res;
    res=Numero1*Numero2;
    return res;
}

float Operacion::dividir(){
    float res;
    res=Numero1/Numero2;
    return res;
}


int main() {
    Operacion Objeto1;
    Operacion Objeto2;
    Operacion Objeto3;
    Operacion Objeto4;
    Objeto1.obtener();
    cout<<"\n La suma es: "<<Objeto1.suma()<<endl;
    Objeto2.obtener();
    cout<<"\n La resta es:"<<Objeto2.resta()<<endl;
    Objeto3.obtener();
    cout<<"\n La multiplicación es:"<<Objeto3.multiplicacion()<<endl;
    Objeto4.obtener();
    cout<<"\n La división es:"<<Objeto4.dividir()<<endl;
      return 0;
}

