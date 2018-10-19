#include <iostream>

using namespace std;

float sumadeMenores(int num){
    int sum;
    sum=0;
    for(int i{1};i< num;i++){
        if(i % 3 == 0){
            sum = sum + i;}
    }
    return sum;
}
int main()
{
    int num;
    cout << "Si me das un numero entero positivo te devuelvo la suma de todos los numeros menores al parametro divisibles por 3." << endl;
    cout << "Introduce un numero entero positivo: ";
    cin >> num;
    cout << "La suma de todos los numeros menores al parametro divisibles por 3 es: " << sumadeMenores(num) << endl;
    return 0;
}
