#include <iostream>

using namespace std;

class Mascota{
public:
    //constructor
    Mascota(string _name, string _especie, unsigned short int _edad)
    {
        name= _name;
        especie= _especie;
        edad= _edad;
    }
    string name;
    string especie;
    unsigned short edad;
    Mascota(){}

};

class Persona{
public:
    //constructor
    Persona(string _nombre, Mascota _myPet){
        nombre=_nombre;
        myPet= _myPet;
    }
 string nombre;
 Mascota myPet;
};

int main()
{
   Mascota perro("Duna", "Labrador", 2);
   Persona chico("Peter", perro);

    cout << "Hola " << chico.nombre << ", tu mascota favorita es un " << chico.myPet.especie
         << ", se llama " << chico.myPet.name << " y tiene " << chico.myPet.edad << " años." << endl;
    return 0;

}

