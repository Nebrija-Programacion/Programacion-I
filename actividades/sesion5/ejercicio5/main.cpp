#include <iostream>

using namespace std;



int DivisiblesPor3 (unsigned int x){
    int suma = 0;
    for (int i=1; i < x ; i++){
        if((x & i) == 0){
            suma = suma + i;
        }
    }

    return suma;


}
int main()
{
    int num = 0;
    cout << "Introduce un numero " <<endl;
    cin >> num;

    cout << "La suma de todos los divisores es " << DivisiblesPor3(num) << endl;
    return 0;
}
