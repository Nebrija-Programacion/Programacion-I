#include <iostream>
using namespace std;
class Persona{
  public:
    //constructor por defecto
    Persona(unsigned short _edad, float _altura, unsigned short _peso, string _nombre){
        edad=_edad;
        altura=_altura;
        peso=_peso;
        nombre=_nombre;
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
        cout<<"Buenas, me llamo "<<nombre<<" y mi edad es "<<edad<<endl;
    }
private:
        //Privados
    unsigned short edad;//en años
    float altura; //en metros
    unsigned short peso;//en kg
    string nombre;

};

int main(){
Persona Marcos(18,1.8,80,"Alberto");
Marcos.sayHello();
}
