#include <iostream>
using namespace std;

int SumaMenoresDivisibles(int a)
{
    int num = 0;
    for (int i=a; i>=0; i--)
    {
        if (i % 3 == 0)
        {
            num = num + i;
        }
    }
    return num;
}

 int main()
{
     int a;
     cout << "Dime un numero y sumare los menores que el que sean divisibles por 3" << endl;
     // Ejemplo: el numero 9, solo el 3,6 y 9 son divisibles por 3, y la suma de ellos da 18.
     cout << "Dime el primer numero que se te ocurra:" ;
     cin >> a;
     cout << "La suma de sus menores y que son divisibles por 3 es igual a: " << SumaMenoresDivisibles(a) << endl;

     return 0;
}
