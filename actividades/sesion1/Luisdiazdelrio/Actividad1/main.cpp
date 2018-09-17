#include <iostream>

using namespace std;

class Persona{
 public:
    //constructor por defecto
    Persona(unsigned short _edad, float _altura, unsigned short _peso, string _nombre){
        edad = _edad;
        altura = _altura;
        peso = _peso;
        nombre = _nombre;



    }

    string getnombre(){
        return nombre;


    }

    unsigned short getedad(){
        return edad;

    }

    float getaltura(){
        return altura;
    }

    unsigned short getpeso(){
        return peso;

    }
    void sayHello(){
        cout << "Hola me llamo " << nombre << endl;

    }
private:
    //atributos publicos

    unsigned short edad;//en años
    float altura; //en metros
    unsigned short peso;//en kg
    string nombre; //en castellano
};


int main()
{
    Persona elAlumno {18,1.75,73, "Luis"};
    elAlumno.sayHello();


    cout << "Hola " << elAlumno.getnombre() << " tu edad es " << elAlumno.getedad() << " pesas " << elAlumno.getpeso() << "kg Y tienes una altura de " << elAlumno.getaltura() << "cm" << endl;

            return 0;


}
