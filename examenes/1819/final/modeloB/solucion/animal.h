#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <vector>
using namespace std;

class Animal{
public:
    // constructor por defecto no parametrizado
    Animal(){}

    // constructor parametrizado;
    Animal(string _tipo, int _chip, int _edad, string _genero);

    // funciones getter
    string getTipo() const;
    string getGenero() const;
    int getChip() const;
    int getEdad() const;

    /**
     * @brief mismoChip comprueba si el animal tiene el mismo chip.
     * @param _chip El chip del animal
     * @return verdadero si coincide el chip, falso en caso contrario
     */
    bool mismoChip(int _chip) const;
    /**
     * @brief mismoTipoEdad comprueba si el animal tiene la edad y tipo pasado por parametro.
     * @param _tipo El tipo del animal
     * @param _edad La edad del animal
     * @return
     */
    bool mismoTipoEdad(string _tipo, int _edad) const;
    /**
     * @brief print Muestra por pantalla los datos del animal
     */
    void print() const;

private:
    string tipo, genero;
    int chip, edad;
};
#endif // ANIMAL_H
