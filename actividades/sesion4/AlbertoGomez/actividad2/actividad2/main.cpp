#include <iostream>

using namespace std;

class NumeroComplejo{
public:
    NumeroComplejo(float r,float i){
        real = r;
        imaginario = i;
    }
    void suma(float r,float i){//Función sumar cambiado por suma
        r = real+r;
        i = imaginario+i;
    }
    void multiplicaPor(float r, float i){
        real = real*r;
        imaginario = imaginario*i;
    }
    void getNumero(float & r,float & i){
        r = real;
        i = imaginario;
    }
private:
  float real;//Atributo private parte_real cambiado por real
  float imaginario; //Atributo parte_imaginaria cambiado por imaginario
};

int main(){ /*Copie el main que tenias de ejemplo pero no encaja con el enunciado del ejercicio,
    por lo que deje el main y modifique los atributos y la funcion suma.*/
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
