#include <iostream>
using namespace std;
int main(){
   int a=0,i,num;
         cout<<"Introduzca un numero "<<endl;
         cin>>num;
         for(i=1;i<(num+1);i++){
         if(num%i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo"<< endl;
            }else{
                cout<<"Si es Primo "<<endl;
         }
    return 0;
}
