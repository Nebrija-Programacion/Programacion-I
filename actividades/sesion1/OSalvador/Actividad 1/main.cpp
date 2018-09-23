#include <iostream>
using namespace std;

class Persona{

    public:
        //construcot
            Persona(string _nombre, unsigned short int _peso){
                nombre = _nombre;
                peso = _peso;}
        //variables miembro (atributos)
            string nombre;
            unsigned short peso;

};

int main(){

    Persona tipejo("oscar", 65);
    cout << "Hola " << tipejo.nombre <<
            ", pesas " << tipejo.peso <<
            " kg " <<endl;
    return 0;
}