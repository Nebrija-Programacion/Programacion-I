#include <iostream>

using namespace std;

class Number {
public:
    //constructor
    Number(float _number1, float _number2 ){
        number1 = _number1;
        number2 = _number2;
    }
    //métodos
    float divideBy(){

        if(number2 == 0){
            throw string{"ERROR. No se puede dividir entre cero."};
        }
        else {
            return(number1 / number2);
        }

    }

    float multiplyBy(){
        return(number1 * number2);
    }

    float addTo(){
        return(number1 + number2);
    }



private:

    //atributos de los numeros
    float number1;
    float number2;
};

int main()
{
    float primernumero;
    float segundonumero;

    cout << "Por favor, introduce el primer numero de la división: ";
    cin >> primernumero;

    cout << "Por favor, introduce el segundo numero de la división: ";
    cin >> segundonumero;

    Number operacion(primernumero, segundonumero);

    try{
            cout << "El resultado de la division es: " << operacion.divideBy() << endl;

    }catch(string msg){
            cout <<  msg << endl;
            return 1;
    }

    cout << "Por favor, introduce el primer numero de la multiplicación: ";
    cin >> primernumero;

    cout << "Por favor, introduce el segundo numero de la multiplicación: ";
    cin >> segundonumero;

    cout << "El resultado de la multiplicación es: " << operacion.multiplyBy() << endl;

    cout << "Por favor, introduce el primer numero de la suma: ";
    cin >> primernumero;
    cout << "Por favor, introduce el segundo numero de la suma: ";
    cin >> segundonumero;

    cout << "El resultado de la suma es: " << operacion.addTo() << endl;

    return 0;

}



