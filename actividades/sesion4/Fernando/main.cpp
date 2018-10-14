#include <iostream>
using namespace std;
class NumeroComplejo
{
public:
    NumeroComplejo(float _real, float _imaginario) {
        real = _real;
        imaginario = _imaginario;
    }
    void suma(float _num1, float _num2){
        real+= _num1;
        imaginario+= _num2;
    }     //♥
    void getNumero(float &b, float &a){
        b = real ;
        a = imaginario;
    }
private:
    float real;
    float imaginario;
};
int main(){

  float real;
  float imaginario;
  cout << "Por favor introduzca la parte real y la imaginaria de su numero complejo: " ;
  cin >> real >> imaginario;
  NumeroComplejo miComplejo(real, imaginario);

  miComplejo.suma(2,3);

  miComplejo.getNumero(real, imaginario);
  cout << "El numero complejo es " << real << " + " << imaginario << " * i" << endl;


  return 0;
}

