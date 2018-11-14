#include <iostream>
using namespace std;

int SumaFactores(int a)
{
    int num = 0;
    for (int i=1; i<=a; i++)
    {
        if (a % i == 0)
        {
            num = num + i;
        }
    }
    return num;
}

int main()
{
    int a;
    cout << "Vamos a sumar todos los divisores del numero que nos digas" << endl;
    // Ejemplo: el numero 9, sus divisores son 1, 3 y 9, y la suma de ellos da como resutado 13.
    cout << "Dime el primer numero que pase por tu mente:" ;
    cin >> a;

    cout << "La suma de sus divisores es igual a " << SumaFactores(a) << endl;

    return 0;
}
