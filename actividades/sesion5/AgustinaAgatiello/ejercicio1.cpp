#include <iostream>

using namespace std;

bool esDivisor(int a, int b){
    if ((a % b) == 0){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int a, b;

    cout << "Introduce un numero entero: ";
    cin >> a;

    cout << "Introduce otro numero entero: ";
    cin >> b;

    if (esDivisor(a,b)){
        cout << "Verdadero, es divisible." << endl;
    }else{
        cout << "Falso, no es divisible." << endl;
    }

    return 0;
}
