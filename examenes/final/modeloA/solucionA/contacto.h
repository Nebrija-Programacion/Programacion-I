#ifndef CONTACTO_H
#define CONTACTO_H

#include <iostream>

using namespace std;

class Contacto{
public:
    // constructor por defecto no parametrizado
    Contacto(){}

    // constructor parametrizado;
    Contacto(string _nombre, string _pApellido, string _sApellido, string _fijo, string _movil);

    // funciones getter
    string getNombre() const;
    string getPApellido() const;
    string getSApellido() const;
    string getFijo() const;
    string getMovil() const;

    // funciones setter
    void setFijo(string f);
    void setMovil(string m);

    /**
     * @brief esEste comprueba si el contacto tienen el mismo nombre y apellidos que le pasamos por parametro.
     * @param _nombre nombre
     * @param _pApellido primer apellido
     * @param _sApellido segundo apellido
     * @return verdadero si coinciden nombre y apellidos, falso en caso contrario
     */
    bool esEste(string _nombre, string _pApellido, string _sApellido) const;
    void print() const;

private:
    string nombre, pApellido, sApellido, fijo, movil;
};
#endif // CONTACTO_H
