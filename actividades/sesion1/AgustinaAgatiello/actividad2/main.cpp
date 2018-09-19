#include <iostream>

using namespace std;

class Mascota{

public:
    Mascota(string _nombre, string _especie, unsigned short int _edad)
    {
        nombre = _nombre;
        especie = _especie;
        edad = _edad;
    }
    string nombre;
    string especie;
    unsigned short edad;
    Mascota (){}
  };
class Persona{
 public:
    Persona(string _nombre, Mascota _mascota)
    {
        nombre = _nombre;
        mascota = _mascota;
    }
    string nombre;
    Mascota mascota;
  };
 int main()
{
    Mascota perro("Max","border collie", 2);
    Persona chica("Agustina", perro);
    cout << "Hola " << chica.nombre <<" tu mascota favorita es un " << chica.mascota.especie << " y se llama " << chica.mascota.nombre << endl;
    return 0;
}
