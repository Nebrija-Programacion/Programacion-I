#include <iostream>

using namespace std;

int esMayor(int a, int b, int c){
    if ((a > b) && (a > c)){
        return a;
    }else if ((b > a) && (b > c)){
        return b;
    }else{
        return c;
    }
}

int main()
{
    int a,b,c;

    cout << "Introduce un numero: ";
    cin >> a;
    cout << "Introduce un segundo numero: ";
    cin >> b;
    cout << "Introduce un tercer numero: ";
    cin >> c;

    cout << "El mayor de los dos numeros es = " << esMayor(a,b,c) << endl;

    return 0;
}
