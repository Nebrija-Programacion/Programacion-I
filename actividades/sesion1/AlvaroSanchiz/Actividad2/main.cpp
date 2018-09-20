#include <iostream>

using namespace std;


         class Mascota{

      public:


              //Construyendo....

         Mascota(string _nombre, string _especie, unsigned short int _edad)
    {
        nombre = _nombre;
        especie = _especie;
        edad = _edad;
    }

             //Variables

        string nombre;
        string especie;
        unsigned short edad;
        Mascota (){}

  };



         class Persona{

      public:


             //Construyendo......
         Persona(string _nombre, unsigned short int _peso, Mascota _mascota)
    {
        nombre = _nombre;
        peso = _peso;
        mascota = _mascota;
    }

            //Variables

        string nombre;
        unsigned short peso;
        Mascota mascota;
  };






int main()
{
    Mascota gato( "Whiskey ", " Bengala ", 12);
    Persona chico (" Alvaro ", 76, gato);
    cout << " Hola soy " << chico.nombre << " y mi mascota favorita es un gato de " << chico.mascota.especie <<
            " y se llama " << chico.mascota.nombre << endl;
    return 0;
}
