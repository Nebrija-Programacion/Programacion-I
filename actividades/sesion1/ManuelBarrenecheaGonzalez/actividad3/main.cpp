#include <iostream>

using namespace std;

class Persona{
public:

    string nombre;
    unsigned short int edad;
    unsigned short int peso;

    Persona(string _nombre, unsigned short int _edad, unsigned short int _peso){

        nombre = _nombre;
        edad = _edad;
        peso = _peso;

    }
};

int main()
{
    string nombre;
    unsigned short int edad;
    unsigned short int peso;

    cout << "Por favor introduce tu nombre: " << endl;
    cin >> nombre;

    cout << "No soy ningun pervertido pero porfis introduce tu edad: " << endl;
    cin >> edad;

    if(edad > 115){
        edad = 0;
        cout << "La edad introducida no puede ser mayor que 115. " << endl;
        return 1;
    }

    cout << "Y ya por ultimo si introduces tu peso la petas: " << endl;
    cin >> peso;

    if(peso > 200){
        peso = 0;
        cout << "El peso introducido no puede ser mayor que 200. " << endl;
        return 1;
    }

    Persona personita (nombre, edad, peso);

    cout << "Hola " << personita.nombre << ", tienes " << personita.edad << " y pesas " << personita.peso << endl;

    return 0;
}
