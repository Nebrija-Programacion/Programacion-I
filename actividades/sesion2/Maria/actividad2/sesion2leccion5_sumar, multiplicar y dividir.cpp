#include <iostream>

using namespace std;

class Numero{
private:
    float numero;
public:
    Numero(float num){
        numero = num;
    }
    float getNumero(){
        return numero;
    }
    void divide (float numero2){
        if(numero2 = 0){
            throw string {"ERROR: El numero no puede ser 0"};
        }else{
            numero = (numero/numero2);
        }
    }
    void multiplica(float numero2){
        numero = numero * numero2;
    }
    void suma(float numero2){
        numero = numero + numero2;
    }
};

int main(){
    try{
        float num;
        cout << "Introduce un numero: ";
        cin >> num;
        Numero miNum{num};
        cout << "Introduce un numero para dividir el anterior: ";
        cin >> num;
        miNum.divide(num);
        cout << "El resultado de la division es: " << miNum.getNumero() << endl;
        cout << "Introduce un numero para multiplicar al del principio";
        cin >> num;
        miNum.multiplica(num);
        cout << "El resultado de la multiplicacion es: " << miNum.getNumero() << endl;
        cout << "Introduzca un numero para sumar al del inicio: ";
        cin >> num;
        miNum.suma(num);
        cout << "El resultado de la suma es: " << miNum.getNumero() << endl;

    }
    catch (string e){
        cout << e << endl;
    }
    return 0;
}
