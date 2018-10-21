#include <iostream>

using namespace std;




int main()
{
    int num;
    int guardarNum{0};
    int numeroDenumeros{0};
   char s;


   while(num != s){
       cout << "Introduce un numero, si quieres parar presiona la s: ";
       cin >> num;
       guardarNum += num; //Va sumando y números
       numeroDenumeros++; //Contador del número de números
       if (num == s){
           cout << "El resultado total de la suma es: " << guardarNum << endl;
           cout << "La media de la suma es: " << guardarNum / (numeroDenumeros - 1) << endl; ///Este es el encargado de hacer la media
       }

   }

    return 0;
}
