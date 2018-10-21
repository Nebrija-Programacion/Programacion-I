#include <iostream>

using namespace std;




int main()
{
    int num; //Aquí me da un error semantico, el problema es que al hacer el cambio necesario, el programa deja de funcionar. Espero su feedback.
    int guardarNum{0};
   char s;


   while(num != s){ //Aquí sucede lo mismo que con el int num, espero su feedback
       cout << "Introduce un numero, si quieres parar presiona la s: ";
       cin >> num;
       guardarNum += num;
       if (num == s){
           cout << "El resultado total de la suma es: " << guardarNum << endl;
       }

   }

    return 0;
}
