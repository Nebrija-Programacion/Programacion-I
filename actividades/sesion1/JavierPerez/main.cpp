#include <iostream>
using namespace std;
class Persona{
public:
  //constructor
  Persona(unsigned short int _edad, string _nombre, unsigned short int _altura, unsigned short int _peso)
  {
    edad = _edad;
    peso = _peso;
    nombre = _nombre;
    altura = _altura;
  }
  //variables miembro (atributos)
  unsigned short edad;
  unsigned short peso;
  unsigned short altura;
  string nombre;
};
int main()
{
  unsigned short int edad;
  unsigned short int peso;
  string nombre;
  unsigned short int altura;
  Persona p (edad, nombre, altura,peso);
  cout << "Por favor, introduce la edad de ";
  cin >> p.edad;
  if(p.edad >= 115){
    cout << "La edad debe ser menor que 115" << endl;
    return 1;
    }
  cout <<"Nombre: ";
  cin >> p.nombre;
  cout << "Por favor, introduce el peso en kg de ";
  cin >> p.peso;
  if(p.peso >= 200){
    cout << "el peso debe ser menor que 200" << endl;
    return 1;
  }
  cout <<"Altura: ";
  cin >> p.altura;
  return 0;
}
