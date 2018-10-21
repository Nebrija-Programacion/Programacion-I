#include <iostream>

using namespace std;

int main(){

    int numero, i;

    do{
        cout << "Introduce un numero: ";
        cin >> numero;
    } while ( numero <= 0);

    for (i=3; i<=numero/2; i--){
        if (numero % i == 0){
            cout << i << endl;
        }

    }


     cout << numero << endl;

     return 0;

}
// Solo funciona con el 3 y el 9, pero para el resto de numeros no lo hace.
// Y no sé que está fallando.
