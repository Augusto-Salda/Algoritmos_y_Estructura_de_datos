#include <iostream>
using namespace std;

struct Puntero{
	int Dato;
	Puntero *Sig;
};

class CPila{
	private:
		Puntero *Temp;
		Puntero *X;
	public:
    	void ingresar(int);
    	void sacar();
    	bool vacia();
    	void imprimir();
    	int etope();
    	CPila();
    	~CPila();
};

CPila::CPila(){
	Temp=NULL;
	X=NULL;
}

void CPila::ingresar(int Dato){
		int Dat;
		X = new Puntero;
		cout<<"Dato: ";
		cin>>Dat;
		X -> Dato=Dat;
		X -> Sig=Temp;
		Temp = X;
		cout<<"El dato se guardo correctamente: ";
		cout<<Temp->Dato<<endl<<endl;
}

void CPila::sacar(){
	if(vacia()==true){
		cout<<"La pila esta vacia"<<endl<<endl;
	}
	else{
		int Dat;
		Puntero *AUX;
		AUX=Temp->Sig;
		Dat=Temp->Dato;
		delete Temp;
		Temp=AUX;
		cout<<"El elemento que se saco es: "<<Dat<<endl<<endl;
	}
}

bool CPila::vacia(){
	if(Temp==NULL)
		return true;
	else
		return false;
}

void CPila::imprimir(){
	Puntero *AUX;
	AUX=Temp;
	if (vacia()==true){
        cout<<"La pila esta vacia"<<endl;
    }
    else{
    	while(Temp!=NULL){
            cout<<"| "<< Temp->Dato <<" |"<<endl;
            cout<<"_"<<endl;
            Temp=Temp->Sig;
        }
    }
    Temp=AUX;
    cout<<endl;
}

int CPila::etope(){
    if (vacia()==true){
    	cout<<"La pila esta vacia"<<endl<<endl;
    	return NULL;
	}
    else{
        return Temp->Dato;
    }
}

CPila::~CPila(){

}

int main(){
	int Opc,Dat;
    CPila Obj1;

    do{
        cout<<"Ingresar pila ---------> 1"<<endl;
        cout<<"Sacar pila ------------> 2"<<endl;
        cout<<"Imprimir pila ---------> 3"<<endl;
        cout<<"Elemento tope ---------> 4"<<endl;
        cout<<"Salir -----------------> 5"<<endl;
        cout<<"Elige un opcion: ";
        cin>>Opc;
        switch (Opc)
        {
        case 1:
            {
                Obj1.ingresar(Dat);
            }
            break;
        case 2:
        	{
        		Obj1.sacar();
			}
			break;
		case 3:
			{
				Obj1.imprimir();
			}
			break;
		case 4:
			{
				int cima;
				cima=Obj1.etope();
				if(cima!=NULL)
					cout<<"El elemento en la cima es: "<<cima<<endl<<endl;
			}
			break;
        case 5:
            {
                cout<<"Adios"<<endl;
            }
            break;
        default:
            {
                cout<<"No es una opcion valida"<<endl;
            }
        }
    }
    while (Opc!=5);
    return 0;
}