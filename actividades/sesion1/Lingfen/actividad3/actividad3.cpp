#include <iostream>

using namespace std;

class Persona{

public:
    Persona(string _nombre, unsigned short int _edad, unsigned short int _altura, unsigned short int _peso)
  {
    nombre = _nombre;
    edad = _edad;
    altura = _altura;
    peso = _peso;
  }

  string nombre;
  unsigned short edad;
  unsigned short altura;
  unsigned short peso;
};

 int main()
{
  string nombre;
  unsigned short int edad;
  unsigned short int altura;
  unsigned short int peso;

  cout << "Por favor, introduce el nombre: ";
  cin >> nombre;

  cout << "Por favor, introduce la edad de "<< nombre <<": ";
  cin >> edad;

  if(edad <= 0){
      cout << "ERROR. La edad debe ser mayor que 0"<<endl;
      return 1;
  }
  if(edad >= 115){
      cout << "ERROR. La edad debe ser menor que 115"<<endl;
      return 1;
  }

  cout << "Por favor, introduce la altura en cm de "<< nombre <<": ";
  cin >> altura;

  cout << "Por favor, introduce el peso en kg de "<< nombre <<": ";
  cin >> peso;

  if(peso >= 200){
      cout << "ERROR. El peso debe ser menor de 200" << endl;
      return 1;
    }

  Persona p(nombre, edad, altura, peso);
  cout << "Hola " << p.nombre <<
      ", tienes " << p.edad <<
      " años, mides "<< p.altura << "cm "
      << " y pesas " << p.peso << "kg. " << endl;
  return 0;
}
