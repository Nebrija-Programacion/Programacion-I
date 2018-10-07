#include <iostream>

using namespace std;

class Numero{
private:
    float numero;
public:
    Numero(float num){
        numero = num;
    }
    float getNumber(){
        return numero;
    }
    void divideBy(float otherNumber){
        if(otherNumber == 0){
            throw string {"ERROR. El numero no puede ser 0"};
        }else{
            numero = numero/otherNumber;
        }
    }
    void multyplyBy(float otherNum){
            numero = numero * otherNum;
        }
    void addTo(float otherNum){
            numero = numero + otherNum;
        }
};

int main(){
    try{
        float num;
        cout << "Introduzca un numero: ";
        cin >> num;
        Numero myNum{num};
        cout << "Introduzca un numero para dividir el numero anteriormente introducido: ";
        cin >> num;
        myNum.divideBy(num);
        cout << "El resultado de la division es: " << myNum.getNumber() << endl;
        cout << "Introduzca un numero para multiplicar al introducido al inicio: ";
        cin >> num;
        myNum.multyplyBy(num);
        cout << "El resultado de la multiplicacion es: " << myNum.getNumber() << endl;
        cout << "Introduzca un numero para sumar: ";
        cin >> num;
        myNum.addTo(num);
        cout << "El resultado de la suma es: " << myNum.getNumber() << endl;

    }
    catch(string e){
        cout << e << endl;
    }
    return 0;

}
