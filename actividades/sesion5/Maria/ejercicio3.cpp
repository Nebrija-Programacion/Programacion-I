#include <iostream>

using namespace std;

float MAX(float num1, float num2, float num3){
    if (num1 > num2 && num1 > num3){
        return num1;
    }

    if ( num2 > num1 && num2 > num3){
        return num2;
    }else{

        return num3;

}}

int main()
{
    float num1, num2, num3;

    cout << "Intoduce un numero: " << endl;
    cin >> num1;
    cout << "Introduce otro numero: " << endl;
    cin >> num2;
    cout << "Introduce un ultimo numero: " << endl;
    cin >> num3;

    cout << "El MAXIMO es: " << MAX(num1, num2, num3) << endl;
    return 0;
}
