/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Busqueda.h
 * Author: Augusto Saldaña Pacheco Brian Augusto
 *
 */

#ifndef BUSQUEDA_H
#define BUSQUEDA_H
#define max 5


using namespace std;

class Busqueda
{
private:
    int datos[max];
public:
    void secuencial(int);
    void seleccion();
    void llenado();
    void mostrar(string);
    void Binaria(int);
    Busqueda();
    ~Busqueda();
};

//Constructor
Busqueda::Busqueda()
{

}
//Destructor
Busqueda::~Busqueda()
{

}

void Busqueda::llenado()
{
    int i, dato;
    for (i=0;i<=max;i++)
    {
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}
void Busqueda::mostrar(string _estado)
{
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<max;i++)
    {
        cout<<datos[i]<<", ";
    }
    cout<<datos[max]<<"}"<<endl;
}

void Busqueda::seleccion()
{
    int i,j,aux,almacen;
    for(i=0;i<max;i++){
        almacen = i;
        for(j=i+1;j<=max;j++){
            if(datos[j]<datos[almacen]){
                almacen = j;
            }
        }
        aux = datos[i];
        datos[i] = datos[almacen];
        datos[almacen] = aux;
    }
}

void Busqueda::secuencial(int dato)
{
    int i;
    char flag = 'F';
    i = 0;
    if((flag=='F')||(i<datos[max])){
    while ((flag=='F')&&(i<=datos[max]))
    {
        if (datos[i]==dato)
        {
            flag='V';
        }
        i++;
     }
    }
    if (flag=='F')
    {
        cout<<"El dato: "<<dato<<" no existe en el arreglo";
    }
    else
    {
        cout<<"El dato: "<<dato<<" se encuentra en la posicion ["<<i-1<<"] del arreglo ordenado";
    }
}
void Busqueda::Binaria(int dato)
{
    int primero,primero2,sup,medio;
    char flag = 'F';
    primero = 0;
    primero2 = -1;
    sup = 6;
    while (primero2 <= sup){

        medio = (primero+sup)/2;
        if(datos[medio] == dato){
            flag = 'V';
        }
        if(datos[medio] > dato){
            sup = medio;
            medio = (primero+sup)/2;
        }
        if(datos[medio] <= dato){
            primero = medio;
            medio = (primero+sup)/2;
        }
        primero2=primero2+1;
    }
    if (flag == 'V'){
       cout<<"El dato: "<<dato<<" se encuentra en la posicion ["<<primero<<"] del arreglo ordenado";
    }
    else
    {
        cout<<"El numero no ha sido encontrado";
    }

}
#endif /* BUSQUEDA_H */

