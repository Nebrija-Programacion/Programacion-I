#include <iostream>

using namespace std;
class _persona{

public:
  //constructor
  Persona (unsigned short int _edad, unsigned short int _peso, string _nombre, unsigned short int _altura)
  {
    edad = _edad;
    peso = _peso;
    nombre= _nombre;
    altura= _altura;
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

    cout << "por favor, introduce la edad de" << edad << ": ";
    cin >> edad;

    if(edad >= 115){
      cout << "La edad debe ser menor que 115" << endl;
      return 1;
    }

      cout << "por favor, introduce el peso en kilogramos de" << peso << ": ";
      cin >> peso;

      if(peso >= 200){
        cout << "El peso debe ser menor que 200" << endl;
        return 1;

      }}
