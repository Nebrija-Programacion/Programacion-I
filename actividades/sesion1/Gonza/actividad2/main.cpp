#include <iostream>

using namespace std;

class Persona{
public:
//constructor
    Persona(string _nombre, unsigned short _edad, double _altura, unsigned short _peso){
    nombre = _nombre;
    edad = _edad;
    altura = _altura;
    peso = _peso;

}
    //atributos
    string nombre;
    unsigned short int edad;
    double altura;
    unsigned short int peso;
  };
   int main()
  {
    string nombre;
    unsigned short int edad;
    double altura;
    unsigned short int peso;
     cout << "Introduzca el nombre: ";
    cin >> nombre;
     cout << "Introduzca la edad de "<<nombre<<": ";
    cin >> edad;
     if(edad <= 0){
        cout << "ERROR. El parametro edad ha de ser mayor que 0"<<endl;
        return 1;
    }
    if(edad >= 120){
        cout << "ERROR. El parametro edad debe ser menor que 115"<<endl;
        return 1;
    }
     cout << "Introduzca la altura en cm de "<<nombre<<": ";
    cin >> altura;
     if(altura <= 0){
        cout << "ERROR. El parametro altura ha de ser mayor que 0"<<endl;
        return 1;
      }
     cout << "Introduzca el peso en kg de "<<nombre<<": ";
    cin >> peso;
     if(peso >= 300){
        cout << "ERROR. El parametro peso ha de ser menor de 200" << endl;
        return 1;
      }
     Persona Alumno("Gonza",18,1.8,74);
    cout << "Hola " << Alumno.nombre <<
        ", tienes " << Alumno.edad <<
        " anyos, tu altura es de "<< Alumno.altura << "cm. "
        << " y pesas " << Alumno.peso << "kg" <<endl;
    return 0;
  }
