#include <iostream>

using namespace std;

int main()
{
    int x;
    int suma{0};

    while(x != 0){
        cout << "Introduce un numero distinto de 0 para seguir sumando: " << endl;
        cin >> x;

        suma = suma + x;
    }

    cout << "El resultado de la suma de todos los numeros es: " << suma << endl;

    return 0;
}
