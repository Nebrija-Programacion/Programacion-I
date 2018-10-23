#include <iostream>
using namespace std;

float Mayor(float a, float b, float c)
{
    if ( a>b && a>c )
    {
        return a;
    }
    else
    {
        if ( b>a && b>c )
        {
        return b;
        }
        else
        {
            if ( c>a && c>b )
        return c;
        }
    }
}

 int main()
{
    float a;
    float b;
    float c;

    cout << "Dime el primer numero que se te ocurra: " << endl;
    cin >> a;

    cout << "Dime de nuevo otro numero: " << endl;
    cin >> b;

    cout << "Y por ultimo otro numero mas: " << endl;
    cin >> c;

    cout << "El mayor de los tres es: " << Mayor(a,b,c) << endl;

    return 0;
}
