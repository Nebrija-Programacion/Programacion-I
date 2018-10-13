#include <iostream>

using namespace std;


class Pet
{
public:

    Pet(string _name, unsigned short _age, string _species){
       name = _name;
       age = _age;
       species = _species;
    }
    //attributes
    string name;
    unsigned short age;
    string species;
    Pet (){}

};

class Person
{
public:

    Person(string _name, unsigned short int _age, unsigned short _height, Pet _pet){
    name = _name;
    age = _age;
    height = _height;
    pet = _pet;
    }

    //attributes
    string name;
    unsigned short int age;
    unsigned short int height;
    Pet pet;
    void sayHellow(){
        cout<<"Hola "<<name<<" pesas "<<height<<" kg. Tu mascota favorita es un "<<pet.species<<" de "<<pet.age<<" anos y se llama "<<pet.name<<endl;
              }
};


int main()
{
    Pet Perri ("Perri", 16, "perro");
    Person Javier ("Javier",17,86,Perri);
    Javier.sayHellow();

}
