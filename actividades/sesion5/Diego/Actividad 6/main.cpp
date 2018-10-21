#include <iostream>

using namespace std;

void stpSuma(){
    float a{1}, sum{0};
    while(a != 0){
        cout << "Mete un número entero, si quieres parar pon 0: "; cin >> a;
        sum = sum + a;
      }
     cout << "El resultado es: " << sum << endl;
}

int main()
{
    stpSuma();

    return 0;
}
