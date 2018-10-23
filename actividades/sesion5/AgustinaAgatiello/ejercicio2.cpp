#include <iostream>

using namespace std;

float esMayor(float a, float b){
    if (a>b) {
        return a;
    }else{
        return b;
    }
}

int main()
{
    float a, b;

    cout << "Introduce un numero: " << endl;
    cin >> a;

    cout << "Introduce otro numero: " << endl;
    cin >> b;

    cout << "El mayor es: " << esMayor(a,b) << endl;

    return 0;
}
