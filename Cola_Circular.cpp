#include<iostream>
#define MAX 6

using namespace std;

class CCola 
{
  private:
  int Frente;
  int Final;
  int arr[MAX];
  int Contador;
  
  public:
    void IntroducirElemento(int);
    bool ColaVacia();
    bool ColaLlena();
    int  Desencolar();
    void Imprimir();
    int  cont();
      CCola();
      ~CCola();
};  
      
  CCola::CCola() {
      Contador = 0;
      Frente = -1;
      Final = -1;
      for (int i = 0; i < MAX; i++) {
        arr[i] = 0;
      }
    }
  
  CCola::~CCola()
  {
      
  }
    
      void CCola::IntroducirElemento(int val) 
      {
    if (ColaLlena()) {
      cout << "Cola llena" << endl;
      return;
    } else if (ColaVacia()) {
      Final = 0;
      Frente = 0;
      arr[Final] = val;

    } else {
      Final = (Final + 1) % 6;
      arr[Final] = val;

    }
    Contador++;

  }
      
  bool CCola::ColaVacia() {
    if (Frente == -1 && Final == -1)
      return true;
    else
      return false;
  }
  bool CCola::ColaLlena() 
  {
    if ((Final + 1) % 6 == Frente)
      return true;
    else
      return false;
  }

  int CCola::Desencolar() 
  {
    int x = 0;
    if (ColaVacia()) {
      cout << "La cola esta vacia" << endl;
      return x;
    } else if (Final == Frente) {
      x = arr[Final];
      Final = -1;
      Frente = -1;
      Contador--;
      return x;
    } else {
      cout << "Valor desencolado de la posición: " << Frente << endl;
      x = arr[Frente];
      arr[Frente] = 0;
      Frente = (Frente+1) % 6;
      Contador--;
      return x;
    }
  }
  
  void CCola::Imprimir() 
  {
    cout << "\nDatos actuales en la cola " << endl;
    for (int i = 0; i < MAX; i++) {
      cout << arr[i] << "  ";
    }
  }
  
   int CCola::cont() 
  {
    return (Contador);
  }

   
int main() {
  int valor, opc;
  CCola re;
  do {
    cout << "\n 1. Encolar elementos" << endl;
    cout << "2. Desencolar elementos" << endl;
    cout << "3. ¿La cola esta vacia?" << endl;
    cout << "4. ¿La cola esta llena?" << endl;
    cout << "5. Contar elementos en la cola" << endl;
    cout << "6. Imprimir elementos" << endl;
    cout << "7. Salir"<< endl;
    cin >> opc;

    switch (opc) {
    case 1:
      cout << "\n Ingrese un número para encolar en la cola" << endl;
      cin >> valor;
      re.IntroducirElemento(valor);
      break;
    case 2:
      cout << "Desencolar Número \n: " << re.Desencolar() << endl;
      break;
    case 3:
      if (re.ColaVacia())
        cout << "La cola esta vacia" << endl;
      else
        cout << "La cola no esta vacia" << endl;
      break;
    case 4:
      if (re.ColaLlena())
        cout << "La cola esta llena" << endl;
      else
        cout << "La cola no esta llena" << endl;
      break;
    case 5:
      cout << "Elementos en la cola: " << re.cont() << endl;
      break;
    case 6:
      re.Imprimir();
      break;
      case 7:
          break;
    default:
      cout << "Error, no se encotro el número ingresado " << endl;
    }

  } while (opc != 7);

  return 0;
}