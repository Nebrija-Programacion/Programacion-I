#include <iostream>

using namespace std;

class Triangulo{
    public:
     //contruyo dos variables y las asigno
    Triangulo(unsigned short int _base, unsigned short int _altura){
        base = _base;
        altura = _altura;
    }
    //Estoy haciendo el area
    unsigned short int area(){
        return (base*altura/2);
    }

private:
    unsigned short int base;
    unsigned short int altura;
};

class Rectangulo{
   public:
        //contruyo dos variables y las asigno
        Rectangulo(unsigned short int _lado1, unsigned short int _lado2){
            lado1 = _lado1;
            lado2 = _lado2;
            area = lado1 * lado2;
            perimetro = 2*(lado1 + lado2);

        }

        //Estoy asigando getArea al area del rectangulo
        unsigned short int getArea(){
            return (area);
        }
        //Estoy asigando getPerimetro al perimetro del rectangulo
        unsigned short int getPerimetro(){
            return (perimetro);
        }

    private:
        //pongo valores privados a los lados, el area y el perimetro
        unsigned short int lado1;
        unsigned short int lado2;
        unsigned short int area;
        unsigned short int perimetro;

};
int main()
{
    // asigno dos salidas para los valores del rectangulo y del triangulo
    unsigned short int basetriangulo, lado1rectangulo;
    unsigned short int alturatriangulo, lado2rectangulo;

    cout <<" Introcuce el valor de la base del triangulo: " ;
    cin >> basetriangulo;

    cout <<" Introduce el valor de la altura del triangulo: " ;
    cin >> alturatriangulo;

    // dentro del triangulo asigno las variables que voy a utilizar
    Triangulo miTriangulo(basetriangulo, alturatriangulo);
    cout << " El area del traingulo es: " << miTriangulo.area() << endl;

    cout << "Introduce un lado del rectangulo: "  ;
    cin >> lado1rectangulo;

    cout << "Introduce otro lado del rectangulo: "  ;
    cin >> lado2rectangulo;

    // dentro del rectangulo asigno las variables que voy a utilizar
    Rectangulo miRectangulo(lado1rectangulo, lado2rectangulo);
    cout << "El area del rectangulo es: " << miRectangulo.getArea() << endl;
    cout << "El perimetro del rectangulo es: " << miRectangulo.getPerimetro() << endl;

    return 0;

}
