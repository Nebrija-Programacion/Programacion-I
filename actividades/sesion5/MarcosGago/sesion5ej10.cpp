#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void Mediana(unsigned int a){
    float b;
    unsigned int i{0};
    vector <float> serie;
    /*Aqui he configurado el tamaño del vector porque de otra forma
        * tendria que escoger un valor y usarlo para parar de meter
        * elementos, y eso limita los valores que le puedo introducir*/
    while (i<a){
        cout<<"Escribe un elemento"<<endl;
        cin>>b;
        serie.push_back(b);
        i++;
    }
    if (a%2==0){
        sort(serie.begin(), serie.end());
        float mediana1{(serie[(i/2)-1]+serie[i/2])/2};
        cout<<"La mediana es: "<<mediana1<<endl;
    }
    else {
            sort(serie.begin(), serie.end());
            float mediana2{serie[i/2]};
            cout<<"La mediana es: "<<mediana2<<endl;
    }
}
int main()
{
    unsigned int a;
    cout<<"Escribe la cantidad de numeros que deseas introducir"<<endl;
    cout<<"y despues te mostrare la mediana"<<endl;
    cin>>a;
    Mediana(a);
    return 0;
}
