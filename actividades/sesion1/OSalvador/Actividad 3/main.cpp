#include <iostream>
using namespace std;

class Persona{

    public:
        //construcot
            Persona(string _nombre, unsigned short int _edad, unsigned short int _peso){
                nombre = _nombre;
                edad = _edad;
                peso = _peso;}
        //variables miembro (atributos)
            string nombre;
            unsigned short edad;
            unsigned short peso;
		//no vienen instruciones en la leccion sobre como comprobar el input en el constructor
};

int main(){

	string nombre;
	unsigned short int edad;
	unsigned short int peso;
	
	cout << "Introduce nombre: ";
	cin >>nombre;
	
	cout << "Introduce edad para " << nombre << ": ";
	cin >> edad;
		if (edad >= 115){
			cout << "Edad no esperada. Reclama tu premio Guinness antes de usar este programa" << endl;
			return 1;
		}
		
	cout << "Para finalizar introduce peso para " << nombre << "en kg: ";
	cin >> peso;
		if (peso >= 150){
			cout << "Peso no esperado. Ponte a regimen antes de usar este programa"  << endl;
			return 1;
		}

    Persona tipejo(nombre, edad, peso);
    cout << "Hola " << tipejo.nombre <<
            ", tienes " << tipejo.edad <<
            " años y mides "<< tipejo.peso <<
            "cm." <<endl;
    return 0;
}