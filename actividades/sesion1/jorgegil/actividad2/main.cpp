#include <iostream>

using namespace std;

class Mascota{
public:
    Mascota(string _nombre, string _especie, unsigned short int _edad){
        nombre = _nombre;
        especie = _especie;
        edad = _edad;
    }

    string nombre;
    string especie;
    unsigned short edad;
    Mascota(){}
};

class Persona{
public:
    Persona(string _nombre, Mascota _mascotafav){
        nombre = _nombre;
        mascotafav = _mascotafav;
    }

    string nombre;
    Mascota mascotafav;
};

int main()
{
    Mascota perro("Hobo", "mezcla de pastor aleman", 15);
    Persona yo("Jorge", perro);

    cout << "Hola " << yo.nombre << " tu mascota ideal fue tu perro, " << yo.mascotafav.nombre
         << ", que era una " << yo.mascotafav.especie << " y murio a los " << yo.mascotafav.edad << " años."<< endl;
    return 0;
}
