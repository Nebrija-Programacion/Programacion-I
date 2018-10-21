#include <iostream>

 using namespace std;

 int sumadeMenores(int n){
    int sum;
    sum=0;
    for(int i{1};i< n;i++){
        if(i % 3 == 0){
            sum = sum + i;}
    }
    return sum;
}
int main()
{
    int n;

    cout << "Introduce un numero entero positivo: ";

    cin >> n;

    cout << "La suma de todos los numeros divisibles por 3 es: " << sumadeMenores(n) << endl;

    return 0;
}
