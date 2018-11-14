#include <iostream>

using namespace std;

class Persona{

public:
    Persona(string _nombre, unsigned short int _peso)
    {
        nombre = _nombre;
        peso = _peso;
    }

    string nombre;
    unsigned short peso; //en kg
};

int main()
{
    Persona chica("Agustina", 70);
    cout << "Hola " << chica.nombre <<
            ", pesas " << chica.peso <<
            " kg " << endl;
    return 0;
}
