#include "registro.h"

using namespace std;
Registro::Registro()
{
}

bool Registro::anadirAnimal(string tipo, string genero, int edad, int chip)
{
    Animal animal;
    // Si no existe un animal con el mismo chip, lo añado
    if(!buscarAnimal(chip, animal)){
        Animal a(tipo, chip, edad, genero);
        animales.push_back(a);
        return true;
    }

    return false; // ya existe un animal con ese chip
}

bool Registro::anadirAnimal(Animal animal)
{
    return anadirAnimal(animal.getTipo(), animal.getGenero(), animal.getEdad(), animal.getChip());
}

bool Registro::darEnAdopcion(int chip)
{
    for(unsigned long i{0}; i < animales.size(); i++){
        // Si el animal tiene el mismo chip lo elimino
        if(animales.at(i).mismoChip(chip)){
            animales.erase(animales.begin() + i);
            return true;
        }
    }
    return false; // No he encontrado ningún animal con ese chip
}

bool Registro::buscarAnimal(int chip, Animal &animal)
{
    for(auto & aux: animales){
        // Si es el animal lo asigno al parámetro por referencia y devuelvo verdadero.
        if(aux.mismoChip(chip)){
            animal = aux;
            return true;
        }
    }
    // No es el mismo animal.
    return false;
}

vector<Animal> Registro::buscarAnimales(string tipo, int edad)
{
    vector<Animal> resultado;
    for(auto & aux: animales){
        // Si coincide con el criterio de búsqueda lo añado al vector resultado.
        if(aux.mismoTipoEdad(tipo, edad)){
            resultado.push_back(aux);
        }
    }
    return resultado;
}




