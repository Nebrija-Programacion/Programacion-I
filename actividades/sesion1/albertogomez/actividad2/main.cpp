#include <iostream>

using namespace std;

class Persona{

public:
    //constructor
    Persona(string _nombre, unsigned short int _peso, string _mascotaFavorita)
    {
        nombre = _nombre;
        peso = _peso;
        mascotaFavorita = _mascotaFavorita;

    }

    //variables miembro (atributos)
    string nombre;
    string mascotaFavorita;
    unsigned short peso;
  };

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
  };

int main()
{
    Persona chico("Alberto", 85, "pastor aleman");
    Mascota perro("Hachiko","pastor aleman", 5);
    cout << "Hola " << chico.nombre <<" tu mascota favorita es un " << perro.especie << " y se llama " << perro.nombre << endl;
    return 0;
};
