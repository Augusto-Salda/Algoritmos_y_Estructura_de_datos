#include <iostream>
#include <stdlib.h>
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
    while ((flag=='F')&&(i<datos[max]))
    {
        if (datos[i]==dato)
        {
            flag='V';
        }
        i++;
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

int main()
{
    Busqueda objeto1;
    int numero;
  cout<<"\n Ordenamiento selección \n"<<endl;
            objeto1.llenado();
            objeto1.mostrar("desordenados");
            objeto1.seleccion();
            objeto1.mostrar("ordenados");
    cout<<"\n ¿Que dato deseas buscar? \n";
    cin>>numero;
    objeto1.secuencial(numero);
    return 0;
}
