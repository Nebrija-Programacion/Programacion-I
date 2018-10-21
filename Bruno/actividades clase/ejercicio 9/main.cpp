#include <iostream>
using namespace std;

int main (int a, int mayor, int menor){
      a=1;
      menor=0;
      mayor=0;
   while(a!= 0){
      cout << "Introduce un numero entero positivo " << endl;
      cout << "Si introduces 0 el programa termina " << endl;
      cin >> a;
      if (a>mayor){
          mayor=a;
          }else{
      if (a<menor&&a!=0){
          menor=a;
      }
      }
   }
    cout << "El mayor de esos numeros es " << mayor << endl;
    cout << "El menor de esos numeros es " << menor << endl;
   return 0;
}
