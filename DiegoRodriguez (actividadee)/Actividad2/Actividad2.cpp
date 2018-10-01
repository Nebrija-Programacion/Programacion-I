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
    Mascota conejo( "manchitas ", " Toy Holandes Enano ", 12);

    Persona chico (" Diego ", conejo);
    cout << " Hola soy " << chico.nombre << " mi mascota favarita es " << chico.mascota.especie <<
            " y se llama " << chico.mascota.nombre << endl;
    return 0;
}
