#include <iostream>

using namespace std;

class Triangulo{
public:
    Triangulo(int _base, int _altura){
        setBase(_base);
        setAltura(_altura);
    }

    int getBase(){
        return base;
    }

    int getAltura(){
        return altura;
    }

    void setBase(int _base){
        if(_base < 0){
            cout << "Error! La base no puede ser menor que 0." << _base << endl;
            base = 0;
        }
    }

    void setAltura(int _altura){
        if(_altura < 0){
            cout << "Error! La altura no puede ser menor que 0." << _altura << endl;
            altura = 0;
        }
    }

    int areaTriangulo(int base, int altura){
        int area;
        area = (base * altura) / 2;
        return area;
    }

private:
    int base;
    int altura;
};

class Rectangulo{
public:
    Rectangulo(int _lado1, int _lado2){
        setLado1(_lado1);
        setLado2(_lado2);
    }

    int getLado1(){
        return lado1;
    }

    int getLado2(){
        return lado2;
    }

    void setLado1(int _lado1){
        if(_lado1 < 0){
            cout << "Error! El lado no puede ser menor que 0." << _lado1 << endl;
            lado1 = 0;
        }
    }

    void setLado2(int _lado2){
        if(_lado2 < 0){
            cout << "Error! El lado no puede ser menor que 0." << _lado2 << endl;
            lado2 = 0;
        }
    }

    int areaRectangulo(int lado1, int lado2){
        int area;
        area = lado1 * lado2;
        return area;
    }

    int perimetroRectangulo(int lado1, int lado2){
        int per;
        per = (lado1 + lado2) * 2;
        return per;
    }

private:
    int lado1;
    int lado2;
};

int main()
{
    int base, altura;
    int lado1, lado2;

    cout << "Introduzca la base que desea para su triangulo: ";
    cin >> base;
    cout << "Introduzca la altura que desea para su triangulo: ";
    cin >> altura;

    Triangulo guay(base, altura);
    cout << "El area de su triangulo deseado es = " << guay.areaTriangulo(base, altura) << endl;

    cout << "\n*****************************************************" << endl;

    cout << "\nIntroduzca el primer lado de su rectangulo: ";
    cin >> lado1;
    cout << "Introduzca el segundo lado de su rectangulo: ";
    cin >> lado2;

    Rectangulo super(lado1, lado2);
    cout << "El area de su rectangulo es = " << super.areaRectangulo(lado1, lado2)
         << " y su perimetro es = " << super.perimetroRectangulo(lado1, lado2) << endl;

    return 0;
}
