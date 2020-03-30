#include <iostream>
using namespace std;

int main (int a, int sum){
   sum=0;
   while(a!= 0){
      cout << "Introduce un numero entero positivo " << endl;
      cout << "Si introduces 0 el programa termina " << endl;
      sum=sum+a;
      cin >> a;
   }
   cout << "La suma de todos esos numeros es " << sum-1 << endl;;
   return 0;
}



