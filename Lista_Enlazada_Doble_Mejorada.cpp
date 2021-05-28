#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

struct nodo{
    int dato /*dato2, auxint*/;
    nodo *next;
    nodo *anterior;
       
};
struct nodo2{
    nodo2 *next2;
     nodo2 *anterior2;
    string Palabra;
};
class cLista{
private:
    nodo *inicio, *fin, *aux, *i, *j;// i y j solo son para manejar el ordenamiento
    nodo2 *inicio2, *aux2,*fin2;
    int contador; // delimita al mostrar la lista
    int contador2;
 
public:
    cLista();
    ~cLista();
    bool vacia();
    bool vacia2();
    void aniadir();
    void recorrer();
    void quitarFinal();
    void quitarInicio();
    void ordenamientoBurbuja();
    void recorrerFinal();
    void BusquedaSecuencial(int);
    void AgregarPalabras();
    void RecorrerPalabras();
};

cLista::cLista(){
    inicio = NULL;
    contador = 0;
    contador2 = 0;
}
cLista::~cLista(){

}
bool cLista::vacia(){
    if (inicio==NULL || contador==0 ){
        return true;
    }
    else{
        return false;
    }
}
bool cLista::vacia2(){
    if(inicio2==NULL || contador2==0){
        return true;
    }else{
        return false;
    }
}

void cLista::aniadir(){
    aux = new nodo;
    cout<<"Dame un número: ";
    cin>>aux->dato;
    aux->next=NULL;
    if (vacia())
    {
        inicio=fin=aux;
    }
    else
    {
        fin->next=aux;
        aux->anterior=fin; // agregada para quitar al inicio
        fin=aux;
        //aux->dato2=fin->dato;
    }
    contador++;
}

void cLista::AgregarPalabras()
{
        aux2 = new nodo2;
        cout<<"Escriba una palabra a guardar: ";
        cin>>aux2->Palabra;
        aux2->next2=NULL;
        if(vacia2())
        {
            inicio2=fin2=aux2;
        }
        else
        {
            fin2->next2=aux2;
            aux2->anterior2=fin2;
            fin2=aux2;
        }
        contador2++;
}

void cLista::RecorrerPalabras()
{
        if (vacia2()){
        cout<<"No hay palabras en la lista"<<endl;
    }
    else{
        aux2 = inicio2;
        cout<<"\n\n************ MUESTRA LA LISTA ************"<<endl;
        for (int i=1; i<=contador2;i++){
            cout<<"["<<aux2->Palabra<<"]"<<" -> ";
            aux2 = aux2->next2;
        }
        cout<<"NULL"<<endl;
    }
}

void cLista::ordenamientoBurbuja(){
    i = inicio; // delimitamos que el ordenamiento comience desde el inicio (puede ir moviendose el inicio al elimiar elementos)
    while(i != NULL){ // ¿hay elementos? ejetucar mientras haya algún elemento en inicio
        j = i->next;
        while(j != NULL){
            if(i->dato > j->dato){
                int aux = j->dato;
                j->dato=i->dato;
                i->dato=aux;
            }
            j=j->next;
        }
        i=i->next;
    }
    
    /*while(contador>=1 && aux->dato>aux->dato2 && contador==2){
        aux->auxint=aux->dato2;
        aux->dato2=aux->dato;
        aux->dato=aux->auxint;
    }
    contador--;*/
}
void cLista::recorrer(){
    if (vacia()){
        cout<<"No hay elementos en la lista"<<endl;
    }
    else{
        aux = inicio;
        cout<<"\n\n************ MUESTRA LA LISTA ************"<<endl;
        for (int i=1; i<=contador;i++){
            cout<<"["<<aux->dato<<"]"<<" -> ";
            aux = aux->next;
        }
        cout<<"NULL"<<endl;
    }
}


void cLista::recorrerFinal(){
    if (vacia()){
        cout<<"No hay elementos en la lista"<<endl;
    }
    else{
        aux = fin;
        cout<<"\n\n************ MUESTRA LA LISTA ************"<<endl;
        for (int i=1; i<=contador;i++){
            cout<<"["<<aux->dato<<"]"<<" -> ";
            aux = aux->anterior;
        }
        cout<<"NULL"<<endl;
    }
}



void cLista::quitarInicio(){
    int elemento;

    if (vacia()){
        cout<<"No hay elementos en la lista"<<endl;
    }
    else{
        aux = inicio;
        elemento = aux->dato;
        inicio = inicio->next;
        delete aux;
        cout<<"El elemento borrado fue: "<<elemento<<endl;
        contador--;
    }
}
void cLista::quitarFinal(){
    int elemento;
    
    if(vacia()){
        cout << "No hay elementos en la lista." << endl;
    }else{
        aux = fin;
        elemento = aux-> dato;
        fin = fin->anterior;
        delete aux; 
        cout << "El elemento borrado fue: " << elemento<<endl;
        contador--;
    }

}
void cLista::BusquedaSecuencial(int datobus)
{
    int i=0;
    char flag='F';
    aux=inicio;
    if(vacia()){
        cout<<"No hay elementos que buscar"<<endl;
    }else{
     while((flag=='F') && (1<contador)){
         if(aux->dato>=datobus){
             flag='F';
             if(aux->dato==datobus){
                 flag='V';
                         
             }
             break;
         }
         i++;
         aux = aux->next;
    }
     if(flag=='F'){
        cout<<"El dato no fue "<<"["<<datobus<<"]"<<"No fue encontrado en la lista"<<endl;
        
     }else{
         cout<<"El dato"<<"["<<datobus<<"]"<<"Se encontro con éxito"<<"\t En la posición \t"<<"["<<contador<<"]"<<endl;
     }
  }
}


int main(){
    cLista objeto1;
    // Menú 
    int opcion=0;
    int dato=0;
    do{
        cout << "\n\n\tMenú de opciones.\n1) Insertar número.\n2) Eliminar elemento al inicio de la lista."
                "\n3) Eliminar elemento al final de la lista.\n4) Imprimir Lista de inicio a fin. \n5) Imprimir de fin a inicio.  \n6) Buscar elemento. \n7) Agregar Palabras. \n8) Recorrer palabras""." 
                "\n9) Limpiar Pantalla. \n0) Salir"<< endl;
        cout << "Opción-> ";
        cin >> opcion;
        switch(opcion){
            case 1:{
                objeto1.aniadir();
                objeto1.ordenamientoBurbuja();
                break;
            }
            case 2:{
                objeto1.quitarInicio();
                break;
            }
            case 3:{
                objeto1.quitarFinal();
                break;
            }
            case 4:{
                objeto1.recorrer();
                break;
            }
            case 5:{
               objeto1.recorrerFinal();
                break;
            }
            case 6:{
                cout<<"Ingrese el número a buscar en la lista: "<<endl;
                cin>>dato;
                objeto1.BusquedaSecuencial(dato);
                break;
            }            
            case 7:{
                objeto1.AgregarPalabras();
            }
            break;
            case 8:{
                 objeto1.RecorrerPalabras();
            }
            break;
            case 9:{
                system("clear");  
            }
            break;
            case 0:{
                cout<<"Fin"<<endl;
            }
            break;
                default:{
                cout << "Ingrese una opción válida." <<endl;
            }
        }
    }while(opcion!=0);

    return 0;
}