#include <iostream>

 using namespace std;

 void maximo(int num1,int num2,int & _maximo){
    _maximo = num1;
    if (num2 > _maximo)
        _maximo=num2;
    }

int main()
{
    int n1;
    int n2;
    int m;
    cout << "Introduce el primer numero: ";
    cin >> n1;
    cout << "Introduce el segundo numero: ";
    cin >> n2;
    maximo(n1,n2,m);
    cout << "El numero mayor es: " << m << endl;
    return 0;
}
