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

    for (int i{1}; i <= 20; i++){
    cout << fibonacci(i) << " " << endl;
    }
    return 0;
}
