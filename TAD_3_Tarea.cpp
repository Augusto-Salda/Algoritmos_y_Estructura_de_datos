#include <iostream>

using namespace std;

class Sueldo_net
{
private:
    float Sueldo;
    float Ventas;
    public:
        float Suma();
        void obtencion();
        Sueldo_net();
        ~Sueldo_net();
};
//Constructor
Sueldo_net::Sueldo_net()
{
    
}
//Destructor
Sueldo_net::~Sueldo_net()
{
    
}
void Sueldo_net::obtencion(){
    cout<<"Ingrese su sueldo mensual: "<<endl;
    cin>>Sueldo;
    cout<<"Ingrese sus ventas en el mes: "<<endl;
    cin>>Ventas;
}

float Sueldo_net::Suma(){
    float SN,CV,SC;
    CV=Ventas*0.4;
    SN=Sueldo+CV;
    SC=SN*0.84;
    return SC;
}

int main(){
    Sueldo_net objeto1;
    objeto1.obtencion();
    cout<<"Su sueldo neto con iva y comisisón de ventas es:\t"<<objeto1.Suma()<<endl;
}