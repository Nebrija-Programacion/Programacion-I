#ifndef AGENDA_H
#define AGENDA_H

#include "contacto.h"
#include <vector>
#include <iostream>

using namespace std;


class Registro
{
public:
    Registro();

    /**
     * @brief anadirContacto - Añade un contacto a la agenda si este no está presente
     * @param nombre - Nombre del contacto
     * @param pApellido - Primer apellido del contacto
     * @param sApellido - Segundo apellido del contacto
     * @param movil - Telefono móvil del contacto
     * @param fijo - Teléfono fijo del contacto
     * @return Verdadero si el contacto ha sido añdido. Falso si ya estaba en la agenda (no es añadido).
     */
    bool anadirContacto(string nombre, string pApellido, string sApellido, string movil, string fijo);

    /**
     * @brief eliminarContacto - Elimina un contacto a la agenda si este está presente
     * @param nombre - Nombre del contacto
     * @param pApellido - Primer apellido del contacto
     * @param sApellido - Segundo apellido del contacto
     * @return Verdadero si el contacto ha sido eliminado. Falso si no esta en la agenda.
     */
    bool eliminarContacto(string nombre, string pApellido, string sApellido);
    bool buscarContacto(string nombre, string pApellido, string sApellido, Animal & contacto);
    bool modificarContacto(string nombre, string pApellido, string sApellido, string movil, string fijo);

private:
    vector<Animal> contactos;
};

#endif // AGENDA_H
