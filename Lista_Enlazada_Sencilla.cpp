#include <iostream>
#include <locale.h>
#include <cstdlib>


using namespace std;

struct nodo
{
    int dato;
    nodo *next;
};
class cLista
{
private:
    nodo *lista, *fin, *aux;
    int contador;

public:
    cLista();
    ~cLista();
    bool vacia();
    void aniadir();
    void recorrer();
    void quitar();
};

cLista::cLista()
{
    lista = NULL;
    contador = 0;
}
cLista::~cLista()
{

}
bool cLista::vacia()
{
    if (lista==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void cLista::aniadir()
{
    aux = new nodo;
    cout<<"Dame un número: ";
    cin>>aux->dato;
    aux->next=NULL;
    if (vacia())
    {
        lista=fin=aux;
    }
    else
    {
        fin->next=aux;
        fin=aux;
    }
    contador++;
}
void cLista::recorrer()
{
    if (vacia())
    {
        cout<<"No hay elementos en la lista"<<endl;
    }
    else
    {
        aux = lista;
        cout<<"************ MUESTRA LA LISTA ************"<<endl;
        for (int i=1; i<=contador;i++)
        {
            cout<<aux->dato<<"-->";
            aux = aux->next;
        }
        cout<<"NULL"<<endl;
    }

}
void cLista::quitar()
{
    int elemento;

    if (vacia())
    {
        cout<<"No hay elementos en la lista"<<endl;
    }
    else
    {
        aux = lista;
        elemento = aux->dato;
        lista = lista->next;
        delete aux;
        cout<<"El elemento borrado fue: "<<elemento<<endl;
        contador--;
    }
}
int main()
{
    
    setlocale(LC_ALL,"spanish");
    cLista objeto1;

    objeto1.aniadir();
    objeto1.recorrer();

    objeto1.aniadir();
    objeto1.recorrer();

    objeto1.quitar();
    objeto1.recorrer();

    objeto1.aniadir();
    objeto1.recorrer();

    return 0;
}