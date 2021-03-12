#include <iostream>
#include <cmath>

using namespace std;

class Triangulo
{
private:
    float C1;
    float C2;   
    public:
        float hipotenusa();
        float area();
        float perimetro();
        void obtencion();
        Triangulo();
        ~Triangulo();
};
//Constructor
Triangulo::Triangulo(){
    
}
//Destructor
Triangulo::~Triangulo()
{
    
}

void Triangulo::obtencion(){
    cout<<"Introduce el cateto adyacente: \n"<<endl;
    cin>>C1;
    cout<<"Introduce el cateto opuesto: \n"<<endl;
    cin>>C2;
}

float Triangulo::hipotenusa(){
    float H;
    H=sqrt((C1*C1)+(C2*C2));
    return H;
}
 
float Triangulo::area(){
    float A;
    A=(C1*C2)/2;
    return A;
}

float Triangulo::perimetro(){
    float P,H;
    H=sqrt((C1*C1)+(C2*C2));
    P=H+C1+C2;
    return P;
}

int main(){
    
    Triangulo objeto1;
    objeto1.obtencion();
    cout<<"La hipotenusa del triangulo rectangulo es: \t"<<objeto1.hipotenusa()<<endl;
    cout<<"El area del triangulo rectangulo es: \t"<<objeto1.area()<<endl;
    cout<<"El perimetro del triangulo rectangulo es: \t"<<objeto1.perimetro()<<endl;
}