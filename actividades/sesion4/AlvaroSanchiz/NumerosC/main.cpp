#include <iostream>

using namespace std;


class NumerosComplejos{
public:
    NumerosComplejos(float _real, float _imaginario){
        real = _real;
        imaginario = _imaginario;
    }
private:
        float real;
        float imaginario;
public:

        void suma(float _real, float _imaginario){
            _real = real + _real;
            _imaginario = imaginario + _imaginario;

        }

        void multiplicaPor(float _real, float _imaginario){
            _real = real * _real;
            _imaginario = imaginario * _imaginario;
        }


        void getNumeros(float _real, float _imaginario){
            real = _real;
            imaginario = _imaginario;
        }




};

int main()
{
    float real;
    float imaginario;
    NumerosComplejos miComplejo{3,4};

    miComplejo.suma(2,3);
    miComplejo.getNumeros(real, imaginario);
    cout << " Su numero complejo es: " << real << " + " << imaginario << "i" << endl;

    miComplejo.multiplicaPor(2,5);
    miComplejo.getNumeros(real, imaginario);
    cout << "El numero complejo es " << real << " + " << imaginario << "i" << endl;

    return 0;
}
