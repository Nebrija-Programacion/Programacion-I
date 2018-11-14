#include <iostream>
using namespace std;
int main(){
   int a=0,i,n;
         cout<<"Introduce un numero: ";
         cin>>n;
         for(i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es un numero Primo" << endl;
            }else{
                cout<<"Si  un numero Primo" << endl;
         }
    return 0;
}
