#include <iostream>


using namespace std;

class NumeroComplejo{
public:
    NumeroComplejo(float _parte_real, float _parte_imaginaria){
        parte_real = _parte_real;
        parte_imaginaria = _parte_imaginaria;
    }

    void sumar(float r, float i){
        parte_real = parte_real + r;
        parte_imaginaria = parte_imaginaria + i;

    }


    void multiplyBy(float r, float i){
        parte_real = parte_real*r;
        parte_imaginaria = parte_imaginaria*i;
    }


    void getNumero(float &r, float &i){
        r = parte_real;
        i = parte_imaginaria;
    }



private:
    float parte_real;
    float parte_imaginaria;



};





int main()
{
    NumeroComplejo miComplejo{3,4};

    float real;
    float imaginario;

    miComplejo.sumar(2,3);

    miComplejo.getNumero(real, imaginario);
    cout << "El numero complejo es " << real << " + " << imaginario << " * i" << endl;

    miComplejo.multiplyBy(2,5);
    miComplejo.getNumero(real, imaginario);
    cout << "El numero complejo es " << real << " + " << imaginario << " * i" << endl;


return 0;

}
