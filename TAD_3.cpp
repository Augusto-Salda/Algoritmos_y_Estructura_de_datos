#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


class Circulo{
private:   
    float Radio;
    
public:
    float area();
    float perimetro();
    float diametro();
    void obtener();
};

void Circulo::obtener(){
    cout<<"\n Dame el radio del círculo: \n"<<endl;
    cin>>Radio;
}

float Circulo::area(){
    float area;
    area= 3.1416*Radio*Radio; 
    return area;
}

float Circulo::diametro(){
    float diametro;
    diametro=2*3.1416*(Radio);
    return diametro;
}

float Circulo::perimetro(){
    float perimetro,diametro;
    diametro=2*3.1416*Radio;
    perimetro=3.1416*diametro;
    return perimetro;
}

int main(){
    
    Circulo Objeto1;
    Objeto1.obtener();
    cout<<"\n El área del círculo es: "<<Objeto1.area()<<endl;
    cout<<"\n El diámetro del circulo es:"<<Objeto1.diametro()<<endl;
    cout<<"\n El perimetro del circulo es::"<<Objeto1.perimetro()<<endl;
return 0;
}
    