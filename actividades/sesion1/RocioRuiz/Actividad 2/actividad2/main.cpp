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
    //variables miembro (atributos)
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
   Mascota gata("Dama", "Ragdoll", 7);
   Persona chica("Rocio", gata);

    cout << "Hola " << chica.nombre << ", tu mascota favorita es un " << chica.myPet.especie
         << ", se llama " << chica.myPet.name << " y tiene " << chica.myPet.edad << " meses." << endl;
    return 0;

}
