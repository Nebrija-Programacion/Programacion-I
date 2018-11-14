#include <iostream>
using namespace std;

class Mascota{

public:
    Mascota(string _nombre,string _especie, unsigned short _edad)
    {
     nombre= _nombre;
     especie= _especie;
     edad= _edad;
    }
    string nombre;
    string especie;
    unsigned short edad;
    Mascota(){}
};

class Persona{

public:

    Persona(string _nombre, Mascota _mascotafavorita)
{
    nombre= _nombre;
    mascotafav= _mascotafavorita;
     }

    string nombre;
    Mascota mascotafav;
};

int main()
{
    Mascota lobo("Chewbacca"," gris", 5);
    Persona chico("Brian", lobo);
    cout<< "Hola "<< chico.nombre << "tu mascota favorita fue un " <<chico.mascotafav.especie << "que se llamaba " <<chico.mascotafav.nombre <<
           " y tenia " << chico.mascotafav.nombre <<" años." << endl;

    return 0;
}
