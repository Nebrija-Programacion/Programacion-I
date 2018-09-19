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
        cout<<"Hola "<<name<<" pesas "<<height<<" kg. Tu mascota favorita es un "<<pet.species<<" de "<<pet.age<<" anyos y se llama "<<pet.name<<endl;
              }
};


int main()
{
    Pet Trufo ("Trufo", 3, "perro");
    Person Angelgarcia ("Angel",18,73,Trufo);
    Angelgarcia.sayHellow();

}
