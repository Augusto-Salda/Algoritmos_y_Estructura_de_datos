#include <iostream>
#define pi 3.1416

using namespace std;

class Circulo
{
private: 
    float radio;
    
public:
    void obtener();
    float diametro();
    float perimetro();
    float area();
    Circulo();
    ~Circulo();
};

//Constructor
Circulo::Circulo()
{
    
}

//Destructor
Circulo::~Circulo()
{
    
}
void Circulo::obtener()
{
    cout<<"Ingrese el radio: "<<endl;
    cin>>radio;
    
}
float Circulo::diametro()
{
    float d;
    d=radio*2;
    return d;
}
float Circulo::perimetro()
{
    float p;
    p=pi*diametro();
    return p;
}
float Circulo::area()
{
    float a;
    a = pi*radio*radio;
    return a;
}
int main()
{
    Circulo objeto1;
    int opc;
    float resultado;
    cout<<"*****Circulo*****"<<endl;
    cout<<"1. Diametro"<<endl;
    cout<<"2. Perimetro"<<endl;
    cout<<"3. Area"<<endl;
    cout<<"Elige una opción ..."<<endl;
    cin>>opc;
    switch(opc){
        
    {
        case 1:
            objeto1.obtener();
            resultado=objeto1.diametro();
            cout<<"El diametro es: "<<resultado<<endl;
            break;
    }
    case 2:
    {
        objeto1.obtener();
        cout<<"El perímetro es:"<<objeto1.perimetro()<<endl;
        break;
    }
    case 3:
    {
        objeto1.obtener();
        cout<<"El área es:"<<objeto1.area()<<endl;
        break;
    }
    default:
    {
        cout<<"Opcion no valida"<<endl;
    }
 }   
}

