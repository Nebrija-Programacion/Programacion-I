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
    Persona chico("Oscar", 76);
    cout << "Hola " << chico.nombre <<
            ", pesas " << chico.peso <<
            " kg " << endl;


    return 0;
}
