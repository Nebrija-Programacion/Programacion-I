#include <iostream>

using namespace std;

class Persona{

public:
    Persona(string _nombre, unsigned short int _edad, unsigned short int _altura, unsigned short int _peso)
    {
        nombre = _nombre;
        edad = _edad;
        altura = _altura;
        peso = _peso;
    }

    string nombre;
    unsigned short edad;
    unsigned short altura;
    unsigned short peso;
};


int main()
{
    Persona chica("Nieves", 27, 172, 60);
    cout << "Hola " << chica.nombre <<
            ", tienes " << chica.edad <<
            " anos , mides "<< chica.altura << "cm " <<
            "y pesas "<< chica.peso << "kg. "<< endl;

    return 0;
}
