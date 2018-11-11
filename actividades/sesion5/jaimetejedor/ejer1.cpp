#include <iostream>

using namespace std;

bool sonDivisibles(unsigned int a, unsigned int b){
    if (a % b == 0){
        return true;
    }else{
        return false;
    }
}
int main()
{
    int a, b;
    cout << "Haga el favor de introdcuir dos numeros y le dire si el primero es divisible por el segundo.\n";
    cout << "Introduzca un numero: ";
    cin >> a;
    cout << "Introduzca otro numero: ";
    cin >> b;

    if(sonDivisibles(a, b)== true){
        cout << "Es divisible ";
    }else{
        cout << "No son devisibles";
    }
    cout << endl;

    return 0;
}
