#include <iostream>

using namespace std;

class Persona{
public:
    Persona(string _nombre, unsigned short int _edad, unsigned short int _altura)
    {
        nombre = _nombre;
        edad = _edad;
        altura = _altura;
    }

    string nombre;
    unsigned short edad;
    unsigned short altura;
};
class mascotaFavorita{
public:
    mascotaFavorita(string _nombre, string _animal, unsigned short _edad)
    {
    nombre = _nombre;
    animal = _animal;
    edad = _edad;
    }
    string nombre;
    string animal;
    unsigned short edad;
};

int main()
{
    Persona chica("Nieves", 27, 172);
    mascotaFavorita mascota("Roxy", "el perro", 3);
    cout << "Hola " << chica.nombre <<
            ", tu mascota favorita es "<<mascota.animal <<
            ", su nombre es " << mascota.nombre <<
            " y tiene años." <<mascota.edad <<endl;

    return 0;
}
