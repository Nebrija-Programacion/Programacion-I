#include <iostream>

using namespace std;

class Persona{

public:
    //constructor
    Persona(string _nombre, unsigned short int _edad, unsigned short int _altura)
    {
        nombre = _nombre;
        edad = _edad;
        altura = _altura;
    }

    //variables miembro (atributos)
    string nombre;
    unsigned short edad;
    unsigned short altura;
};

int main()
{
    Persona chica("Maria", 19, 169);
    cout << "Hola " << chica.nombre <<
            ", tienes " << chica.edad <<
            " años y mides "<< chica.altura << "cm. " << endl;
    return 0;
}

