#include <iostream>

using namespace std;

class floatNumber{
public:
    floatNumber(float _number){
        num = _number;
    }

    float getNumber(){
        return num;
    }

    void add(float otherNum){
        num = num + otherNum;
    }

    void multiplyBy( float otherNum){
        num = num * otherNum;
    }

    void divideBy(float otherNum){
        if(otherNum == 0){
            throw string {"\n**Error! Atontao que no se puede dividir por 0**"};
        }else{
            num = num / otherNum;
        }
    }

private:
    float num;
};

int main()
{
    float num;

    try{
        cout << "Introduce un numero: ";
        cin >> num;

        floatNumber myNum(num);

        cout << "Que numero quieres anadir? (para suma) ";
        cin >> num;

        myNum.add(num);
        cout << "La suma es = " << myNum.getNumber() << endl;

        cout << "Que numero quieres anadir? (para multiplicacion) ";
        cin >> num;

        myNum.multiplyBy(num);
        cout << "La multiplicacion es = " << myNum.getNumber() << endl;

        cout << "Que numero quieres anadir? (para division) ";
        cin >> num;

        myNum.divideBy(num);
        cout << "La division es = " << myNum.getNumber() << endl;
    }catch (string msg){
        cout << msg << endl;
        return 1;
    }

    return 0;
}
