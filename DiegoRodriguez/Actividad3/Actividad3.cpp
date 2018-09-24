#include <iostream>

using namespace std;

class Persona{

public:
    Persona( string _nombre, unsigned short int _altura, unsigned short int _edad, unsigned short int _peso)
  {
    nombre = _nombre;
    altura = _altura
    edad = _edad;
    peso = _peso;
  }
  string nombre;
  unsigned short altura;
  unsigned short edad;
  unsigned short peso;
};

 int main()
{
  string nombre;
  unsigned short int edad;
  unsigned short int altura;
  unsigned short int peso;
  cout << "introduduzca su nombre: ";
  cin >> nombre;
  cout << "introduzca su edad "<< nombre <<": ";
  cin >> edad;
  if(edad <= 0){
      cout << "¿Comó tienes menos de 0 años? "<<endl;
      return 1;
  }
  if(edad >= 115){
      cout << "¿De verdad vives con esa edad? "<<endl;
      return 1;
  }
  cout << "Introduzca su altura en cm "<< nombre <<": ";
  cin >> altura;
  if (altura<=0){
           cout << " No puedes medir 0cm ¿no? " << endl;
       }
  if (altura>=500){
           cout << " No puede haber alguin tan alto... " << endl;
       }
  cout << "Por favor, introduce el peso en kg de "<< nombre <<": ";
  cin >> peso;
  if(peso >= 600){
      cout << "Su peso no puede ser tanto" << endl;
      return 1;
    }
  if(peso >= 600){
      cout << "Lo pusiste mal seguro " << endl;
      return 1;
    }
  Persona p(nombre, edad, altura, peso);
  cout << "Hola " << p.nombre <<
      ", tienes " << p.edad <<
      " años, mides "<< p.altura << "cm "
      << " y pesas " << p.peso << "kg. " << endl;
  return 0;
}
