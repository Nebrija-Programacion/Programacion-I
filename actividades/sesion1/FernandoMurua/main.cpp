#include <iostream>

using namespace std;

class Persona
{
public:
    Persona(string _nombre, unsigned short int _edad, unsigned short int _altura, unsigned short int _peso) {
    nombre = _nombre;
    edad = _edad;
    altura = _altura;
    peso = _peso;
    }
    string nombre;
    unsigned short int edad;
    unsigned short int altura;
    unsigned short int peso;
};

int main(){
    string nombre;
    unsigned short int edad;
    unsigned short int altura;
    unsigned short int peso;

    cout << "Por favor, introduce tu nombre: ";
    cin >> nombre;

    cout << "Por favor, introduzca su edad " << nombre << ":";
    cin >> edad;

    if(edad >= 115){
    cout << "Por favor " << nombre << " introduzca su verdadera edad " << endl;
    return 1;
    }
    cout << "Por favor, introduzca su estatura " << nombre << ":";
    cin >> altura;

    if(altura <= 0){
    cout << "Por favor " << nombre << ", introduzca un valor mayor que 0" << endl;
return 2;
    }
    cout << "Por favor " << nombre << ", introduzca su peso:";
    cin >> peso;

    if(peso >= 200){
        cout <<"Por favor " << nombre << ", introduzca un valor menor de 200" << endl;
        return 3;
    }
    Persona p(nombre, edad, altura, peso);
    cout << "Hola " << p.nombre << ", tienes " << p.edad << " años, mides " << p.altura << "cm y pesas " << p.peso << "kg" << endl;
    return 0;
}
