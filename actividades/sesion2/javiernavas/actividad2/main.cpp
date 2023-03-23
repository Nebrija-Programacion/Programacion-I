#include <iostream>

using namespace std;

class number{

public:
    number(float _num){
        num = _num;
    }
    float getNum(){
        return num;
    }
    void divideBy(float other2){
        if(other2 == 0){
            throw string {"ERROR! El numero no puede ser 0"};
        }else{
            num = num/other2;
        }
    }
    void multyplyBy(float other3){
            num = num * other3;
        }
    void addto(float other1){
            num = num + other1;
        }

private:
    float num;

};

int main()
{
    float num;

    try{
        cout << "Introduzca un numero: ";
        cin >> num;
        number myNum{num};
        cout << "Introduzca un numero para dividir: ";
        cin >> num;
        myNum.divideBy(num);
        cout << "El resultado es: " << myNum.getNum() << endl;
        cout << "Introduzca un numero para multiplicar: ";
        cin >> num;
        myNum.multyplyBy(num);
        cout << "El resultado es: " << myNum.getNum() << endl;
        cout << "Introduzca un numero para sumar: ";
        cin >> num;
        myNum.addto(num);
        cout << "El resultado es: " << myNum.getNum() << endl;

    }catch(string msg){
    cout << msg << endl;
    return 1;
}

return 0;
}
