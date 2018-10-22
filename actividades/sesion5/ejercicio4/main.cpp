#include <iostream>

using namespace std;



int DivisiblesPor3 (unsigned int x){
    int suma = 0;
    for (int i=1; i < x ; i++){
        if((i % 3) == 0){
            suma = suma + i;
        }
    }

    return suma;


}
int main()
{
    int num = 0;
    cout << "Introduce un numero";
    cit >> num;

    cout << "La suma de los divisores por 3 es " << DivisiblesPor3(num);
    return 0;
}
