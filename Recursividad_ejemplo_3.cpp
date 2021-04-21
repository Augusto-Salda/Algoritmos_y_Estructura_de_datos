#include<iostream>

using namespace std;

class CInvertir
{
public:
    int Invertir(int);
    int ValPos(int);
    int NumDig(int);
};

int CInvertir::NumDig(int num)
{
    if (num<10)
        return 1;
    else
        return 1+NumDig(num/10);
}

int CInvertir::ValPos(int n)
{
    if(n==1)
        return 1;
    else
        return 10*ValPos(n-1);
}

int CInvertir::Invertir(int num) 
{
    if (num<10)
        return num;
        else
            return (num%10)*ValPos(NumDig(num))+Invertir(num/10);
}

int main()
{
    CInvertir Inv;
    int numero;
    cout<<"Numero: "<<endl;
    cin>>numero;
    cout<<"El numero invertido es: "<<Inv.Invertir(numero)<<endl;
    return 0;
}