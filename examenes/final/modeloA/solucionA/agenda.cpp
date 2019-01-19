#include "agenda.h"

using namespace std;
Agenda::Agenda()
{
}

bool Agenda::anadirContacto(string nombre, string pApellido, string sApellido, string movil, string fijo)
{
    // Si el contacto no está ya en la agenda lo añadimos
    Contacto contacto;
    if(!buscarContacto(nombre,pApellido,sApellido, contacto)){
        Contacto contacto{nombre, pApellido, sApellido, movil, fijo};
        contactos.push_back(contacto);
        return true;
    }

    // ya esta en la agenda, por lo tanto devuelvo falso
    return false;
}

bool Agenda::eliminarContacto(string nombre, string pApellido, string sApellido)
{
    for(unsigned long int i{0}; i < contactos.size(); i++){
        // contacto encontrado
        if(contactos.at(i).esEste(nombre, pApellido, sApellido)){
            contactos.erase(contactos.begin() + i );
            return true;
        }
    }

    return false;
}

bool Agenda::buscarContacto(string nombre, string pApellido, string sApellido, Contacto &contacto)
{
    for(auto const & aux: contactos){
        // si el contacto coincide lo devolvemos a traves del parametro contacto y devolvemos verdadero
        if(aux.esEste(nombre, pApellido, sApellido)){
            contacto = aux;
            return true;
        }
    }

    // no se ha encontrado el contacto
    return false;
}

bool Agenda::modificarContacto(string nombre, string pApellido, string sApellido, string movil, string fijo)
{
    for(auto & aux: contactos){
        // si el contacto coincide lo modificamos y devolvemos verdadero
        if(aux.esEste(nombre, pApellido, sApellido)){
            aux.setFijo(fijo);
            aux.setMovil(movil);
            return true;
        }
    }

    // No se ha encontrado el contacto y por lo tanto no se ha podido modificar
    return false;
}



