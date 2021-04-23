

#ifndef PILA_SUBSTRUCTURE_H
#define PILA_SUBSTRUCTURE_H
#define MAX 6
#include <stdlib.h>
#include <iostream>

using namespace std;

class CPila
{
private:
    int Pila[MAX];
    int Tope;
public:
    void InsertarElemento(int);
    int Sacarelemento();
    bool Pilavacia();
    bool Pilallena();
    void imprimir();
    int getope();
    CPila();
    ~CPila();
};

CPila::CPila()
{
    Tope=-1;
}

CPila::~CPila()
{

}


void CPila::InsertarElemento(int Dato)
{
    if (Pilallena()==true)
    {
        cout<<"La pila esta llena"<<endl;
    }
    else
    {
        Tope=Tope+1;
        Pila[Tope]=Dato;
        cout<<"El dato se guardo correctamente"<<endl;
    }
}

bool CPila::Pilallena()
{
    if (Tope==MAX-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CPila::Pilavacia()
{
    if (Tope==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void CPila::imprimir()
{
    if (Pilavacia()==true)
    {
        cout<<"La pila esta vacia"<<endl;
    }
    else
    {
        for(int i=Tope;i>=0;i--)
        {
            cout<<"| "<<Pila[i]<<"|"<<endl;
            cout<<"______________"<<endl;
        }
    }
}

int CPila::Sacarelemento()
{
    int Dato;
    if (Pilavacia()==true)
    {
        cout<<"La pila no tiene datos"<<endl;
    }
    else
    {
        Dato=Pila[Tope];
        Tope=Tope-1;
        return Dato;
    }
}

int CPila::getope()
{
    if (Pilavacia()==true)
    {
        cout<<"La pila no tiene datos"<<endl;
    }
    else
    {
        return Pila[Tope];
    }
}


#endif /* PILA_SUBSTRUCTURE_H */

