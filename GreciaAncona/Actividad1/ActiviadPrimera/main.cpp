#include <iostream>

using namespace std;

 string nombre="Grecia";
 unsigned short int edad="19";

 class Persona{
 public:
     // constructor
     Persona(string _nombre, unsigned short int _edad, unsigned short int _altura)
     {
         nombre = _nombre;
         edad = _ead;
         altura = _altura;
     }
     //variables miembro (atributos)
     string nombre;
     unsigned short edad;
     unsigned short altura;
 };

int main()
{
    //pertenece al constructor

    cout << " Hola "<< nombre << " tienes " << edad << " años "<< endl;
    return 0;

    //pertenece a las variables miembro

    Persona chica("Grecia", 19);
    cout << " Hola " << chica.nombre << " tienes " << chica.edad << " años y mides "<< chica.altura << "cm. "<<endl;

}
