#include <iostream>
#include <string>
using namespace std;

bool esNumeros(float a){
    int cont{0};
    float suma{0};
    string parada;
    float media;

    while (parada != "basta"){
        cout << "Introduce un numero: " << endl;
        cin >> a;
        cont ++;
        cout << "Si quieres pagar di basta, si quieres seguir escriba contunua " << endl;
        cin >> parada;
        suma = suma + a;
        media = suma/cont;

    }
    cout << "La media es: " << media << endl;
}


int main()
{
    int a;
    esNumeros(a);
    return 0;
}
