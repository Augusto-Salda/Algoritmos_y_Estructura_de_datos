#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Factorial{
public:  
    double factorial (double) ;
};

double Factorial::factorial(double n)
{
    if((n==0)||(n==1)) 
    {
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    
    Factorial Fa;
    double N;
    cout<<"Numero: "<<endl;
    cin>>N;
    cout<<"El factorial de "<<N<<" es: "<<Fa.factorial(N)<<endl;
    return 0;
}