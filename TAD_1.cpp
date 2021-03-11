#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Persona{
private:
    char nombre [40];
    
public:
    void dormir();
    void hablar();
    void contar();
    void decirnombre();
    void adquirirnombre();
};
void Persona::dormir(){
    
    cout<<"No me molesten estoy durmiendo Atte."<<nombre<<endl;  
}

void Persona::hablar(){
    
    cout<<"Platicando con el gusto de convivivr... Atte."<<nombre<<endl;
    
}

void Persona::contar(){
    
    cout<<"1..2..3..4..5 y ya no me los sé... Atte."<<nombre<<endl;
}

void Persona::adquirirnombre(){
    
    cout<<"¿Cuál es tu nombre? \n"<<nombre<<endl;
    cin>>nombre;
}

void Persona::decirnombre(){
    
    cout<<"Mi nombre es: \t"<<nombre<<endl;
}

int main(){
    Persona Per1;
    Persona Per2;
    Per1.adquirirnombre();
    Per2.adquirirnombre();
    
    Per1.dormir();
    Per1.hablar();
    Per2.hablar();
    Per2.contar();
    Per1.decirnombre();
    return 0;
}