#include <iostream>

using namespace std;

int sumaMenores(int a){
    int suma{0};
    for (int i=a; i>=0; i--){
        if ((i % 3) == 0){ //si i es divisible entre 3
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

    cout << "La suma es = " << sumaMenores(a) << endl;

    return 0;
}
