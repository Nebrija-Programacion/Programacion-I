#include <iostream>

using namespace std;

int esMayor(int a, int b, int c){
    if((a > b) && (a > c)){
        return a;
    }else if((b > a) && (b > c)){
        return b;

    }else{
        return c;

    }
}

int main()
{
    int a, b, c;
    cout << "Introduce un numero: " << endl;
    cin >> a;
    cout << "Introduce un segundo numero: " << endl;
    cin >> b;
    cout << "Intro0duce un ultimo numero: " << endl;
    cin >> c;

    cout << "El numero mayor es: " << esMayor(a,b,c) << endl;
    return 0;
}
