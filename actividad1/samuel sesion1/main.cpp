#include <iostream>
using namespace std;
class Persona{
public:
    Persona(string _nombre, unsigned short int _edad, float _altura, unsigned short int _peso)
    {
        nombre = _nombre;
        edad = _edad;
        altura = _altura;
        peso = _peso;

    }
    string nombre;
    unsigned short edad;
    float altura;
    unsigned short peso;
};


int main()
{
  Persona adolescente("Samuel", 18, 1.83, 65);
  cout << "Hola " << adolescente.nombre
       <<", tienes " << adolescente.edad
       << " años, mides "<< adolescente.altura
       << " metros y pesas"<< adolescente.peso <<"kg.";
  return 0;
}
