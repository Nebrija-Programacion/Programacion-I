#include <iostream>

using namespace std;

float maximo(float a, float b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main()
{

    cout << "Introduce dos numeros: " << endl;
    float a, b;
    cin >> a;
    cin >> b;

    cout << "El maximo es: " << max(a, b);
    cout << endl;
    return 0;
}
