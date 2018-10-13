#include <iostream>

using namespace std;
class Numero{
public:
        Numero(float _numero){
        numero = _numero;
    }

         float getNumber(){
         return numero;
    }
         void divideBy(float otherNumber){
         if (otherNumber <= 0){
            throw string {"No se puede dividir entre 0"};
        }else{
            numero = numero / otherNumber;

        }
    }
         void multiplyBy(float otherNumber){
         numero = numero * otherNumber;
    }
         void addTo(float otherNumber){
         numero = numero + otherNumber;
    }
private:
    float numero;

};


int main()
{
    float numero;
    try{
        cout << "Introduce un numero:" << endl;
        cin >> numero;
        Numero myNum(numero);
        cout << "Introduce un numero por el que quieras dividir: " << endl;
        cin >> numero;
        myNum.divideBy(numero);
        cout << "El resultado de la division es " << myNum.getNumber() << endl;
        cout << "Introduce un numero por el que quieras multiplicar:" << endl;
        cin >> numero;
        myNum.multiplyBy(numero);
        cout << "El resultado de la multiplicaion es: " << endl << myNum.getNumber() << endl;
        cout << "Introduzca un numero por el que quieras sumar:" << endl;
        cin >> numero;
        myNum.addTo(numero);
        cout << "El resultado de la suma es: " << myNum.getNumber() << endl;
    }
    catch(string msg){
            cout << msg << endl;
            return 1;
    }
}
