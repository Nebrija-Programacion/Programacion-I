#include <iostream>

using namespace std;

class Mascota{

public:
  //constructor
  Persona(string _nombre, string _especie, string _mote, unsigned short int _edad)
  {
    nombre = _nombre;
    especie = _especie;
    mote = _mote;
    edad = _edad;
  }

  //variables miembro (atributos)
  string nombre;
  string especie;
  string mote;
  unsigned short edad;
};

int main()
{
    Persona chica("Maria", "conejo", "Coby", 2);
    cout << "Hola " << chica.nombre <<
            "tu mascota favorita es un " << chica.especie <<
            " se llama "<< chica.mote << " y tiene " << chica.edad<< " anos. "<< endl;
    return 0;
}

