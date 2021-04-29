#include <iostream>
#include <stdlib.h>
#include "Cola_Substructure.h"
#define MAX 6

int main()
{
    int opc,Dat;
    CCola Obj1;

    do
    {
        cout<<"Ingresar cola ---------> 1"<<endl;
        cout<<"Sacar cola ------------> 2"<<endl;
        cout<<"Imprimir cola ---------> 3"<<endl;
        cout<<"Frente cola ---------> 4"<<endl;
        cout<<"Revisar estado de cola -------> 5"<<endl; 
        cout<<"Salir -----------------> 6"<<endl;
        cout<<"Elige un opcion: ";
        cin>>opc;
        switch (opc)
        {
        case 1:
            {
                Obj1.InsertarElemento();
            }
            break;
        case 2:
            {
                Obj1.Sacarelemento();
            }
            break;
        case 3:
            {
                Obj1.imprimir();
            }
            break;
        case 4:
            {
                Obj1.getFrenteCola();
            }
            break;
        case 5:
            {
                Obj1.Colaestado();
            }
            break;
            case 6:
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
    while (opc!=6);
    return 0;
}
