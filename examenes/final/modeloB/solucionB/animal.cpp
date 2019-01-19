#include "animal.h"

Animal::Animal(string _tipo, int _chip, int _edad, string _genero){
    if(!(_tipo == "perro" || _tipo == "gato")){
        throw string{"Tipo de animal incorrecto"};
    }

    if( ! (_chip >= 0 && _chip <= 9999 )){
        throw string{"Chip incorrecto"};
    }
    if (_edad < 0){
        throw string{"Edad incorrecta"};
    }

    if(!(_genero == "macho" || _genero == "hembra")){
        throw string{"Género incorrecto"};
    }

    tipo = _tipo;
    chip = _chip;
    edad = _edad;
    genero = _genero;

}

string Animal::getTipo() const{
    return tipo;
}

int Animal::getChip() const{
    return chip;
}

int Animal::getEdad() const{
    return edad;
}


string Animal::getGenero() const{
    return genero;
}

bool Animal::mismoChip(int _chip) const
{
    return ( _chip == chip );
}

bool Animal::mismoTipoEdad(string _tipo, int _edad) const{
    return( (tipo == _tipo) && (edad == _edad));
}


void Animal::print() const {
    cout << "-----------------------------------------" << endl;
    cout << tipo << endl;
    cout << "Genero: " << genero << "." << endl;
    cout << "Edad: " << edad << "." << endl;
    cout << "Chip: " << chip << "." << endl;
    cout << "-----------------------------------------" << endl;
}
