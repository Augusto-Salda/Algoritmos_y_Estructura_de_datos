#include <iostream>
#include <stdlib.h>
#include "Busqueda.h"

int main()
{
    Busqueda objeto1;
    int numero,opc;
    cout<<"****Métodos de Búsqueda****"<<endl;
    cout<<"1. Búsqueda Secuencial"<<endl;
    cout<<"2. Búsqueda Binaria"<<endl;
    cin>>opc;
    
     switch(opc){
         {
             
             case 1:
  cout<<"\n Ordenamiento selección \n"<<endl;
            objeto1.llenado();
            objeto1.mostrar("desordenados");
            objeto1.seleccion();
            objeto1.mostrar("ordenados");
    cout<<"\n ¿Que dato deseas buscar? \n";
    cin>>numero;
    objeto1.secuencial(numero);
    break;
    
    case 2:
         cout<<"\n Ordenamiento Binario \n"<<endl;
            objeto1.llenado();
            objeto1.mostrar("desordenados");
            objeto1.seleccion();
            objeto1.mostrar("ordenados");
    cout<<"\n ¿Que dato deseas buscar? \n";
    cin>>numero;
    objeto1.Binaria(numero);
    break;

         }
     }
         return 0;
}



