#include <iostream>

using namespace std;
  //constructor
class Persona{
public:
    Persona(string _nombre, unsigned short _edad, unsigned short _peso){
        nombre = _nombre;
        edad = _edad;
        peso = _peso;

    }
    string nombre;
    unsigned short edad;
    unsigned short peso;

};

    int main()
{
    string nombre;
    unsigned short int peso;
    unsigned short int edad;

    cout <<"Introduzca su nombre porfavor";
    cin >>nombre ;

    cout <<"Introduzca su edad porfavor";
    cin >>edad

    if (edad <=0){
        cout <<"La edad debe ser mayor a 0"<< endl;

    }

    if (edad <=115){
        cout << "La edad debe ser inferior a 115" << endl;

    }

    cout <<"Introduzca su peso por favor";
    cin >> peso;

    if (peso >=200){
        cout <<"El peso debe ser inferior a 200" << endl;

    }

  private:
    //Medicion de los atributos

    _peso = en kg;
    _nombre = en castellano;
    _edad = en años;




};
