#include <iostream>
using namespace std;

class Persona{
public:
    Persona(unsigned short _edad, float _altura, unsigned short _peso, string _nombre){
        edad = _edad;
        altura = _altura;
        peso = _peso;
        nombre = _nombre;
    }
    string getNombre(){
        return nombre;
    }
    unsigned short getEdad(){
        return edad;
    }
    float getAltura (){
        return altura;
    }
    unsigned short getPeso (){
        return peso;
    }
    void sayHellow(){
        cout <<"Hola me llamo " << nombre <<  " y peso "<<peso<< "Kg" << endl;

}

private:
    unsigned short edad; //años
    float altura; //metros
    unsigned short peso; //kg
    string nombre;
};


class Mascota{
public:
    Mascota(string _nombre, string _especie, unsigned short _edad){
        especie = _especie;
        edad = _edad;
        nombre = _nombre;
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
    void sayMascota(){
        cout << "Hola, mi mascota favorita es un "<< especie << " y se llama "<<nombre<< " tiene ya "<<edad<<" años"<< endl;
    }
private:
    string nombre;
    string especie;
    unsigned short edad;
};

int main(){
    Persona marcosAlonso (24,1.78,88,"Marcos");
    Mascota teka ("Teka", "Pastor Aleman",7);
    marcosAlonso.sayHellow();
    teka.sayMascota();
}
