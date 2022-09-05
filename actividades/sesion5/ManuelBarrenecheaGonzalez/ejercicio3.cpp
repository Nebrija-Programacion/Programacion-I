#include <iostream>

using namespace std;

void max(int a, int b, int c, int & max){

    max = a;

    if(b > max) max = b;
    if(c > max) max = c;
}
int main()
{
    int x;
    int y;
    int z;
    int _max;

    cout << "Introduce un numero: " << endl;
    cin >> x;

    cout << "Introduce otro numero: " << endl;
    cin >> y;

    cout << "Otro numero mas: " << endl;
    cin >> z;

    max(x,y,z, _max);

    cout << "El maximo es: " << _max << endl;

    return 0;
}
