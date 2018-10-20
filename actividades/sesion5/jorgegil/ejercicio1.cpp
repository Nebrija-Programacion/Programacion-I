#include <iostream>

using namespace std;

bool esDivisor(int a, int b){
    if ((a % b) == 0){
        return true;
    }else{
        return false;
    }
}


int main()
{
    int a,b;

    cout << "Introduce un numero: ";
    cin >> a;
    cout << "Introduce un segundo numero: ";
    cin >> b;

    if (esDivisor(a,b)){
        cout << "a es divisible por b" << endl;
    }else{
        cout << "a no es divisible por b" << endl;
    }

    return 0;
}
