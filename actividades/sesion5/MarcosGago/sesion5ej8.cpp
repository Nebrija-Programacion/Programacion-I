#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

void desvTip(unsigned int i){
    vector <float> serie;
    float suma{0};
    float num;
    unsigned int cont{0};
    /*Aqui he configurado el tamaño del vector porque de otra forma
     * tendria que escoger un valor y usarlo para parar de meter
     * elementos, y eso limita los valores que le puedo introducir*/
    while (cont < i){
        cout<<"Escribe un elemento"<<endl;
        cin>>num;
        serie.push_back(num);
        suma=suma+serie[cont];
        cont++;
    }
    float media=suma/i;
    double oper{0};
    for(unsigned int a{0}; a<serie.size(); a++){
        oper=oper+pow(serie[a]-media, 2);
    }
    double desv=sqrt(oper/i);
    cout<<"La desviacion tipica es "<<desv<<endl;
}

int main()
{
    cout<<"Escribe el numero de elementos"<<endl;
    unsigned int i;
    cin>>i;
    desvTip(i);
    return 0;
}
