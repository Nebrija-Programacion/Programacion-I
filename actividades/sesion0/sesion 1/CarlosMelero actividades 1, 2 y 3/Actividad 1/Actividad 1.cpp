#include <iostream>

using namespace std;

class Persona{
  public:
    //Constructor por defecto
    Persona(unsigned short _edad, float _altura, unsigned short _peso, string _nombre){
        edad = _edad;
        altura = _altura;
        peso = _peso;
        nombre: _nombre;
       }

    //devuelve el nombre

    string getnombre(){
        return nombre;

    }

    float getaltura(){
        return altura;
    }

    unsigned short getedad(){
        return edad;
    }

    unsigned short getpeso(){
        return peso;
    }

    void sayhello(){
        cout << "Hola me llamo Carlos"
    }

private:
    unsigned short edad; //en años
    float altura; //en metros
    unsigned short peso; //en kg
    string nombre; //en castellano
  };


int main()
{
   Persona alumno;
   alumno.edad = 18;
   alumno.altura = 1.7;
   alumno.peso = 60;
   alumno.nombre = "Carlos";
   alumno.sayhello();

   cout << "Hello" <<
           alumno.nombre<<
           "tu edad es"<<
           alumno.edad << endl;
   return 0


}
