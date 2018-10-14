#include <iostream>
using namespace std;

class Pet
{
public:

    Pet(string _nombre, unsigned short _edad, string _especie){
       nombre = _nombre;
       edad = _edad;
       especie = _especie;
    }
    //attributes
    string nombre;
    unsigned short int edad;
    string especie;
    Pet (){}

};

class Person
{
public:

    Person(string _nombre, unsigned short int _edad, double _altura, Pet _pet){
    nombre = _nombre;
    edad = _edad;
    altura = _altura;
    pet = _pet;
    }

    //attributes
    string nombre;
    unsigned short int edad;
    double altura;
    Pet pet;
    void sayHellow(){
        cout<<"Hola "<<Person.nombre<<" tu altura es "<<altura<<" m. Tu edad es"<<edad.person<<" Tu mascota favorita es el "<<Pet.especie<<" de "<<Pet.edad<<" anyos y se llama "<<pet.name<<endl;
              }
};


int main()
{
    Pet Milu ("Milu", 2, "perro");
    Person GonzaCDZ ("Gonza",18,1.81,Milu);
    GonzaCDZ.sayHellow();

}

