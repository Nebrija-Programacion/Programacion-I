#include <iostream>
#include <string>

using namespace std;

void paradaSuma(string parada, float a){
    int cont{0};
    float suma, media{0.0};
    cout << "Introduce un numero: " << endl;

    while(parada != "basta"){
    cout << "Dame un numero" << endl;
    cin >> a;
    cont++;
    //cout << cont << endl; Para indicarme si el contador esta sumando bien.
    cout << "Si desea salir escriba basta, si no no" << endl;
    cin >> parada;

    suma = suma + a;
    media = suma/cont;
    }

    cout << "La media de los numeros introducidos es " << media << endl;
}

int main()
{
    float a;
    string parate;
    paradaSuma(parate,a);
    return 0;
}
