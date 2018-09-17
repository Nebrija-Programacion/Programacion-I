#include <iostream>

using namespace std;

class Persona{

public:
    //constructor
    Persona(string _nombre, unsigned short int _peso)
    {
        nombre = _nombre;
        peso = _peso;
    }

    //variables miembro (atributos)
    string nombre;
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
    Persona chico("Alberto", 85);
    Mascota hachiko("Hachiko","perro",5);
    cout << "Hola " << chico.nombre <<" pesas " << chico.peso << "kg. " <<"tu mascota favorita es un "
         << hachiko.especie <<" y se llama " <<hachiko.nombre << endl;
    return 0;
}
