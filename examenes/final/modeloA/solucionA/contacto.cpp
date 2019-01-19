#include "contacto.h"

Contacto::Contacto(string _nombre, string _pApellido, string _sApellido, string _fijo, string _movil){
    nombre = _nombre;
    pApellido = _pApellido;
    sApellido = _sApellido;
    fijo = _fijo;
    movil = _movil;
}

string Contacto::getNombre() const{
    return nombre;
}

string Contacto::getPApellido() const{
    return pApellido;
}

string Contacto::getSApellido() const{
    return sApellido;
}

string Contacto::getFijo() const{
    return fijo;
}

string Contacto::getMovil() const{
    return movil;
}

void Contacto::setFijo(string f)
{
    fijo = f;
}

void Contacto::setMovil(string m)
{
    movil = m;
}

bool Contacto::esEste(string _nombre, string _pApellido, string _sApellido) const
{
    return ( (_nombre == nombre) && (_pApellido == pApellido) && (_sApellido == sApellido) );
}

void Contacto::print() const {
    cout << nombre << " " << pApellido << " " << sApellido << "." << endl;
    cout << "Telefono fijo: " << fijo << "." << endl;
    cout << "Telefono movil: " << movil << "." << endl;
    cout << "-----------------------------------------" << endl;
}
