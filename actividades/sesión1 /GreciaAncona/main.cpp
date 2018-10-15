#include <iostream>

using namespace std;

class Triangulo {
public:
    Triangulo( unsigned short int _base , unsigned short int _altura ){
      base = _base;
      altura = _altura;
    }
 private:
    unsigned short int base;
    unsigned short int altura;
};

class Rectangulo {
 private:
    unsigned short int lado1;
    unsigned short int lado2;
 public:
    Rectangulo( unsigned short int _lado1 , unsigned short int _lado2 ){
        lado1 = _lado1;
        lado2 = _lado2;
    }
};

int main()
{
   unsigned int short base , altura , area ;
   cout << " Dame un valor para la base de tu triangulo : " << endl;
   cin >> base;
   cout << " Dame el valor de la altura de tu triangulo : " << endl;
   cin >> altura;
   area = ( base * altura )/2;
   cout << " El area de tu triangulo es :  " << area << endl;

   unsigned short int lado1 , lado2 , areaR , perimetro ;
   cout << " Dame la medida de un lado del Recangulo : " << endl;
   cin >> lado1;
   cout << " Dame el otro lado del rectangulo : " << endl;
   cin >> lado2;
   areaR = lado1 * lado2 ;
   perimetro = 2*lado1 + 2*lado2;
   cout << " El area de tu rectangulo es : " << areaR << " y el perimetro : " << perimetro << " . " << endl;
    return 0;
}
