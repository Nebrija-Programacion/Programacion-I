#include <iostream>

using namespace std;

class Numero{
private:
    int number;

public:
    Numero(int num){
        number = num;
    }
    int getNumber(){
        return number;
    }
    void divideBy(int otherNumber){
        if(otherNumber == 0){
            throw string {"El numero no puede ser 0"};
        }else{
            number = number/otherNumber;
        }
    }
    void multyplyBy(int otherNu){
            number = number * otherNu;
        }
    void addTo(int otherNum){
            number = number + otherNum;
        }
};

int main(){
    try{
        int num;
        cout << "Introduzca un numero: ";
        cin >> num;
        Numero myNum{num};
        cout << "Introduzca un numero para dividir: ";
        cin >> num;
        myNum.divideBy(num);
        cout << "El resultado es: " << myNum.getNumber() << endl;
        cout << "Introduzca un numero para multiplicar: ";
        cin >> num;
        myNum.multyplyBy(num);
        cout << "El resultado es: " << myNum.getNumber() << endl;
        cout << "Introduzca un numero para sumar: ";
        cin >> num;
        myNum.addTo(num);
        cout << "El resultado es: " << myNum.getNumber() << endl;

    }
    catch(string e){
        cout << e << endl;
    }
    return 0;

}
