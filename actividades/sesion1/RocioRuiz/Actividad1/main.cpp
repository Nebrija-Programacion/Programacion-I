#include <iostream>

using namespace std;


class Persona{
public:
    //Constructor por defecto
    Persona(string _nombre, unsigned short int _peso)
        {
            nombre = _nombre;
            peso = _peso;

        }

    //Variables de peso y nombre.
        string nombre;
        unsigned short peso; // en Kg
            };


int main()
{
    Persona rocio (" Rocio ", 53);
    cout << " Hola " << rocio.nombre << " pesas " << rocio.peso << " kg. ";

    return 0;
}
