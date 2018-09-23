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
    unsigned short edad;
    unsigned short peso;
    float altura;
    string nombre;
    cout << "Introduce el nombre: ";
      cin >> nombre;

      cout << "Introduce la edad de " << nombre << ": ";
      cin >> edad;
      if (edad>115){
          cout<<"Esa edad no es valida"<<endl;
          cin>>edad;
      }

      cout << "Introduce la altura en cm de " << nombre << ": ";
      cin >> altura;

      cout << "Introduce el peso en kg de " << nombre << ": ";
      cin>>peso;
      if (peso>200){
          cout<<"Ese peso no es valido"<<endl;
          cin>>peso;
      }
      cin >> peso;
Persona persona(edad,altura,peso,nombre);
persona.sayHello();
}
