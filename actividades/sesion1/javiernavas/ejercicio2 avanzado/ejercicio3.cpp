#include <iostream>
 //Actividad 2 (avanzado)

   // Modificar el programa anterior para añadir una nueva clase Mascota
	//La clase Mascota debe tener como atributos: nombre, especie (perro, gato, etc.), edad
    //Añadir a la clase Persona un atributo: mascotaFavorita de tipo Mascota
    //Imprimir por pantalla: “Hola xxx, tu mascota favorita es un xxx(especie) y se llama xxx“
    
//ejercicio sacado de https://codebin.cc/2018/09/16/leccion-2-programando-la-primera-clase/


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

    Pet (){} 



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

        cout<<"Name: "<<name<<endl;

        cout<<"Age: "<<age<<endl;

        cout<<"Height: "<<height<<endl<<endl;;

        cout<<"************* PET *************"<<endl<<endl;

        cout<<"Name: "<<pet.name<<endl;

        cout<<"Age: "<<pet.age<<endl;

        cout<<"Species: "<<pet.species<<endl;



    }

};





int main(){

    Pet teka ("Teka", 7, "Dog");

    Person marcosAlonso ("Marcos",24,178,teka);

    marcosAlonso.sayHellow();



}
