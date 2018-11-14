#include <iostream>

using namespace std;

class NumeroComplejo{
public:
    NumeroComplejo(float _r, float _i){
        real=_r;
        imaginario=_i;
    }
    void suma(float r, float i){
        real= real+r;
        imaginario= imaginario+i;
    }
    void multiplicaPor(float r, float i){
        real=real*r;
        imaginario=imaginario*i;
    }
    void getNumero(float &r, float &i){
        r=real;
        i=imaginario;
    }

private:
    float real, imaginario;
};


int main(){
  NumeroComplejo miComplejo{3,4};

  float real;
  float imaginario;

  miComplejo.suma(2,3);

  miComplejo.getNumero(real, imaginario);
  cout << "El numero complejo es " << real << " + " << imaginario << " * i" << endl;

  miComplejo.multiplicaPor(2,5);
  miComplejo.getNumero(real, imaginario);
  cout << "El numero complejo es " << real << " + " << imaginario << " * i" << endl;

  return 0;
}
