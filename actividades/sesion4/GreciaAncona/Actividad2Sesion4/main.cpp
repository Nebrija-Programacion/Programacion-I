#include <iostream>

using namespace std;
class NumeroComplejo{

   private :
    float numReal ;
    float numImag ;

   public:
    NumeroComplejo( float _numReal , float _numImag){
        numReal = _numReal ;
        numImag = _numImag ;
    }
    //Funcion de suma de numero complejo y real

    void sum( float r, float i){
        numImag += i ;
        numReal += r ;
    }
    // Funcion de multiplicar el numero complejo y real

    void multiplicarPor ( float r , float i ){
        numImag *= i ;
        numReal *= r ;
    }
    // Funcion por referencia

    void getNumero (float &r , float &i ){
        r = numReal ;
        i = numImag ;
    }

};

int main()
{
    NumeroComplejo miComplejo{3,4};

      float real;
      float imaginario;

      miComplejo.sum(2,3);

      miComplejo.getNumero(real, imaginario);
      cout << "El numero complejo es " << real << " + " << imaginario << " * i" << endl;

      miComplejo.multiplicarPor(2,5);
      miComplejo.getNumero(real, imaginario);
      cout << "El numero complejo es " << real << " + " << imaginario << " * i" << endl;

    return 0;
}
