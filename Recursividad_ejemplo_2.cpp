#include <iostream>

using namespace std;

class CSumDig
{
public:
    int SumDig(int);
};

int CSumDig::SumDig(int num)
{
    if (num<10)
    {
        return num;
    }
    else
    {
        return num%10 + SumDig(num/10);
    }
}

int main()
{
    CSumDig sum;
    int num;
    cout<<"Numero: "<<endl;
    cin>>num;
    cout<<"La suma de los digitos es :"<<sum.SumDig(num)<<endl;
}
