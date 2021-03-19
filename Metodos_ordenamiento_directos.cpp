#include <iostream>
#include <stdlib.h>
#define max 5

using namespace std;

class Ordenamiento
{
private:
    int datos[max];
public:
    void llenado();
    void mostrar(string);
    void insercion();
    void seleccion();
    void burbuja();
    Ordenamiento();
    ~Ordenamiento();
};
//Constructor
Ordenamiento::Ordenamiento()
{

}
//Destructor
Ordenamiento::~Ordenamiento()
{

}

void Ordenamiento::llenado()
{
    int i, dato;
    for (i=0;i<=max;i++)
    {
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}
void Ordenamiento::mostrar(string _estado)
{
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<max;i++)
    {
        cout<<datos[i]<<", ";
    }
    cout<<datos[max]<<"}"<<endl;
}
void Ordenamiento::insercion()
{
    int i,pos,aux;
    for (i=0;i<=max;i++)
    {
        pos=i;
        aux = datos[i];
        while((pos>0)&&(datos[pos-1]>aux))
        {
            datos[pos]=datos[pos-1];
            pos--;
        }
        datos[pos]=aux;
    }
}

void Ordenamiento::seleccion()
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

void Ordenamiento::burbuja()
{
     int i,j,aux,cambio;
    for(i=0;i<max;i++){
        for(j=0;j<max;j++){
            if(datos[j] > datos[j+1]){
                aux = datos [j];
                datos[j] = datos[j+1];
                datos[j+1] = aux;
            }
        }
    }
     
}

int main()
{
    Ordenamiento objeto1;
    int opc;
    cout<<"****Métodos de ordenamiento****"<<endl;
    cout<<"1. Método Inserción"<<endl;
    cout<<"2. Método Selección"<<endl;
    cout<<"3. Métodod Burbúja"<<endl;
    cin>>opc;
    switch(opc){
        
        {
            
            case 1:   
                system("cls");
                cout<<"\n Ordenamiento Inserción \n"<<endl;
            objeto1.llenado();
            objeto1.mostrar("desordenados");
            objeto1.insercion();
            objeto1.mostrar("ordenados"); 
            break;
            
            case 2:
                system("cls");
                   cout<<"\n Ordenamiento burbúja \n"<<endl;
            objeto1.llenado();
            objeto1.mostrar("desordenados");
            objeto1.burbuja();
            objeto1.mostrar("ordenados");
            break;
            
            case 3:
                system("cls");
                 cout<<"\n Ordenamiento selección \n"<<endl;
            objeto1.llenado();
            objeto1.mostrar("desordenados");
            objeto1.seleccion();
            objeto1.mostrar("ordenados");
            break;
            default:
            {
                cout<<"Opción no valida"<<endl;
            }
        }
    }
    return 0;
}
