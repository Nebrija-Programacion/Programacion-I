#include <iostream>

using namespace std;

float suma(int a){
   int resultado=0;
    for(int i{1}; i<=a; i++){
  if((a % i) == 0){
    resultado = i + resultado;
  }
    }
 return resultado;
}


int main()
{

    int a;

    cout << "Mete un numero entero positivo ";
    cin >> a;

    cout << "Este es el resultado de la suma: " << suma(a)  <<endl;



    return 0;
}
