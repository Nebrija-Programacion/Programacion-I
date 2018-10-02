#include <iostream>

 using namespace std;

 class Triangulo {
public:

    Triangulo(unsigned short int _base, unsigned short int _altura){
        base = _base;
        altura = _altura;
    }

    unsigned short int area(){
        return(base * altura / 2);
    }
 private:

    unsigned short int base;
    unsigned short int altura;
 };
class Rectangulo {
public:

    Rectangulo(unsigned short int _lado1, unsigned short int _lado2){
        lado1 = _lado1;
        lado2 = _lado2;
        area = lado1 * lado2;
        perimetro = 2*(lado1 + lado2);
    }

    unsigned short int getArea(){
        return(area);
    }
     unsigned short int getPerimetro(){
            return(perimetro);
    }
 private:

    unsigned short int lado1;
    unsigned short int lado2;
    unsigned short int area;
    unsigned short int perimetro;
 };
 int main()
{
    unsigned short int basetriangulo, lado1rectangulo;
    unsigned short int alturatriangulo, lado2rectangulo;
     cout << "Introduce la base del triángulo: ";
    cin >> basetriangulo;
     cout << "Introduce la altura: ";
    cin >> alturatriangulo;
     Triangulo miTriangulo(basetriangulo, alturatriangulo);
     cout << "El área del triangulo es: " << miTriangulo.area() << endl;
     cout << "Introduce el primer lado del rectángulo: ";
    cin >> lado1rectangulo;
     cout << "Introduce el segundo lado del rectángulo: ";
    cin >> lado2rectangulo;
     Rectangulo miRectangulo(lado1rectangulo, lado2rectangulo);
     cout << "El área del rectangulo es: " << miRectangulo.getArea() << endl;
    cout << "El perimetro del rectangulo es: " << miRectangulo.getPerimetro() << endl;
    return 0;
 }
