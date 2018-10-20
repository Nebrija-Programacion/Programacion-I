#include <iostream>

using namespace std;

int sumaFactores(int a){
    int suma{0};
    for (int i=1; i<=a; i++){
        if ((a % i) == 0){
            suma = suma + i;
        }
    }
    return suma;
}

int main()
{
    int a;
    cout << "Introduce un numero: ";
    cin >> a;

    cout << "La suma es = " << sumaFactores(a) << endl;

    return 0;
}
