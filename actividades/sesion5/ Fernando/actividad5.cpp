#include <iostream>

 using namespace std;

int sumadeFactores(int n){
    int sum;
    sum=0;
    for(int i{1};i<= n;i++){
        if(n % i == 0){
            sum = sum + i;}
    }
    return sum;
}
int main()
{
    int n;
    cout << "Introduce un numero entero positivo: ";
    cin >> n;
    cout << "La suma de todos sus factores divisores es: " << sumadeFactores(n) << endl;
    return 0;
}
