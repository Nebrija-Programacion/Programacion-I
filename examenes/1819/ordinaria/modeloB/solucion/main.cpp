#include <iostream>

using namespace std;
#include "registro.h"



int main()
{
    Registro registro;

    string tipo, genero;
    int chip, edad;
    Animal aux;
    int auxnumber;
    short opcion = 1;
    vector<Animal> resultado;

    while(opcion >= 0){
        switch(opcion){
        // Salir
        case 0:
            return 0;
            // Menu inicial
        case 1:
            cout << "( 2 ) Anadir animal." << endl;
            cout << "( 3 ) Buscar animales." << endl;
            cout << "( 0 ) Salir." << endl;
            cin >> opcion;
            break;

            // Añadir
        case 2:
            auxnumber = 0;
            while(auxnumber != 1 && auxnumber != 2){
                cout << "Introduce tipo: (1) perro, (2), gato ";
                cin >> auxnumber;
            }
            if(auxnumber == 1) tipo = "perro";
            if(auxnumber == 2) tipo = "gato";

            auxnumber = 0;
            while(auxnumber != 1 && auxnumber != 2){
                cout << "Introduce genero: (1) macho, (2), hembra ";
                cin >> auxnumber;
            }
            if(auxnumber == 1) genero = "macho";
            if(auxnumber == 2) genero = "hembra";

            cout << "Introduce edad: "; cin >> edad;
            cout << "Introduce chip: "; cin >> chip;

            try {
                Animal animal(tipo,chip,edad,genero);
                if(registro.anadirAnimal(animal)){
                    cout << "Animal añadido correctamente" << endl;
                }else{
                    cout << "El chip ya existe en el registro" << endl;
                }
            } catch (string e) {
                cout << e << endl;
                cout << "El animal no se ha añadido" << endl;
            }
            opcion = 1;
            break;

            // Buscar
        case 3:
            cout << "Introduce tipo: ";
            auxnumber = 0;
            while(auxnumber != 1 && auxnumber != 2){
                cout << "Introduce tipo: (1) perro, (2), gato ";
                cin >> auxnumber;
            }
            if(auxnumber == 1) tipo = "perro";
            if(auxnumber == 2) tipo = "gato";

            cout << "Introduce la edad: "; cin >> edad;

            resultado = registro.buscarAnimales(tipo, edad);
            if(resultado.size() > 0){
                cout << "Animales encontrados: " << endl;
                for(auto & animal: resultado){
                    animal.print();
                }
                cout << "Que deseaa hacer: " << endl;
                cout << "( 4 ) Dar en adopcion." << endl;
                cout << "( 1 ) Volver al menu inicial." << endl;
                cout << "( 0 ) Salir." << endl;
                cin >> opcion;
            }else{
                cout << "No se han encontrado coincidencias. " << endl;
                opcion = 1;
            }
            break;
            // Dar en adopcion
        case 4:
            cout << "Introduce el chip del animal que deseas adoptar: " ; cin >> chip;
            if(registro.darEnAdopcion(chip)){
                cout << "El animal ha sido dado en adopción." << endl;
            }else{
                cout << "No hemos encontrado el animal especificado." << endl;
            }
            opcion = 1;
            break;

        default:
            opcion = 0;
        }
    }
    return 0;
}
