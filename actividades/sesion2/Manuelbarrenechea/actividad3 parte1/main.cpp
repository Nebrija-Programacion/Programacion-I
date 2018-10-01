#include <iostream>

using namespace std;

class NumeroEntero{

private:
    int num;

public:
    NumeroEntero(int _num){
        num = _num;
    }

    int factorial(){
        int factorial{1};
        if (num <= 0){
            throw string{"ERROR: el numero no puede ser menor o igual a 0"};
        }else{
            for (int i{1}; i <= num; i++)
            factorial = factorial * i;
        }
        return factorial;
    }
};

int main()
{
    int num;

    cout << "Introduce un numero: ";
    cin >> num;

    NumeroEntero myNum{num};

    myNum.factorial();

    cout << "El resultado del factorial es: " << myNum.factorial() << endl;
}
