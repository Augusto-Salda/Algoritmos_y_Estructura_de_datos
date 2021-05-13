#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <string.h>

#define MAX 20
        
using namespace std;

class CPila
{
private:
    string Pila[MAX];
    string *Puntero = 0;
    int Tope;
public:
    void TextoVolteado();
    void Texto();
    CPila();
    ~CPila();
};

CPila::CPila()
{
    Pila[0]={"Hoy ha sido el peor día de mi vida"};
    Pila[1]={"Y no trates de convencerme de que"};
    Pila[2]={"Hay algo positivo en cada día que vivimos"};
    Pila[3]={"Porque si te fijas"};
    Pila[4]={"Este mundo es un lugar lleno de maldad"};
    Pila[5]={"Incluso cuando"};
    Pila[6]={"Algo bueno sale a la luz de vez en cuando"};
    Pila[7]={"La felicidad y la satisfacción no durarán" };
    Pila[8]={"Y no es cierto que"};
    Pila[9]={"Todo está en la mente y en el corazón"};
    Pila[10]={"Porque"};
    Pila[11]={"La verdad felicidad puede alcanzarse"};
    Pila[12]={"Únicamente si lo que te rodea es bueno"};
    Pila[13]={"No es cierto que lo bueno existe"};
    Pila[14]={"Seguro que estarás de acuerdo conmigo en que"};
    Pila[15]={"La realidad"};
    Pila[16]={"Crea"};
    Pila[17]={"Mi actitud"};
    Pila[18]={"No hay nada que yo pueda controlar"};
    Pila[19]={"Y jamás me escucharás decir que"};
    Pila[20]={"Hoy ha sido un buen día"};
    Tope=-1;
}

CPila::~CPila()
{
  
}

void CPila::Texto()
{
    for(int i=0; i<MAX ; i++){
      Puntero = &Pila[i];
      cout<<*Puntero<<endl;
    }
}


/*void CPila::TextoVolteado()
{
        for(int i=Tope;i>=0;i--)
        {
            Puntero = &Pila[i];
            cout<<"| "<<*Puntero<<"|"<<endl;
            cout<<"______________"<<endl;
        }
}
*/

int main()
{ 
    CPila obj1;
    obj1.Texto();   
    return 0;
}