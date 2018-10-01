#include <iostream>

using namespace std;

class Numero{

private:
    float numero;

public:

    Numero(float _numero){
        numero = _numero;
    }

    float getNumero(){
        return numero;
    }

    void divideBy(float otherNumber){
        if (otherNumber <= 0){
            throw string {"ERROR: no puede dividir por 0"};
        }else{
            numero = numero/otherNumber;
        }
    }

    void multiplyBy(float otherNumber){
        numero = numero * otherNumber;
    }

    void addTo(float otherNumber){
        numero = numero + otherNumber;
    }
};

int main()
{
    try{
    float num;

    cout << "Introduce un numero: " << endl;
    cin >> num;

    Numero myNum{num};

    cout << "Introduce un numero por el que quieras dividir: " << endl;
    cin >> num;

    myNum.divideBy(num);

    cout << "El resultado de la division es: " << myNum.getNumero() << endl << endl;

    cout << "Introduce un numero por el quieras multiplicar: " << endl;
    cin >> num;

    myNum.multiplyBy(num);

    cout << "El resultado de la multiplicacion es: " << myNum.getNumero() << endl << endl;

    cout << "Introduce un numero por el que quieras sumar: " << endl;
    cin >> num;

    myNum.addTo(num);

    cout << "El resultado de la suma es: " << myNum.getNumero() << endl;

    }catch(string e){
        cout << e << endl;
    }
}
