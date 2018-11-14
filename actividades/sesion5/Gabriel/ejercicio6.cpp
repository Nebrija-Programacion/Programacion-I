#include <iostream>

using namespace std;

int main()
{
    int num{1};//Se le asigna un uno para que no se inicialice con un cero
    int add{0};
    cout << "Introduce numeros enteros e introduce un cero o un numero negativo para parar y sumare todos" << endl;
    while(num > 0){
    cout << "Introduce a number: ";
    cin >> num;
    if (num > 0){//Excepcion para numeros negativos
        add += num;
    }
    }
    cout << "Total addition is: " << add << endl;
    return 0;
}
