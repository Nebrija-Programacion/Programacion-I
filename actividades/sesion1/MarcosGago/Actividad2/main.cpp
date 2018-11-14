#include <iostream>
using namespace std;
class Mascota{
public:
    Mascota(string _nombre, string _especie, unsigned short _edad){
    nombre=_nombre;
    especie=_especie;
    edad=_edad;
    }
        string getNombre(){
            return nombre;
        }
        string getEspecie(){
            return especie;
        }
        unsigned short getEdad(){
            return edad;
        }
        Mascota (){}
private:
        string nombre;
        string especie;
        unsigned short edad;
};
class Persona{
  public:
    //constructor por defecto
    Persona(unsigned short _edad, float _altura, unsigned short _peso, string _nombre, Mascota _mascFavorita){
        edad=_edad;
        altura=_altura;
        peso=_peso;
        nombre=_nombre;
        mascFavorita=_mascFavorita;
    }
    Mascota getMascota(){
        return mascFavorita;
    }
    string getNombre(){
        return nombre;
    }
    float getAltura(){
        return altura;
    }
    unsigned short getEdad(){
        return edad;
    }
    unsigned short getPeso(){
        return peso;
    }
    void sayHello(){
        cout<<"Buenas, me llamo "<<nombre<<", mi edad es "<<edad<<" y mi mascota favorita es "<<mascFavorita.getNombre()<<endl;
    }
private:
        //Privados
    unsigned short edad;//en años
    float altura; //en metros
    unsigned short peso;//en kg
    string nombre;
    Mascota mascFavorita;
};

int main(){
    Mascota peter("Peter", "Perro", 10);
    Persona Marcos(18,1.9,95,"Marcos", peter);
    Marcos.sayHello();
}
