#include <iostream>

using namespace std;

float max (float a, float b){

    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    cout << "Introduce dos números " << endl;
    float a,b;
    cin >> a;
    cin >> b;
    cout << "El maximo es " << max(a,b) << endl;
            return 0;
}
