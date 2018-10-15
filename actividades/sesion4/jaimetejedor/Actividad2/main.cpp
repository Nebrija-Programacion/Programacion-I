#include <iostream>

using namespace std;
class NumeroComplejo{
public:

    NumeroComplejo(float _i, float _r){
        imaginario = _i;
        real = _r;

    }
    float getNumber(float &r, float &i){
        r = real;
        i = imaginario;


    }
    void multiplyBy(float i, float r){
        real = real*r;
        imaginario = imaginario*i;
    }
    void add(float i, float r){
        real = real + r;
        imaginario = imaginario + i;
    }

private:
    float imaginario, real;
};

int main(){
    float real;
    float imaginario;


    cout << "Introduce el numero real: " << endl;
    cin >> real;
    cout << "Introduce el numero imaginario: " << endl;
    cin >> imaginario;

  NumeroComplejo miComplejo{real,imaginario};

     miComplejo.add(5,3);

  miComplejo.getNumber(real, imaginario);
  cout << "El numero complejo es " << real << " + " << imaginario << " * i" << endl;

  miComplejo.multiplyBy(2,5);
  miComplejo.getNumber(real, imaginario);
  cout << "El numero complejo es " << real << " + " << imaginario << " * i" << endl;

  return 0;
}
