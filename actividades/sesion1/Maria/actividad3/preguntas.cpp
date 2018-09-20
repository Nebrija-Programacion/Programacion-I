#include <iostream>

using namespace std;

class Persona{

public:
  //constructor
  Persona(string _nombre, unsigned short int _edad, unsigned short int _altura, unsigned short int _peso)
  {
    nombre = _nombre;
    edad = _edad;
    altura = _altura;
    peso = _peso;
  }

  //variables miembro (atributos)
  string nombre;
  unsigned short edad;
  unsigned short altura;
  unsigned short peso;
};

int main()
{
  string nombre;
  short int edad;
  short int altura;
  short int peso;

  cout << "Por favor, introduce el nombre: ";
  cin >> nombre;

  cout << "Por favor, introduce la edad de " << nombre << ": ";
  cin >> edad;

  if(edad >= 115){
    cout << "La edad debe ser menor que 115" << endl;
    return 2;
  }

  cout << "Por favor, introduce la altura en cm de " << nombre << ": ";
  cin >> altura;

  if(altura <= 0){
    cout << "La altura debe ser mayor que 0" << endl;
    return 2;
  }

  cout << "Por favor, introduce el peso en Kg de " << nombre << ": ";
  cin >> peso;


  if(peso >= 200){
      cout << "El peso debe de ser menor que 200" << endl;
      return 2;
  }
}
