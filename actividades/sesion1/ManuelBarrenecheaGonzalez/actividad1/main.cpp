#include <iostream>

using namespace std;

class Persona{
public:
    Persona(string _nombre, unsigned short int _altura, unsigned short int _edad, unsigned short int _peso){
        nombre = _nombre;
        altura = _altura;
        edad = _edad;
        peso = _peso;
    }

    string nombre;
    unsigned short int edad;
    unsigned short int altura;
    unsigned short int peso;
};

int main()
{
    Persona chico ("Manuel", 169, 18, 80);

    cout << "Hola " << chico.nombre << ", tienes " << chico.edad << "años, mides " << chico.altura << "cm y pesas " << chico.peso << " kg " << endl;


}
