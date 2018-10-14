#include <iostream>

using namespace std;

int fibo(int num){
    if (num < 2){
        return num;
    }else{
        return fibo(num-1) + fibo(num-2);
    }
}

int main()
{
    int num{20};

    fibo(num);
    for (int i{0}; i <= num; i++){
        cout << fibo(i) << " " << endl;
    }
    return 0;
}
