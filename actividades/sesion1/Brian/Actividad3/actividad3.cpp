#include <iostream>

using namespace std;

class Persona{

public:
//constructor:
Persona(string _nombre, unsigned short int _edad, unsigned short int _peso)
{
    nombre= _nombre;
    edad= _edad;
    peso= _peso;
}
    string nombre;
    unsigned short edad;
   unsigned short peso;

};

int main()
{
    string nombre;
    unsigned short int edad;
    unsigned short int peso;

    cout<< "Introduce tu nombre: ";
    cin >> nombre ;
    cout << "Introduce tu edad: ";
    cin>> edad;
    if(edad >=115){
        cout<< "Error eres muy viejo" << endl;
        return 1;
    }
    cout << "Introduce tu peso: ";
    cin >> peso;
    if(peso >=200){
        cout << "Error estas muy gordo" << endl;
    return 2;
    }

    Persona p(nombre, edad, peso);
    cout << "Hola "<< p.nombre << " tienes " <<p.edad << " años y pesas "
         << p.peso << " kilos." << endl;
    return 0;

}
