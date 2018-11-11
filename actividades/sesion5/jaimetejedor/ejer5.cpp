#include <iostream>

using namespace std;

int sumaMenores(int a){
    int suma{0};
    int i;
    for ( i = 1 ; i <= a ; i++ ){
        if((a % i) == 0){
            suma = suma + i;
        }
    }
    return suma;
}

int main()
{
    int a;
    cout << "Introduzca un numero pls: " << endl;
    cin >> a;

    cout << "La suma de los menores divisibles del numero es: " << sumaMenores(a) << endl;
    return 0;
}
