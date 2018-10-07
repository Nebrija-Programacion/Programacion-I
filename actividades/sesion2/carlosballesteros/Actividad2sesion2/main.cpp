#include <iostream>

using namespace std;

class Numero{
private:
    float number;

public:
    Numero(float num){
        number = num;
    }
    float getNumber(){
        return number;
    }
    void divideBy(float otherNumber){
        if(otherNumber == 0){
            throw string {"El numero no puede ser 0"};
        }else{
            number = number/otherNumber;
        }
    }
    void multyplyBy(float otherNu){
            number = number * otherNu;
        }
    void addTo(float otherNum){
            number = number + otherNum;
        }
};

int main(){
    try{
        float num;
        cout << "Introduce un numero: ";
        cin >> num;
        Numero myNum{num};
        cout << "Introduce un numero para dividir: ";
        cin >> num;
        myNum.divideBy(num);
        cout << "El resultado es: " << myNum.getNumber() << endl;
        cout << "Introduce un numero para multiplicar: ";
        cin >> num;
        myNum.multyplyBy(num);
        cout << "El resultado es: " << myNum.getNumber() << endl;
        cout << "Introduce un numero para sumar: ";
        cin >> num;
        myNum.addTo(num);
        cout << "El resultado es: " << myNum.getNumber() << endl;

    }
    catch(string e){
        cout << e << endl;
    }
    return 0;

}
