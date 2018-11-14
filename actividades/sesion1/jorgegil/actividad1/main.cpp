#include <iostream>

using namespace std;

class Persona{
public:
    //constructor
    Persona(string _nombre, unsigned short int _edad, unsigned short int _peso, unsigned short int _altura)
    {
        nombre = _nombre;
        edad = _edad;
        peso = _peso;
        altura = _altura;
    }

    string getNombre(){
        return nombre;
    }

    unsigned short getEdad(){
        return edad;
    }

    unsigned short getPeso(){
        return peso;
    }

    unsigned short getAltura(){
        return altura;
    }

    void diHolita(){
        cout << "Hola holita soy " << nombre << " y peso " << peso << " kg" << endl;
    }

private:
    string nombre;
    unsigned short edad;
    unsigned short peso;
    unsigned short altura;
};

int main()
{
    Persona p("Jorge", 20, 80, 180);
    p.diHolita();
    return 0;
}
