#include <iostream>

using namespace std;

unsigned int SumaDivTres(unsigned int a){
    int suma{0};
    for (int i{1};i<a;i++){
        if(i%3==0){
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
    cout<<"La suma de los numeros menores al parametro divisibles entre 3 es : "<<SumaDivTres(a)<<endl;
    return 0;
}
