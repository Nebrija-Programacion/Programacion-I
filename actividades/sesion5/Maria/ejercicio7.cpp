#include <iostream>

using namespace std;

int main()
{
 int i,b=0,num=5;
         double suma=0.0;
        cout << "Para parar el programa introduce un 0" << endl;
          while(num!=0){
        cout << "Introduce un numero: ";
        cin >> num;
              suma=suma+num;
              b++;
          }
         cout << "La media es: "<< suma/(b-1) << endl;
    return 0;
}
