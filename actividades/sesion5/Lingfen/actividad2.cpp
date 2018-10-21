#include <iostream>
using namespace std;

float Mayor(float a, float b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

 int main()
{
    float a;
    float b;

    cout << "Dime el primer numero que pase por tu cabeza:" << endl;
    cin >> a;

    cout << "Dime otro numero:" << endl;
    cin >> b;

    cout << "El mayor de esos dos es: " << Mayor(a,b) << endl;

    return 0;
}
