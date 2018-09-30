#include <iostream>

 using namespace std;

 int fibonacci(int num)
{

    if (num < 2){
        return num;

                }else{
        return fibonacci(num-1) + fibonacci(num-2);
                     }
}

 int main()

{
    cout << "The first twenty numbers of the Fibonacci series are: " << endl;

     int num{};
     fibonacci(num);

     for (int i{0}; i <= 20; i++)

     cout << fibonacci(i) << " " << endl;

     return 0;
}
