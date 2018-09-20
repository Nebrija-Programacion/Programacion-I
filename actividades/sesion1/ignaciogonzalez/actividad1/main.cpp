#include <iostream>

using namespace std;

class Persona{
public:
    //constructor
    Persona(string _nombre, unsigned short int _edad, float _altura, unsigned short int _peso)
    {
        nombre = _nombre;
        edad = _edad;
        altura = _altura;
        peso = _peso;
    }
    string getNombre(){
        return nombre;
    }
    unsigned short getEdad(){
        return edad;
    }
    float getAltura (){
        return altura;
    }
    unsigned short getPeso (){
        return peso;
    }
    void sayHi(){
        cout <<"Hola soy Don " << nombre <<  " y peso "<<peso<< " Kg, pero porque los mÃºsculos tambiÃ©n pesan." << endl;

    }

    //atributos de la clase persona (variables)
    // edad en aÃ±os, altura en metros, peso en kg
    private:
        string nombre;
        unsigned short edad;
        float altura;
        unsigned short peso;
};

int main()
{
    Persona chico("Peter", 19, 1.78, 150);
    chico.sayHi();
    return 0;
}

