#include <iostream>

using namespace std;

int sumaDivisores(int num){
    int suma{0};
    int i;
    for(i=1; i<=num; i++){
        if((num % i)== 0)
            suma += i;
    }
    return suma;
}

int main()
{
    int num;
    cout << "Introduce un numero y sumare sus divisores: "; cin >> num;
    cout << "El resultado es: " << sumaDivisores(num) << endl;
    return 0;
}
