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


int main(){

    int base;
    cout <<"Introduzca el valor de la base" << endl;
    cin >>base;
    int altura;
    cout <<"Introduzca el valor de la altura" << endl;
    cin >>altura;

    int areatriangulo{1};

    for (int contador{base};contador>1;contador--){
            areatriangulo = base * altura / 2;
    }

    cout << "El area del triangulo es " <<areatriangulo << endl;

    int lado1;
    cout <<"Introduzca el valor del lado1";
           cin >> lado1;
    int lado2;
    cout <<"Introduzca el valor del lado2";
           cin >> lado2;

    int arearectangulo{1};

        for (int contador{lado1};contador>1;contador--){
            arearectangulo = lado1 * lado2;
        }
        int perimetro{1};

        for (int contador{lado1};contador>1;contador--){
            perimetro = lado1 + lado1 + lado2 + lado2;
        }
        cout << "El area del rectangulo es " << arearectangulo << " y el perimetro es " << perimetro << endl;

        return 0;
    }


