#include <iostream>

using namespace std;

unsigned int SumaDivisores(unsigned int a){
    int suma{0};
    for (int i{1};i<=a/2;i++){
        if(a%i==0){
            suma=suma+i;
        }
        else {
          suma=suma+0;
        }
    }
    return suma;
}
int main()
{
    unsigned int a;
    cout<<"Introduce un numero"<<endl;
    cin>>a;
    cout<<"La suma de los divisores de "<<a<<" es : "<<SumaDivisores(a)<<endl;
    return 0;
}
