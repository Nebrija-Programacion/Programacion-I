#include <iostream>

using namespace std;

class Triangulo{
private:
    int base;
    int altura;
public:
    Triangulo(int _base, int _altura){
        base = _base;
        altura = _altura;
    }
    int getArea(){
        return ((base*altura)/2);
    }
};

class Rectangulo{
private:
    int lado1;
    int lado2;
public:
    Rectangulo(int _lado1, int _lado2){
        lado1 = _lado1;
        lado2 = _lado2;
    }
    int getArea(){
        return lado1 * lado2;
    }
    int getPerimetro(){
        return ((lado1*2) + (lado2*2));
    }
};

int main()
{
    int base;
    int altura;
    int lado1;
    int lado2;

    cout << "Introduce la base: " << endl;
    cin >> base;

    cout << "Introduce la altura: " << endl;
    cin >> altura;

    Triangulo miTriangulo{base,altura};

    cout << "El area del triangulo es: " << miTriangulo.getArea() << endl;

    miTriangulo.getArea();

    cout << "Introduce la base del rectangulo: " << endl;
    cin >> lado1;

    cout << "Introduce la altura del rectangulo: " << endl;
    cin >> lado2;

    Rectangulo miRectangulo{lado1,lado2};

    cout << "El area del rectangulo es: " << miRectangulo.getArea() << endl;

    cout << "El perimetro del rectangulo es: " << miRectangulo.getPerimetro() << endl;

    miRectangulo.getArea();

    miRectangulo.getPerimetro();

}
