#include <iostream>

using namespace std;

int main()
{
    int x, y, max, min, i{-1};

    while(y != 0){

        cout << "Introduce un numero: " << endl;
        cin >> x;

        cout << "Introduce 0 para parar, y cualquier otro para continuar: " << endl;
        cin >> y;

        if(i == -1){
            min = x;
            max = x;
        }

        if(x > max) max = x;

        if(x < min) min = x;

        i++;
    }

    cout << "El maximo es: " << max << endl;

    cout << "El minimo es: " << min << endl;

    return 0;
}
