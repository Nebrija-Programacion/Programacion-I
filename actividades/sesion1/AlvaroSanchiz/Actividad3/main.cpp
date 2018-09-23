#include <iostream>

using namespace std;

 class Persona{

    public:

      //Construyendo...

     Persona(string _nombre, unsigned short int _peso, unsigned short int _edad, unsigned short _altura)
     {
         nombre = _nombre;
         peso = _peso;
         edad = _edad;
         altura = _altura;

     }

      //VAriables


       string nombre;
       unsigned short peso;
       unsigned short edad;
       unsigned short altura;

 };

int main()
{

      //Variables
       string nombre;
       unsigned short peso;
       unsigned short edad;
       unsigned short altura;


       cout << " Por favor, introduzca su nombre ";
       cin >> nombre;

       cout << " Por favor, introduzca su peso en Kg ";
       cin >> peso;
       if(peso>=200){
           cout << " Su peso debe ser menor de 200 " << endl;

       }
       cout << " Por favor, introduzca su edad ";
       cin >> edad;
       if (edad>=115){
           cout << " Su edad deber ser inferior a 115 " << endl;

       }

       cout << " Por favor, introduzca su altura en cm ";
       cin >> altura;
       if (altura<=0){
           cout << " Su altura no puede ser 0 " << endl;
       }


       Persona persona(nombre, peso, edad, altura);

       cout << " Hola " << persona.nombre << " pesas " << persona.peso << "kg, y tienes una edad de  " << persona.edad <<
               " años y mides cm " << persona.altura << endl;




    return 0;
}
