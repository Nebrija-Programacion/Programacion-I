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
    //variables
    string nombre;
    unsigned short peso;
    };
int main()
{
    Persona Chico("Diego", 60);
    cout << "Hola " <<Chico.nombre<< " pesas " <<Chico.peso<< " kilos " <<endl;
    return 0;
}
