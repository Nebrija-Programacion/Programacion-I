#include <iostream>

using namespace std;

float MAX(float num1, float num2){
    if (num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int main()
{
    float num1, num2;

    cout << "Intoduce un numero: " << endl;
    cin >> num1;
    cout << "Introduce otro numero: " << endl;
    cin >> num2;

    cout << "El MAXIMO es: " << MAX(num1, num2) << endl;
    return 0;
}
