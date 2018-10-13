#include <iostream>

using namespace std;

int main()
{
    int numero, i;
    cout << "introduce un numero: ";
    cin >> numero;
    // -- planteo los posibles errores --

    if(numero == 1){
        cout << "es primo " << endl;
        return 0;
    }
    if(numero < 1){
        cout << "numero invalido " << endl;
        return 1;
    }
    // -- programa --
    i = numero - 1;
    while (numero % i != 0) {
        cout << "numero =  " << numero << " entre  "<< i << "   resto=  " << numero % i << endl;
        i--;
    }
    cout << endl << endl;
    cout << "numero =  " << numero << " entre  "<< i << "   resto=  " << numero % i << endl;
    if (i==1) cout << "es primo" << endl; else cout << "no es primo" << endl;

    return 0;
}
