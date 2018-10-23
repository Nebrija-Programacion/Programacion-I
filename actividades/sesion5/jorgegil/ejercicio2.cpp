#include <iostream>

using namespace std;

int esMayor(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}

int main()
{
    int a,b;

    cout << "Introduce un numero: ";
    cin >> a;
    cout << "Introduce un segundo numero: ";
    cin >> b;

    cout << "El mayor de los dos numeros es = " << esMayor(a,b) << endl;

    return 0;
}
