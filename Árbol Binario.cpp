#include <iostream>
#include <cstdlib>
# include <iostream>

using namespace std;

struct nodo
{
    int dato;
    struct nodo *izq;
    struct nodo *der;
}*raiz;

class Arbol
{
    public:
        void insertar(nodo *, nodo *);
        void mostrar(nodo *, int);
        void Preorden(nodo *);
        void Inorden(nodo *);
        void Postorden(nodo *);
        Arbol();
        ~Arbol();
};

Arbol::Arbol()
{
            raiz = NULL;
};

Arbol::~Arbol()
{
    
};

void Arbol::insertar(nodo *arbol, nodo *newnodo)
{
    if (raiz == NULL)
    {
        raiz = new nodo;
        raiz->dato = newnodo->dato;
        raiz->izq = NULL;
        raiz->der = NULL;
        cout<<"Nodo Raiz Agregado"<<endl;
        return;
    }
    if (arbol->dato == newnodo->dato)
    {
        cout<<"El elemento ya esta en el arbol"<<endl;
        return;
    }
    if (arbol->dato > newnodo->dato)
    {
        if (arbol->izq != NULL)
        {
            insertar(arbol->izq, newnodo);
	}
	else
	{
            arbol->izq = newnodo;
            (arbol->izq)->izq = NULL;
            (arbol->izq)->der = NULL;
            cout<<"Nodo agregado a la izquierda"<<endl;
            return;
        }
    }
    else
    {
        if (arbol->der != NULL)
        {
            insertar(arbol->der, newnodo);
        }
        else
        {
            arbol->der = newnodo;
            (arbol->der)->izq = NULL;
            (arbol->der)->der = NULL;
            cout<<"Nodo Agregado a la derecha"<<endl;
            return;
        }
    }
}
void Arbol::mostrar(nodo *mos, int nivel)
{
    int i;
    if (mos != NULL)
    {
        mostrar(mos->der, nivel+1);
        cout<<endl;
        if (mos == raiz)
            cout<<"Raiz->:  ";
        else
        {
            for (i = 0;i < nivel;i++)
                cout<<"       ";
	}
        cout<<mos->dato;
        mostrar(mos->izq, nivel+1);
    }
}


void Arbol::Preorden(nodo *raiz)
{

     if(raiz == NULL)
     {
         return;
     }  
     else
     {
         cout<<"["<<raiz->dato<<"]"<<" - ";
         Preorden(raiz->izq);
         Preorden(raiz->der);
     }
}

void Arbol::Inorden(nodo *raiz)
{

     if(raiz == NULL)
     {
         return;
     }
     else
     {
          Inorden(raiz->izq);
          cout <<"["<< raiz->dato <<"]"<< " - ";
          Inorden(raiz->der);
     }
}

void Arbol::Postorden(nodo *raiz)
{

     if(raiz == NULL)
     {
       
         return;
         
     }
     else 
     {
          Postorden(raiz->izq);
          Postorden(raiz->der);
          cout <<"["<< raiz->dato <<"]"<< " - ";
     }
}

int main()
{
    int op, num;
    Arbol obj1;
    nodo *temp;
    while (1)
    {
        cout<<"\n-----------------"<<endl;
        cout<<"Arbol Binario"<<endl;
        cout<<"-----------------\n"<<endl;
        cout<<"1.Insertar Elemento al Árbol "<<endl;
        cout<<"2.Mostrar"<<endl;
        cout<<"3.Preorden"<<endl;
        cout<<"4.Inorden"<<endl;
        cout<<"5.Postorden"<<endl;
        cout<<"Ingresa tu opcion : ";
        cin>>op;
        switch(op)
        {
        case 1:
            temp = new nodo;
            cout<<"Ingrese el numero : ";
	    cin>>temp->dato;
            obj1.insertar(raiz, temp);
            break;
        case 2:
            cout<<"Mostrar arbol:"<<endl;
            obj1.mostrar(raiz,1);
            cout<<endl;
            break;
                  case 3:
            cout<<"Recorrido Preorden: \n"<<endl;
            obj1.Preorden(raiz);
            break;
            case 4:
                cout<<"Recorrido Inorden \n"<<endl;
                obj1.Inorden(raiz);
                break;
            case 5:
                cout<<"Recorrido Postorden \n"<<endl;
                obj1.Postorden(raiz);
                break;
            case 6:
                 exit(1);
                 break;
        default:
            cout<<"Seleccion incorrecta"<<endl;
        }
    }
}