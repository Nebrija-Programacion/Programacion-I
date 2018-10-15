#include <iostream>
using namespace std;
int main()
{
 int b=0,num=5;
         double suma=0.0;
         cout<<"Para salir ingresa cero"<<endl;
          while(num!=0){
              cout<<"Ingresa un numero"<<endl;
              cin>>num;
              suma=suma+num;
              b++;
          }
         cout<<"La media es " << suma/(b-1) << endl;;
        return 0;
}
