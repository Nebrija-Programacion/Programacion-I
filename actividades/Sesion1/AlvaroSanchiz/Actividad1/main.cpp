#include <iostream>

using namespace std;


class Persona{
public:
    //Construyendo...
    Persona(string _nombre, unsigned short int _peso)
    {
        nombre = _nombre;
        peso = _peso;

    }

    //Varibles de peso y nombre.
    string nombre;
    unsigned short peso;
  };


int main()
{
    Persona chico (" Alvaro ", 76);
    cout << " Hola " << chico.nombre << " pesas " << chico.peso << " kilogramos. ";

    return 0;
}
