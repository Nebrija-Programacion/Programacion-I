#include <iostream>

using namespace std;

class Mascota{

public:
    //constructor
    Mascota(string _nombre, string _especie, unsigned short int _edad)
    {
        nombre = _nombre;
        especie = _especie;
        edad = _edad;
    }

    //variables miembro (atributos)
    string nombre;
    string especie;
    unsigned short edad;
    Mascota (){}
  };
class Persona{

public:
    //constructor
    Persona(string _nombre, unsigned short int _peso, Mascota _mascota)
    {
        nombre = _nombre;
        peso = _peso;
        mascota = _mascota;
    }

    //variables miembro (atributos)
    string nombre;
    unsigned short peso;
    Mascota mascota;
  };

int main()
{
    Mascota perro("Hachiko","pastor aleman", 5);
    Persona chico("Alberto", 85, perro);
    cout << "Hola " << chico.nombre <<" tu mascota favorita es un " << chico.mascota.especie << " y se llama " << chico.mascota.nombre << endl;
    return 0;
};
