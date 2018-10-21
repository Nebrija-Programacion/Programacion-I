#include <iostream>

using namespace std;

int sumaMenores(int num){
    int suma{0};
    int i;
    for(i=0; i<num; i++){
        if((i % 3) == 0){
            suma += i;
        }
    }
    return suma;
}

int main()
{
    int num;
    cout << "Introduzca un numero y sumare los divisibles por 3 menores que el: " << endl;
    cin >> num;
    cout << "El resultado es: " << sumaMenores(num) << endl;

    return 0;
}
