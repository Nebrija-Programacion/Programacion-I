#include <iostream>

using namespace std;

bool esDivisor (int num1, int num2){
    if (num1 % num2 == 0){
    return true;
    }
    return false;
}
int main()
{
    int num1;
    int num2;
    cout << "Introduce dos numeros y te dire si se pueden dividir." << endl;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    if (esDivisor(num1,num2)){
    cout << "Si se puede" << endl;
    }else{
    cout << "No se puede" << endl;
}
    return 0;
}
