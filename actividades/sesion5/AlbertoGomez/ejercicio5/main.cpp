#include <iostream>

using namespace std;

float sumadeFactores(int num){
    int sum;
    sum=0;
    for(int i{1};i<= num;i++){
        if(num % i == 0){
            sum = sum + i;}
    }
    return sum;
}
int main()
{
    int num;
    cout << "Dame un numero entero positivo y de doy la suma de todos sus divisores." << endl;
    cout << "Introduce un numero entero positivo: ";
    cin >> num;
    cout << "La suma de todos sus factores divisores es: " << sumadeFactores(num) << endl;
    return 0;
}
