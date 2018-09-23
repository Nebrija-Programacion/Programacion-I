#include <iostream>
using namespace std;

class Mascota{
	
	public:
		//constructor
			Mascota(string _nombre, string _especie, unsigned short _edad){
				nombre = _nombre;
				especie = _especie;
				edad = _edad;}
		//variables
			string nombre;
			string especie;
			unsigned short edad;
		Mascota (){}
};

class Persona{

    public:
        //construcot
            Persona(string _nombre, unsigned short int _edad, unsigned short int _altura, Mascota _mascota){
                nombre = _nombre;
                edad = _edad;
                altura = _altura;
				mascota = _mascota;}
        //variables miembro (atributos)
            string nombre;
            unsigned short edad;
            unsigned short altura;
			Mascota mascota;
};



int main(){

	Mascota rawr ("orejas", "perro", 8);
	
    Persona tipejo("oscar", 18, 176, rawr);
	
    cout << "Hola " << tipejo.nombre <<
            ", tienes " << tipejo.edad <<
            " años, mides " << tipejo.altura <<
            " cm y tu mascota favorita es " << rawr.nombre <<
			", es un " <<rawr.especie <<
			" de 8 años." << endl;
			
    return 0;
}
