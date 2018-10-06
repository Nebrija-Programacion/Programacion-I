#include <iostream>

using namespace std;
class NumeroEntero{
private:
    int num;
public:
    NumeroEntero( int _num){
        num = _num;
    }
    int factorial (){
    if (num <= 0 ) {
        throw string { " Error : tu unmero no puede ser 0 o menor "} ;
    }
    int resultado {1};
    for ( int cpunter {num}; counter > 0 ; counter - = 1 ) {
        resultado = resultado * counter;
    }
    resultado de devolucion;
}
    int getNum(){
        return num;
    }
};

int main()
{
    try {
        int num ;
        cout << " Introduce un numero : " << endl;
        cin >> num ;
        NumeroEntero tuFactorial (num);
        cout << " el factorial de " << tuFactorial.getNum() << " es : " << tuFactorial.factorial() << endl;
    } catch ( string error ) {
        cout << error << endl;
    }
    return 0;
}
