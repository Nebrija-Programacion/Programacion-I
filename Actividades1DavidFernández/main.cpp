#include <iostream>

using namespace std;
class Persona{
 public:
    Persona(string _nombre,
            unsigned short int _peso);
{
    nombre = _nombre;
    peso = _peso;
  };
 string nombre; unsigned short int edad; unsigned short int altura; unsigned short int peso;
};

int main()
{
    Persona chico (" David ", 82);
    cout << "Hola" << chico.nombre << "pesas" << chico.peso << "kg" << endl;
    return 0;
}
