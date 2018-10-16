#include <iostream>
using namespace std;

class NumeroComplejo{

public:

    NumeroComplejo(float r,float i){
        real = r;
        imaginario = i;
    }
    void add(float r, float i){
        real += r;
        imaginario += i;
    }

    void multiplyBy(float r, float i){

    real = real * r;

    imaginario = imaginario * i;
    }

    void getNumber(float &r, float &i){
        r = real;
        i = imaginario;
    }

private:

    float real, imaginario;
};

int main(){

  NumeroComplejo miComplejo{3,4};

  float real;
  float imaginario;



  miComplejo.add(2,3);


  miComplejo.getNumber(real, imaginario);
  cout << "El numero complejo es " << real << " + " << imaginario << "i" << endl;


  miComplejo.multiplyBy(2,5);
  miComplejo.getNumber(real, imaginario);
  cout << "El numero complejo es " << real << " + " << imaginario << "i" << endl;

  return 0;
}