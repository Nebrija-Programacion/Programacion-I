#include <iostream>
using namespace std;

class Persona{

public:
    //constructor
    Persona(string _nombre, unsigned short int _peso)
    {
        nombre= _nombre;
       peso= _peso;
    }
    //atributos
    string nombre;
    unsigned short peso;
  };
int main()
{
    Persona chico("Brian", 67,);
    cout << "Hola "<< chico.nombre<<" pesas " <<chico.peso<< " kg." <<endl;
    return 0;
};
