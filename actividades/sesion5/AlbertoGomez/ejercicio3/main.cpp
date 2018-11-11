#include <iostream>

using namespace std;

void maximoNumeros(int num1,int num2,int num3, int & _max){
    _max = num1;
    if (num2 > _max) _max=num2;
    if (num3 > _max) _max=num3;
    }
int main()
{
    int num1,num2,num3,max;
    cout << "Puedo comparar tres numeros y decirte cual es el mayor." << endl;
    cout << "Introduce el primero: ";
    cin >> num1;
    cout << "Introduce el segundo: ";
    cin >> num2;
    cout << "Introduce el tercero: ";
    cin >> num3;
    maximoNumeros(num1,num2,num3,max);
    cout << "El mayor es: " << max << endl;
    return 0;
}
