#include <iostream>

using namespace std;

unsigned long int factorial(unsigned int n){
    unsigned long int result{1};
    for(unsigned int i{2}; i<=n; i++){
        result = result*i;
    }

    return result;
}

int main()
{
    unsigned int number{0};
    cout << "Insert a positive integer: ";
    cin >> number;
    cout << number << " factorial is: " << factorial(number) << endl;

    return 0;
}
