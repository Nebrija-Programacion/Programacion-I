
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

//atributos
string nombre;
unsigned short edad;
unsigned short peso;
unsigned short altura;

};

int main(){

    string nombre;
     unsigned short int edad;
     unsigned short int peso;
     unsigned short int altura;

    cout << "Introduce tu nombre ";
            cin >> nombre;

    cout << "Introduce tu edad ";
            cin >> edad;

    if(edad <= 0){
        cout << "La edad debe ser mayor que 0 " << endl;
    return 1;
    }

        cout << "Introduce tu peso ";
            cin >> peso;

     if(peso >= 250){
         cout << "El peso debe ser menor a 250 kgs " << endl;
     return 1;
     }

     cout << "Introduce la altura " ;
             cin >> altura;

     if(altura >= 250){
         cout << "La altura debe ser menor a 250 cm " << endl;
     return 1;
     }

     Persona Mario("Mario",18,69,171);

     cout << "Hola " << Mario.nombre <<  " tienes " << Mario.edad << " de edad, pesas " << Mario.peso << " kgs. Y mides " << Mario.altura << " cms" << endl;
     return 0;
}
