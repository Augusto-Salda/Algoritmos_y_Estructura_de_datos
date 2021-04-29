

#ifndef COLA_SUBSTRUCTURE_H
#define COLA_SUBSTRUCTURE_H
#define MAX 6
#include <stdlib.h>
#include <iostream>

using namespace std;

class CCola
{
private:
    int cola[MAX];
    int Frente;
    int final;
    int contador;
public:
    void InsertarElemento();
    void Sacarelemento();
    void Colaestado();
    void imprimir();
    void getFrenteCola();
    CCola();
    ~CCola();
};
CCola::CCola()
{
    
Frente=0;
final=-1;
contador=0;

}

CCola::~CCola()
{
    
    
}

void CCola::InsertarElemento()
{
    if(final<MAX){
        cout<<"Ingrese elemento"<<endl;
        final++;
        cin>>cola[final];
        contador++;
    }
    else
    {
        cout<<"No hay espacio en la cola"<<endl;
    }
}

    void CCola::Sacarelemento()
    {
        if(final>-1)
        {
            Frente++;
            cout<<"Elemento eliminado: \t"<<cola[Frente-1]<<endl;
        }
        else
        {
            cout<<"No hay elementos a quitar"<<endl;
        }
    }
    
    void CCola::imprimir()
    {
        if(final>-1)
        {
            cout<<"\t[ ";
            for(int i = Frente;i<contador;i++)
            {
            cout<<cola[i]<<" , ";    
            }
            cout<<"] \n";
        }
        else
        {
            cout<<"La cola no tiene elementos"<<endl;
      }
    }

void CCola::getFrenteCola()
{
    if(final==-1)
    {
    cout<<"En la cola no hay frente"<<endl;    
    }
    else
    {
        cout<<cola[Frente]<<endl;
    }
}

void CCola::Colaestado()
{
    if(final>-1)
    {
        cout<<"La cola tiene elementos"<<endl;
    }
    else
    {
        cout<<"No contiene elementos"<<endl;
    }
    
}
#endif /* COLA_SUBSTRUCTURE_H */

