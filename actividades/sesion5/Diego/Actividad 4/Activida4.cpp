#include <iostream>

using namespace std;

float suma(int a){
    int resultado= 0;
    for(int i{0}; i<a; i+=3){
        resultado = i +resultado;
    }
    return resultado;
}
int main()
{
    int a;
    cout << " Dime un numero positivo " << endl; cin >> a;

    cout << " El resultado de la suma: " << suma(a) << endl;

}
