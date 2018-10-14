#include <iostream>

using namespace std;

class Mascota{

public:
    //construcotr
    Mascota(string _nombre, string _especie, unsigned short int _edad)
    {
        nombre = _nombre;
        especie = _especie;
        edad = _edad;
    }

    //variables miembro (atributos)
    string nombre;
    string especie;
    unsigned short int edad;
    Mascota(){}
};

class Persona{

public:
    //constructor
    Persona(string _nombre, Mascota _mascotaFavorita)
    {
        nombre = _nombre;
        mascotaFavorita = _mascotaFavorita;
    }

    //variables miembro (atributos)
    string nombre;
    Mascota mascotaFavorita ;
};

int main()
{
    Mascota perro("Rocky", "labrador", 7);
    Persona chica("Nieves", perro);
    cout << "Hola " << chica.nombre <<
            " tu mascota favorita es un " << chica.mascotaFavorita.especie <<
            " y se llama " << chica.mascotaFavorita.nombre << endl;
    return 0;
}
