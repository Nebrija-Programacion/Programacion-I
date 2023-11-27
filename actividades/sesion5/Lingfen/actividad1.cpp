#include <iostream>
 using namespace std;

 bool Divisor(int a, int b)
{
    if (a % b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


 int main()
{
    int a;
    int b;

    cout << "Dime el primer numero entero que pase por tu mente:" ;
    cin >> a;

    cout << "Dime de nuevo otro numero entero:" ;
    cin >> b;

    if (Divisor(a,b))
    {
        cout << "Verdadero, el primer numero es divisible por el segundo." << endl;
    }
    else
    {
        cout << "Falso, el primero numero no es divisible por el segundo." << endl;
    }
     return 0;
}
