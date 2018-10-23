#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int num1, num2;

    cout << "Intoduce un numero: ";
    cin >> num1;
    cout << "Introduce otro numero: ";
    cin >> num2;



    if((num1 % num2 == 0) && (num2!=0))
    {
       cout << num2 << (" es Divisible entre ") << num1 << endl;
    }else{
       cout << num2 << (" NO es Divisible entre ") << num1 << endl;
    }

    return 0;
    }

