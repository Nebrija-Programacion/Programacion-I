#include <iostream>

using namespace std;

class NumeroEntero{
private:
    int num;
public:
    NumeroEntero(int _num){
        num= _num;
    }

    void factorializate(){

        if(num <1){
            throw string{ "OJO error."};
        }else{
            for(int i{num-1}; i>=1; i--){
                num*= i;
            }
        }

    }
    void getNumber(int &dentro){
        dentro = num;

    }
};

int main()
{
    int numero; int dentro;
    try {
        cout << "introduce un numero: ";
        cin >> numero;
        NumeroEntero miNum(numero);
        miNum.factorializate();
        miNum.getNumber(dentro);
        cout << "el factorial es: "<< dentro  << endl;

    } catch (string e) {
        cout << e << endl;
        return 1;

    }

    return 0;
}
