#include <iostream>
#include <string>

using namespace std;

void paradaSuma(string parada, int a){
    int suma;
    cout << "Introduce un numero, si quieres parar di basta: " << endl;

    while(parada != "basta"){
    cout << "Dame un numero" << endl;
    cin >> a;
    cout << "Si desea salir escriba basta, si no no" << endl;
    cin >> parada;

    suma = suma + a;
    }
    cout << "La suma de los numeros introducidos es " << suma << endl;
}

int main()
{
    int a;
    string parate;
    paradaSuma(parate,a);
    return 0;
}
