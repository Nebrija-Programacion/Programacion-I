#include <iostream>

using namespace std;

void MaxMin(int a){
    float b;
    int i{1};
    cout<<"Escribe un numero"<<endl;
    cin>>b;
    float max{b};
    float min{b};
    while (i<a){
            cout<<"Escribe un numero"<<endl;
            cin>>b;
            if (b<min){
                min=b;
            }
            else {
                min=min+0;
            }
            if (b>max){
                max=b;
            }
            else{
                max=max+0;
            }
            i++;
    }
    cout<<"El maximo es "<<max<<" y el minimo es "<<min<<endl;
}
int main()
{
    int a;
    cout<<"Escribe la cantidad de numeros que deseas introducir"<<endl;
    cout<<"y te mostrare el maximo y el minimo"<<endl;
    cin>>a;
    MaxMin(a);
    return 0;
}
