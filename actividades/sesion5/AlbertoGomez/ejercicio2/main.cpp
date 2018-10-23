#include <iostream>

using namespace std;

void maximoNumeros(int num1,int num2,int & _max){
    _max = num1;
    if (num2 > _max) _max=num2;
    }
int main()
{
    int num1,num2,max;
    cout << "Puedo comparar dos numeros y decirte cual es el mayor." << endl;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    maximoNumeros(num1,num2,max);
    cout << "El numero mayor es: " << max << endl;
    return 0;
}
