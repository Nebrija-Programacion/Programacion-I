//Modificar el programa anterior para que la clase Persona tenga como atributo el peso (en kg)
//Mostrar por pantalla el saludo y añadir el texto “pesas xx kg”, siendo xx el peso de la persona.
//ejercicio sacado de https://codebin.cc/2018/09/16/leccion-2-programando-la-primera-clase/
//ejercicio realizado por Javier Navas.
#include <iostream>
   
using namespace std;
 
class Persona{
 
public:
    //constructor
    Persona(string _nombre, unsigned short int _peso)
    {
        nombre = _nombre;
        peso = _peso;
    
    }
 
    //variables miembro (atributos)
    string nombre;
    unsigned short peso;
    
};
 
int main()
{
    Persona chica("Javier", 60);
    cout << "Hola " << chica.nombre <<
            ", pesas " << chica.peso 
            << "kg. " << endl;
    return 0;
}
