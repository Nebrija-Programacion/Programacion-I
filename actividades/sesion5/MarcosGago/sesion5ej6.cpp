#include <iostream>

using namespace std;

void SumaTotal(int a){
    int suma{0};
    while (a!=0){
        suma=suma+a;
        cout<<"Escribe un numero"<<endl;
        cin>>a;
    }
    cout<<"La suma total es "<<suma<<endl;
}
int main()
{
    int a;
    cout<<"Escribe numeros hasta que quieras. Cuando te canses, escribe 0 y te mostrare la suma de todos ellos"<<endl;
    cin>>a;
    SumaTotal(a);
    return 0;
}
