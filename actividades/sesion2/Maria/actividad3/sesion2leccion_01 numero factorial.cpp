#include <iostream>

using namespace std;

class NumeroEntero{
public:

    NumeroEntero(int numero){
        numero = _numero;


    }
    int factorial(){
        if (numero <= 0){
            throw string {"ERROR: No se puede calcular el factorial de un numero negativo"};
        }
        int result{1};
        for (int contador{numero}; contador > 0; contador -=1 ){
            total = total * contador;

        }

        return total;
    }

    int getNumero(){
        return numero;
    }
private:
    int numero;
};

int main()
{
    try {
        int numero;
        cout << "Introduce un numero: ";
        cin >> numero;
        NumeroEntero num(numero);
        cout << "El factorial de " << num.getNumero() << " es: " << num.factorial() << endl;
    } catch (string error) {
        cout << error << endl;
        return 1;
    }
        return 0;

    }
