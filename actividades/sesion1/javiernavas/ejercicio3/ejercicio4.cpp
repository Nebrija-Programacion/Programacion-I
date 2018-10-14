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
  short int edad;
  short int altura;
 
  cout << "Por favor, introduce el nombre: ";
  cin >> nombre;
 
  cout << "Por favor, introduce la edad de " << nombre << ": ";
  cin >> edad;
 
  if(edad <= 0){
    cout << "La edad debe ser mayor que 0" << endl;
    return 1;
  }
  if(edad > 115){
    cout << "La edad debe ser menor que 115" << endl;
    return 2;
  }
 
  cout << "Por favor, introduce la altura en cm de " << nombre << ": ";
  cin >> altura;
 
  if(altura <= 0){
    cout << "La altura debe ser mayor que 0" << endl;
    return 1;
  }
   if(altura > 200){
    cout << "La altura debe ser menor que 200" << endl;
    return 2;
  }
  cout << "Hola "<<nombre<< "usted tiene una edad de "<<edad<< "y una altura de "<<altura << endl;
}
