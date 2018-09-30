#include <iostream>

using namespace std;

int main()
{
    int a=0, i, num;
    cout << "Introduce un numero: ";
    cin >> num;

    for (i=1; i < (num+1); i++){
        if (num % i == 0){
            a++;
        }
    }

    if (a != 2){
        cout << "Este numero no es primo" << endl;
    }else{
        cout << "Este numero es primo" << endl;
    }
    return 0;
}
