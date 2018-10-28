#include <iostream>

using namespace std;

class Persona{
public:

    string nombre;
    string mascotaFavorita;
    unsigned short int edad;
    unsigned short int altura;
    unsigned short int peso;

    Persona(string _nombre, string _mascotaFavorita, unsigned short int _altura, unsigned short int _edad, unsigned short int _peso){
        nombre = _nombre;
        altura = _altura;
        edad = _edad;
        peso = _peso;
        mascotaFavorita = _mascotaFavorita;
    }
};

class Mascota{
public:

    string nombre;
    string especie;
    unsigned short int edad;

    Mascota(string _nombre, string _especie, unsigned short int _edad){
        nombre = _nombre;
        especie = _especie;
        edad = _edad;
    }
};

int main()
{
    Mascota miMascota ("Lola", "perro", 2);

    Persona holi ("Manuel", "perro", 18, 169, 80);

    cout << "Hola " << holi.nombre << ", tu mascota favorita es un " << miMascota.especie << " y se llama " << miMascota.nombre << endl;
}
