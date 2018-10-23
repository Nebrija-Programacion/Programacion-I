#include <iostream>

using namespace std;

float esMayor(float a, float b, float c){
    if (a>b && a>c){
        return a;
    }else{
        if (b>a && b>c){
        return b;
    }else{
        return c;
        }
    }
}

int main()
{
    float a, b, c;

    cout << "Introduce un numero: " << endl;
    cin >> a;

    cout << "Introduce otro numero: " << endl;
    cin >> b;

    cout << "Introduce el ultimo numero: " << endl;
    cin >> c;

    cout << "El mayor es: " << esMayor(a,b,c) << endl;

    return 0;
}
