#include <iostream>

using namespace std;

class Number{
public:
    //constructor
    Number(float _number){
        number = _number;
    }

    //metodos
    float getNumber(){
        return number;
    }
    void divideBy(float otherNumber){
        if (otherNumber == 0){
            throw string{"ERROR. NO PUEDES DIVIDIR ENTRE 0"};
        }
        else{
             number = number/otherNumber;
        }
    }

    void multiplyBy(float otherNumber){
        number = number*otherNumber;
    }
    void addTo(float otherNumber){
        number= number+otherNumber;
    }

private:
    float number;


};
int main()
{
    try {
        float num;
        cout << "Introduce un numero ";
        cin >> num;
        Number myNum{num};
        cout << "¿Por qué numero lo quieres dividir? ";
        cin >> num;
        myNum.divideBy(num);
        cout << "El resultado es: " << myNum.getNumber() << endl;
        cout << endl;
        cout << "Introduzca un numero para multiplicar: ";
        cin >> num;
        myNum.multiplyBy(num);
        cout << "El resultado es: " << myNum.getNumber() << endl;
        cout << "Introduzca un numero para sumar: ";
        cin >> num;
        myNum.addTo(num);
        cout << "El resultado es: " << myNum.getNumber() << endl;



    } catch (string e) {
        cout << e << endl;
        return 1;
    }
    return 0;
}
