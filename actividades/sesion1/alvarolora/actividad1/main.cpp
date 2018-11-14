#include <iostream>

using namespace std;


class Animal
{
public:

    Animal(string _name, unsigned short _age, string _species){
       nombre = _name;
       edad = _age;
       especie = _species;
    }
    //attributes
    string nombre ;
    unsigned short edad;
    string especie ;
    Pet (){}

};

class Persona
{
public:

    Persona(string _name, unsigned short int _age, unsigned short _weight, Animal _pet){
    nombre = _name;
    edad = _age;
    peso = _weight;
    pet = _pet;

    }

    //attributes
    string name;
    unsigned short int edad;
    unsigned short int peso;
    Pet pet;
    void sayHellow(){
        cout<<"Hola "<<nombre<<" pesas "<< peso<<" kg. Tu mascota favorita es un "<<pet.species<<" de "<<pet.age<<" años y se llama "<<pet.name<<endl;
              }
};


int main()
{
    Pet Sugui ("Sugui", 4, "perro");
    Person Alvarolora ("Alvaro",18,95,Sugui);
    Alvarolora.sayHellow();

}
