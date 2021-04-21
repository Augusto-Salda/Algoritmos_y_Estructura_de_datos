#include <iostream>

using namespace std;

class CSumatoria 
{
public: 
    int sumatoria(int);
};

int CSumatoria::sumatoria(int N)
{
    int dat;
    if(N==0)
    {
        
        return 0;  
    }
    else
    {
        cout<<"Dato: "<<endl;
        cin>>dat;
        return dat+sumatoria(N-1);
    }
}
int main()
{
    CSumatoria sum;
    int n, res;
    cout<<"Numero: "<<endl;
    cin>>n;
    res=sum.sumatoria(n);
    cout<<"La suma de los datos es: "<<res<<endl;
    return 0;
}