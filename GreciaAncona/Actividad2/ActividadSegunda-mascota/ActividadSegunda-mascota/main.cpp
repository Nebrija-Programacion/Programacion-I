#include <iostream>

using namespace std;
string nombre{"Nube"};
unsigned short int edad{7};
string raza{"labrador"};
string especie{"canino"};
class Mascota{
public:
    Mascota(string _nommbre, unsigned short int _edad, string _raza, string _especie){
        nombre = _nombre;
        edad = _edad;
        raza = _raza;
        especie = _especie;
        }
    string nombre;
    unsigned short edad;
    string raza;
    string especie;
};

int main()
{
    cout << " Hola " << nombre << " tienes "<< edad << " años perrunos. "<<endl;
    return 0;
    Mascota animal("Nube",7,"labrador","canino");
    cout << " Hola "<< animal.nombre << " tienes " << animal.edad << " años perrunos, eres de raza " << animal.especie << " concretamente un " << animal.raza << endl;
    return 0;

}
