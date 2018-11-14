#include <iostream>

using namespace std;

class Persona{
public:
    Persona(string _nombre, unsigned short int _edad, unsigned short int _peso){
        nombre = _nombre;
        edad = _edad;
        peso = _peso;
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

    cout << "Por favor, introduzca su nombre: ";
    cin >> nombre;

    cout << "Por favor, introduzca la edad del sujeto " << nombre << " :";
    cin >> edad;

    if (edad <= 0 || edad > 115){
        cout << "ERROR! Eso no es computable." << endl;
        edad = 0;
        return 1;
    }

    cout << "Por favor, introduzca el peso del sujeto " << nombre << " en kg:";
    cin >> peso;

    if (peso <= 0 || peso > 200){
        cout << "ERROR! Eso no es computable." << endl;
        peso = 0;
        return 2;
    }

    Persona p(nombre, edad, peso);
    cout << "Hola sujeto " << p.nombre << " tienes " << p.edad << " años y pesas " << p.peso << " kg." << endl;

    return 0;
}
