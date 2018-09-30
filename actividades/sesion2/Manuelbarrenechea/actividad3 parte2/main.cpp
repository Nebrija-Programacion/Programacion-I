#include <iostream>

using namespace std;

int fibonacci(int num){
    if (num < 2){
        return num;

    }else{
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int main()
{
    cout << "Los 20 primeros numeros de la serie de Fibonacci son: " << endl;

    int num{};

    fibonacci(num);

    for (int i = 0; i < 20; i++){
        if(fibonacci(i) != 0){
                  cout<< ", ";
        }

        cout << fibonacci(i);
    }

    return 0;
}
