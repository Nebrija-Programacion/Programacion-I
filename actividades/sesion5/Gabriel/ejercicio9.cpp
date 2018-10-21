#include <iostream>

using namespace std;

int main()
{
    int num;
    int max{0};
    int min{1000000000};//Se le asigna un numero enorme para asegurarse que no se introduzca un numero mayor
    cout << "Introduce numeros enteros e introduce un 0 cuando quieras parar y te dire cual es el maximo y cual el minimo" << endl;
    while(num != 0){
    cout << "Introduce a number: ";
    cin >> num;
    if (num > max){
        max = num;
    }
    if (num < min && num != 0){//Dos condiciones para que no utilice el cero al calcular el minimo
        min = num;
    }
    }
    cout << "El maximo es: " << max << endl;
    cout << "El minimo es: " << min << endl;
return 0;
}
