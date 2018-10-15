#include <iostream>

using namespace std;

class Public{
    Persona(string _nombre, unsigned short int _edad, unsigned short int _altura)
    {
        nombre = _nombre ;
        edad = _edad ;
        altura = _altura ;
    }
    string nombre ;
    unsigned short edad ;
    unsigned short altura ;

};

int main()
{
  string nombre;
  unsigned short int edad;
  unsignes short int altura;

  cout << "Por favor introduce el nombre: ";
  cin >> nombre;

  cout << "Por favor introduce la edad de " << nombre << ";";
  cin >> edad;

  cout << " Por favor introduce la altura en cm de " << nombre << ";";
 cin >> altura;

 Persona Chica(nombre, edad, altura);
 cout << " Hola " << Chica.nombre << " tienes " << Chica.edad << " años y mides " << Chica.altura<< endl;
 return 0;

}
