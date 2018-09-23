#include <iostream>

using namespace std;


class Persona{
public:
    //constructor
    Persona(string _nombre, unsigned short int _edad, unsigned short int _peso){
        nombre=_nombre;
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
    unsigned short int edad, peso;

    cout << "Hágame el favor de introducir su nombre majete: ";
    cin >> nombre;

    cout << nombre << ", ahora si es tan amable, introduzca su edad: ";
    cin >> edad;

    if(edad <= 0 || edad > 115 ) {
        edad = 0;
        return 1;
    }

    cout << "Y por último " << nombre << ", si no le importa a usted, introduzca su peso: ";
    cin >> peso;

    if (peso <= 0|| peso > 200){
        cout << "El peso debe ser menor que 200" << endl;
        peso = 0;
        return 1;
    }

    Persona p(nombre, edad, peso);
    cout << "Hola majete, te llamas " << p.nombre << " , tienes "
         << p.edad << " años y pesas " << p.peso << " kg." << endl;
    return 0;


}
