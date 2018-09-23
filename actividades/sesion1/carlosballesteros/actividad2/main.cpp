#include <iostream>

using namespace std;

class Mascota{

public:

    Mascota(string _nombre, string _nombredelamascota, string _especie)

    {
        nombre = _nombre;
        nombredelamascota  = _nombredelamascota;
        especie = _especie;


    }


    string nombre;
    string nombredelamascota;
    string especie;


};
int main()
{
  string nombre;
 string nombredelamascota;
  string  especie;


  cout << "Por favor, introduce tu nombre: ";
  cin >> nombre;

  cout << "Por favor, introduce el nombre de tu mascota " << nombre << ": ";
  cin >> nombredelamascota;

  cout << "Por favor, introduce la especie de tu mascota " << nombre << ": ";
  cin >> especie;



  Mascota m(nombre, nombredelamascota, especie);
   cout << "Hola " << m.nombre <<
       ", tu mascota favorita es un " << m.especie <<
       " y se llama "<< m.nombredelamascota << endl;
   return 0;
}

