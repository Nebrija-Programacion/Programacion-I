#include <iostream>

using namespace std;
int sumaMenores(int a){
    int suma{0};
    int i;
    for ( i = 0 ; i <= a ; i++ ){
        if((i % 3) == 0){
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

    cout << "La suma de los menores divisibles de 3 es: " << sumaMenores(a) << endl;
    return 0;
}
