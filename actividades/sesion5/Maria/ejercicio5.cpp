#include <iostream>

using namespace std;

int main()
{

    int num;
    int a;
    int i;

    cout << "Introduce un numero: ";
    cin >> num;

    a=1;

    for (i=2;i<=(num/2);i++) {
        if (num%i==0) {
            a=a+i;
        }
    }
    a=a+num; //Sumamos el numero inicial que es divisor de él mismo

    cout << "  " << endl;
    cout << "La suma de los divisores de " << num << " es: " << a << endl;
    cout << "  " << endl;
    return 0;
}
