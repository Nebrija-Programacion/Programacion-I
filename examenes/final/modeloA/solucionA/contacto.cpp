#include "contacto.h"

Animal::Animal(string _nombre, string _pApellido, string _sApellido, string _fijo, string _movil){
    nombre = _nombre;
    pApellido = _pApellido;
    sApellido = _sApellido;
    fijo = _fijo;
    movil = _movil;
}

string Animal::getNombre() const{
    return nombre;
}

string Animal::getPApellido() const{
    return pApellido;
}

string Animal::getSApellido() const{
    return sApellido;
}

string Animal::getFijo() const{
    return fijo;
}

string Animal::getMovil() const{
    return movil;
}

void Animal::setFijo(string f)
{
    fijo = f;
}

void Animal::setMovil(string m)
{
    movil = m;
}

bool Animal::esEste(string _nombre, string _pApellido, string _sApellido) const
{
    return ( (_nombre == nombre) && (_pApellido == pApellido) && (_sApellido == sApellido) );
}

void Animal::print() const {
    cout << nombre << " " << pApellido << " " << sApellido << "." << endl;
    cout << "Telefono fijo: " << fijo << "." << endl;
    cout << "Telefono movil: " << movil << "." << endl;
    cout << "-----------------------------------------" << endl;
}
