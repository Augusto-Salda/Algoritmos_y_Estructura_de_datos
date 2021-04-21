#include <iostream>

using namespace std;

class CRestSuc
{
public:
    int RestSuc(int , int);
};

int CRestSuc::RestSuc(int dividendo, int divisor)
{
    if(dividendo<divisor)
    {
    return 0;    
    }
    else
    {
        return 1+RestSuc(dividendo-divisor,divisor);
    }   
}

int main()
{
    CRestSuc Res;
    int num1,num2;
    cout<<"Dividendo: "<<endl;
    cin>>num1;
    cout<<"Divisor: 2"<<endl;
    cin>>num2;
    cout<<Res.RestSuc(num1,num2)<<endl;
    return 0;
}

//353
//2334