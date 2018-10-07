#include <iostream>

using namespace std;

class Triangulo{
public:
    Triangulo(unsigned short int _base,unsigned short int _altura){
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
        base = _base;
    }
    void setAltura(unsigned short int _altura){
        altura = _altura;
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
        lado1 = _lado1;
    }
    void setLado2(unsigned short int _lado2){
        lado2 = _lado2;
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

    int areat{1};

    for (int contador{base};contador>1;contador--){
        areat = base * altura / 2;
    }
    cout << "El area del triangulo es " << areat << endl;

    int lado1;
    cout << "Introduzca el primer lado del rectangulo: ";
    cin >> lado1;
    int lado2;
    cout << "Introduzca el segundo lado del rectangulo: ";
    cin >> lado2;

    int arear{1};

    for (int contador{lado1};contador>1;contador--){
        arear = lado1 * lado2;
    }
    int perimetro{1};

    for (int contador{lado1};contador>1;contador--){
        perimetro = 2 * lado1 + 2 * lado2;
    }
    cout << "El area del rectangulo es " << arear << " y su perimetro es " << perimetro << endl;

    return 0;
}
