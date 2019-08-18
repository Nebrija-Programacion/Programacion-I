#include <iostream>

using namespace std;

long unsigned int factorial(unsigned int n){
    if(n == 2) return 2;
    else return (n * factorial(n - 1));
}

int main()
{
    unsigned int number{0};
    cout << "Insert a positive integer: ";
    cin >> number;
    cout << number << " factorial is: " << factorial(number) << endl;
    return 0;
}
