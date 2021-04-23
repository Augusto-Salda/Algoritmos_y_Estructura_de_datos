#include <iostream>
#include <stdlib.h>
#include "Pila_Substructure.h"

int main()
{
    int opc,Dat;
    CPila Obj1;

    do
    {
        cout<<"Ingresar pila ---------> 1"<<endl;
        cout<<"Sacar pila ------------> 2"<<endl;
        cout<<"Imprimir pila ---------> 3"<<endl;
        cout<<"Elemento tope ---------> 4"<<endl;
        cout<<"Salir -----------------> 5"<<endl;
        cout<<"Elige un opcion: ";
        cin>>opc;
        switch (opc)
        {
        case 1:
            {
                cout<<"Dato a ingresar"<<endl;
                cin>>Dat;
                Obj1.InsertarElemento(Dat);
            }
            break;
        case 2:
            {
                cout<<"El elemento que se saco es: "<<Obj1.Sacarelemento()<<endl;
            }
            break;
        case 3:
            {
                Obj1.imprimir();
            }
            break;
        case 4:
            {

            }
            break;
        case 5:
            {
                cout<<"Proceso Finalizado"<<endl;
            }
            break;
        default:
            {
                cout<<"No es una opcion valida"<<endl;
            }
        }
    }
    while (opc!=5);
    return 0;
}
