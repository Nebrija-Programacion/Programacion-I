#include <iostream>

using namespace std;


class Pet{
public:
    //constructor
    Pet(string _name, unsigned short _age, string _species){
       name = _name;
       age = _age;
       species = _species;
    }
    //attributes
    string name;
    unsigned short age;
    string species;
    Pet (){} //**WARNING** create an empty constructor than will be use in class Person.

};

class Person{
public:
    //constructor
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
    Pet pet; // create a member variable type Pet which gonna stock Pet object values.
    void sayHellow(){
        cout<<"***********************************************"<<endl<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Height: "<<height<<endl<<endl;;
        cout<<"************* PET *************"<<endl<<endl;
        cout<<"Name: "<<pet.name<<endl;
        cout<<"Age: "<<pet.age<<endl;
        cout<<"Species: "<<pet.species<<endl<<endl;
        cout<<"***********************************************"<<endl;

    }
};


int main(){
    Pet teka ("Teka", 7, "Dog");
    Pet noa ("Noa",3,"Cat");
    Person marcosAlonso ("Marcos",24,178,teka);
    Person clara ("Clara",21,160,noa);
    marcosAlonso.sayHellow();
    clara.sayHellow();

}
