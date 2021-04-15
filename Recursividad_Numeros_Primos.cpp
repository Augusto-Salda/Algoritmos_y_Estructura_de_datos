#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Primos
{
public:
    bool PrimoRecursivo(int , int );
};


bool Primos::PrimoRecursivo(int num, int div)
{
    if(div==1)
        return true;
    else
    {
    if((div>=2)&&(div<num))
    {
        if((num%div)==0)
        {
            return false;
        }
    }
    PrimoRecursivo(num,div-1);
  }
}

int main()
{
Primos pri;
int n;
cout<<"Numero: "<<endl;
cin>>n;
if(pri.PrimoRecursivo(n,n)==true)
    cout<<"Es primo"<<endl;
else
    cout<<"No es primo"<<endl;
return 0;
}
