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
   //variables miembro (atributos)
  string nombre;
  unsigned short edad;
  unsigned short altura;
  unsigned short peso;
};
 int main()
{
  string nombre;
  unsigned short int edad, altura, peso;
   cout << "Por favor, introduce el nombre: ";
  cin >> nombre;
   cout << "Por favor, introduce la edad de " << nombre << ": ";
  cin >> edad;
   if(edad <= 0){
      cout << "La edad debe ser mayor que 0"<<endl;
      return 1;
  }
  if(edad >= 115){
      cout << "La edad debe ser menor que 115"<<endl;
      return 1;
  }
   cout << "Por favor, introduce la altura en cm de "<<nombre<<": ";
  cin >> altura;
   if(altura <= 0){
      cout << "La altura debe ser mayor que 0"<<endl;
      return 1;
    }
   cout << "Por favor, introduce el peso en kg de "<<nombre<<": ";
  cin >> peso;
   if(peso >= 200){
      cout << "El peso debe ser menor de 200" << endl;
      return 1;
    }
   Persona P(nombre, edad, altura, peso);
  cout << "Hola " << P.nombre <<
      ", tienes " << P.edad <<
      " años, mides "<< P.altura << "cm. "
      << " Pesas " << P.peso << "." << endl;
  return 0;
}
