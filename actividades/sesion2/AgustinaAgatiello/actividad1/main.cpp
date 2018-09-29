#include <iostream>

using namespace std;

class Triangulo{
public:
    Triangulo(unsigned short int _base, unsigned short int _altura){
        setBase(_base);
        setAltura(_altura);
    }
    unsigned short int getBase(){
        return base;
    }
    unsigned short int getAltura(){
        return altura;
    }
    void setBase(unsigned short int _base){
            if(_base < 0){
                cout << "ERROR! La base no puede ser menor que 0." << _base << endl;
                base = 0;
            }else{
            base = _base;
            }
        }
    void setAltura(unsigned short int _altura){
            if(_altura < 0){
                cout << "ERROR! La altura no puede ser menor que 0." << _altura << endl;
                altura = 0;
            }else{
            altura = _altura;
            }
        }
    int areaTriangulo(int base, int altura){
        int area;
        area = (base*altura)/2;
        return area;
    }

private:
    unsigned short int base;
    unsigned short int altura;
};

class Rectangulo{

public:
    Rectangulo(unsigned short int _lado1, unsigned short int _lado2){
        setLado1(_lado1);
        setLado2(_lado2);
    }
    unsigned short int getLado1(){
        return lado1;
    }
    unsigned short int getLado2(){
        return lado2;
    }
    void setLado1(unsigned short int _lado1){
        if(_lado1 < 0){
            cout << "ERROR! El lado no puede ser menor que 0." << _lado1 << endl;
            lado1 = 0;
        }else{
        lado1 = _lado1;
       }
    }
     void setLado2(unsigned short int _lado2){
        if(_lado2 < 0){
            cout << "ERROR! El lado no puede ser menor que 0." << _lado2 << endl;
            lado2 = 0;
        }else{
        lado2 = _lado2;
        }
    }
     int areaRectangulo(int lado1, int lado2){
         int area;
         area = lado1*lado2;
         return area;
     }
     int perimetroRectangulo(int lado1, int lado2){
         int area;
         area = (lado1 + lado2)*2;
         return area;
     }

private:
    unsigned short int lado1;
    unsigned short int lado2;
};

int main()
{
    int base;
    cout << "Introduzca la base del triangulo: ";
    cin >> base;
    int altura;
    cout << "Introduzca la altura del triangulo: ";
    cin >> altura;
    Triangulo miTriangulo(base, altura);
    cout << "El area es " << miTriangulo.areaTriangulo(base,altura) << endl;

    int lado1;
    cout << "Introduzca un lado del rectangulo: ";
    cin >> lado1;
    int lado2;
    cout << "Introduzca el otro lado del rectangulo: ";
    cin >> lado2;
    Rectangulo miRectangulo(lado1,lado2);
    cout << "El area es " << miRectangulo.areaRectangulo(lado1,lado2) << " y su perimetro " << miRectangulo.perimetroRectangulo(lado1,lado2) << endl;

    return 0;
}
