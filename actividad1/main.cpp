#include <iostream>
using namespace std;
class Persona{
public:
    //constructor
    Persona(string _nombre, unsigned short int _edad, float _altura)
    {
        nombre = _nombre;
        edad = _edad;
        altura = _altura;

    }
    string nombre;
    unsigned short edad;
    float altura;
};


int main()
{
  Persona adolescente("Samuel", 18, 1.83);
  cout << "Hola " << adolescente.nombre
       <<", tienes " << adolescente.edad
      << " años y mides "<< adolescente.altura << " metros." ;
  return 0;
}
