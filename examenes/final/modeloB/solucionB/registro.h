#ifndef AGENDA_H
#define AGENDA_H

#include "animal.h"
#include <vector>
#include <iostream>

using namespace std;


class Registro
{
public:
    Registro();

    /**
     * @brief anadirAnimal Añade un animal al registro (si no existe ya otro con el mismo chip)
     * @param tipo Tipo de animal. Perro o gato.
     * @param genero Genero del animal. Macho o hembra.
     * @param edad. Edad del animal
     * @param chip. Chip (entre 0 y 9999)
     * @return Verdadero si el animal ha sido añadido con éxito.
     */
    bool anadirAnimal(string tipo, string genero, int edad, int chip);

    /**
     * @brief anadirAnimal Añade un animal al registro (si no existe ya otro con el mismo chip)
     * @param animal el animal
     * @return Verdadero si el animal ha sido añadido con éxito.
     */
    bool anadirAnimal(Animal animal);

    /**
     * @brief darEnAdopcion Elimina el animal del registro
     * @param chip chip del animal a dar en adopcion
     * @return Verdadero si ha sido eliminado correctamente.
     */
    bool darEnAdopcion(int chip);

    /**
     * @brief buscarAnimal Busca un animal por chip y lo guarda en el parámetro por referencia animal
     * @param chip el número de chip
     * @param animal parámetro por referencia donde se guarda el animal
     * @return verdadero si el animal se encuentra enel registro
     */
    bool buscarAnimal(int chip, Animal & animal);

    /**
     * @brief buscarAnimales Busca todos los animales de un tipo y edad determinados
     * @param tipo El tipo de animal (perro o gato)
     * @param edad La edad del animal
     * @return El vector de animales encontrados
     */
    vector<Animal> buscarAnimales(string tipo, int edad);




private:
    vector<Animal> animales;
};

#endif // AGENDA_H
