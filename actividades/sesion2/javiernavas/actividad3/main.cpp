#include <iostream>

using namespace std;

int Fibonacci(int number){
    if (number < 2){
        return number;
    }else{
        return Fibonacci(number-1) + Fibonacci(number-2);
    }
};

int main()
{
    int number{};
    Fibonacci(number);
    for (int i{1}; i <= 20; i++){
    cout << Fibonacci(i) << " " << endl;
    }
    return 0;
}
