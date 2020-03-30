#include <iostream>

using namespace std;

int main (int a){
    a=0;
   while(a<=0){
      cout << "Introduce un numero entero positivo " << endl;
      cin >> a;
   }


    int sum;
       sum =0;
      for (int i=1; i<a; i++)
       {
           if (a%i==0){
               sum= sum+i;
           } else {sum=sum;}

       }
      cout << "La suma de los divisores de tu numero es " << sum << endl;
      cout << "Si quieres la suma con tu numero incluido seria " << sum + a << endl;
      return 1;
}






