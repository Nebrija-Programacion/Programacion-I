#include <iostream>

using namespace std;

bool divisible(int a, int b){

    if(a % b ==0){
        return true;
    }
    return false;
}

int main()
{
    int x, y;

    cout << "Introduce un numero: " << endl;
    cin >> x;

    cout << "Ya tardas en darme un numero para dividir: " << endl;
    cin >> y;

    if(divisible(x,y)){
        cout << "Es divisible" << endl;
    }else{
        cout << "No es divisible, anda queeeeee, prueba con otro" << endl;
    }
    return 0;
}
