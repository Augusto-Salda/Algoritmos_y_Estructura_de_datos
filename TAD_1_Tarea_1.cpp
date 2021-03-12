#include <iostream>
#include <cmath>

using namespace std;

class Triangulo
{
private: 
    float base;
    float altura;
    
public:
    void obtener();
    float perimetro();
    float area();
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
void Triangulo::obtener()
{
    cout<<"Ingrese la base: \n"<<endl;
    cin>>base;
    cout<<"Ingrese la altura: \n"<<endl;
    cin>>altura;
}

float Triangulo::area()
{
    float A;
    A=(base*altura)/2;
    return A;
}

float Triangulo::perimetro()
{
    float P,R;
    P=(base*base)+(altura*altura);
    R=sqrt(P);
    return R;
}

int main()
{
    Triangulo objeto1;
    int opc;
    float resultado;
    cout<<"*****Triangulo*****"<<endl;
    cout<<"1. Area"<<endl;
    cout<<"2. Perimentro"<<endl;
    cout<<"Elige una opción ..."<<endl;
    cin>>opc;
    switch(opc){
        
    {
        case 1:
            objeto1.obtener();
            cout<<"El area es: "<<objeto1.area()<<endl;
            break;
    }
    case 2:
    {
        objeto1.obtener();
        cout<<"El perímetro es:"<<objeto1.perimetro()<<endl;
        break;
    }
    default:
    {
        cout<<"Opcion no valida"<<endl;
    }
 }   
}

