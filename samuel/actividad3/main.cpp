#include <iostream>

using namespace std;

class Persona{

public:
  //constructor
  Persona(string _nombre, unsigned short int _edad, unsigned short int _altura)
  {
    nombre = _nombre;
    edad = _edad;
    altura = _altura;
  }

  //variables miembro (atributos)
  string nombre;
  unsigned short edad;
  unsigned short altura;
};

int main()
{
  string nombre;
  unsigned short int edad;
  unsigned short int altura;

  cout << "Por favor, introduce el nombre: ";
  cin >> nombre;

  cout << "Por favor, introduce la edad de " << nombre << ": ";
  cin >> edad;

     if(edad <= 0){
          cout <<"La edad debe ser mayor que 0"<<endl;
          cout << "Por favor, introduce la edad de " << nombre << ": ";
          cin >> edad;
       return 1;
     }

  cout << "Por favor, introduce la altura en cm de " << nombre << ": ";
  cin >> altura;

     if(altura <= 0){
          cout <<"La altura debe ser mayor que 0"<<endl;
          cout << "Por favor, introduce la altura en cm de " << nombre << ": ";
          cin >> altura;
       return 1;
     }
  Persona p(nombre, edad, altura);
  cout << "Hola " << p.nombre <<
      ", tienes " << p.edad <<
      " años y mides "<< p.altura << "cm. " << endl;
  return 0;
}
