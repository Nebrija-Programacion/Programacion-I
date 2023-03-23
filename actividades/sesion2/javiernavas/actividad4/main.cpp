#include <iostream>

using namespace std;

int main(){
   int a{0},i,number;

   cout << "Introduce un numero:" << endl;
   cin>>number;

    for(i=1; i<(number+1) ;i++) {
         if(number%i==0){
             a++;
            }
         }

         if(a!=2){
              cout<< "No es un numero primo." << endl;
            }else{
                cout<< "Si es un numero primo." << endl;
         }
    return 0;
}
