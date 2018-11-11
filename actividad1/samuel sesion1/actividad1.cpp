#include <iostream>
using namespace std;
class Mascota{
public:
    Mascota(string _nombre, unsigned short _edad, string _animal){
       nombre = _nombre;
       edad = _edad;
       animal = _animal;
    }
    string nombre;
    unsigned short edad;
    string animal;
    Mascota (){}
};
class Adolescente{
public:
    Adolescente(string _nombre, unsigned short int _edad, unsigned short _altura, Mascota _mascota){
    nombre = _nombre;
    edad = _edad;
    altura = _altura;
    mascota = _mascota;
    }
    string nombre;
    unsigned short int edad;
    unsigned short int altura;
    Mascota mascota;
    void hola(){
        cout<<"nombre de la persona: "<<nombre<<endl;
        cout<<"edad de la persona: "<<edad<<endl;
        cout<<"altura de la persona: "<<altura<<endl<<endl;;
        cout<<"nombre de la persona: "<<mascota.nombre<<endl;
        cout<<"edad de la persona: "<<mascota.edad<<endl;
        cout<<"animal de la persona: "<<mascota.animal<<endl<<endl;
    }
};
int main(){
    Mascota Bastian ("Bastian", 7, "Perro");
    Adolescente Samuel ("Samuel",24,178,Bastian);
    Samuel.hola();

}
