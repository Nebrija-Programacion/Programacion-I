#include <iostream>

using namespace std;

float max(float a, float b, float c){
    if((a>b) && (a>c)){
        return a;
    }else if ((a>b) && (c>a)){
        return c;
    }else{
        return b;
    }
}

int main()
{
    cout << "Introduce tres numeros:" << endl;
    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "El maximo es: " << max(a, b, c);
    cout << endl;
    return 0;
}
