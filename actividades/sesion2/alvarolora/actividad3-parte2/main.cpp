
#include <iostream>

using namespace std;

int Fibonacci(int number){
    if (number < 2){
    return number;
    }else{
    return Fibonacci(number-1) + Fibonacci(number-2);
    }
}
int main()
{
    cout << "Estos son los primeros 20 numeros de la serie Fibonacci: " << endl;
    int numero{};
    Fibonacci(numero);
    for (int i{0}; i <= 20; i++){
    cout << Fibonacci(i) << " " << endl;
    }
    return 0;
}
