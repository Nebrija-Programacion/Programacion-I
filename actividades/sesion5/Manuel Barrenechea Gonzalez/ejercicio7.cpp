#include <iostream>

using namespace std;

int main()
{
    int x, y{-1}, i{0};
    int suma{0};
    int media;

    while(y != 0){
        cout << "Introduce un numero: " << endl;
        cin >> x;

        suma = suma + x;

        i++;

        cout << "Si desea parar introduzca 0, para seguir introduzca cualquier otro numero:" << endl;
        cin >> y;
    }

    media = suma/i;

    cout << "El resultado de la media de todos los numeros es: " << media << endl;

    return 0;
}
