#include <iostream>

using namespace std;

class Mascota

{

public:
    Mascota (string _nombre, unsigned short _edad, string _especie){
       nombre = _nombre;
       edad = _edad;
       especie = _especie;
    }

    //atributos
    string nombre;
    unsigned short edad;
    string especie;
    Mascota (){}
};
class Persona
{
public:
    Persona (string _nombre, unsigned short int _edad, unsigned short _peso){
    nombre = _nombre;
    edad = _edad;
    altura = _altura;
    }

    //atributos
    string nombre;
    unsigned short int edad;
    unsigned short int peso;
    Mascota mascota;

    void sayHellow(){
        cout<<"Hola "<<nombre<<" tu peso es "<<peso<<" kg". "Tu mascota preferido es un"  << especie << " de " <<edad<< " años y se llama "<<name << endl;
              }
int main()
{
    Mascota Scott ("Scott", 7, "lobo");
    Persona Jaime ("Jaime",18,82);
    Jaime.sayHellow();
}};
