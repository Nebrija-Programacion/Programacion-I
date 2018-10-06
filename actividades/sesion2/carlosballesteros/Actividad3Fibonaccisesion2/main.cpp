#include <iostream>

using namespace std;

int fibonacci(int number){
    if (number < 2){
    return number;
    }else{
    return fibonacci(number-1) + fibonacci(number-2);
    }
}
int main()
{
    cout << "Estos son los primeros 20 numeros de la serie Fibonacci: " << endl;
    int number{};
    fibonacci(number);
    for (int i{0}; i <= 20; i++){
    cout << fibonacci(i) << " " << endl;
    }
    return 0;
}
