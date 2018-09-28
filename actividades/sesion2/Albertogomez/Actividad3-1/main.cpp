#include <iostream>

using namespace std;

int main()
{   try{
    int num;
    cout << "Introduce un numero: ";
    cin >> num;
    if (num <=0){
        throw string {"Debe ser mayor que 0."};
    }

    int factorial{1};

    for(int contador{num};contador>1;contador--){
        factorial = factorial * contador;
    }
    cout << "El factorial es: " << factorial << endl;
    }
    catch (string e){
        cout << e << endl;
    }
    return 0;
    }
