#include <iostream>

using namespace std;

void max(int a, int b, int & max){

    max = a;

    if(b > max){
        max = b;
    }
}
int main()
{
    int x, y, _max;

    cout << "Introduce un numero: " << endl;
    cin >> x;

    cout << "Introduce otro numero: " << endl;
    cin >> y;

    max(x, y, _max);

    cout << "El maximo es: " << _max << endl;

    return 0;
}
