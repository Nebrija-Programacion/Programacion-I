#include <iostream>

using namespace std;

class Triangulo{
public:
    Triangulo(int _base,int _altura){

    setBase (_base);
    setAltura (_altura);
    }

    int getBase(){
        return base;
    }

    int getAltura(){
        return altura;
    }
    void setBase(int _base){
        if (_base < 0){
            cout << "La base no puede ser menor que 0, imbecil. " << _base << endl;
            base = 0;
        }
    }
    void setAltura(int _altura){
        if (_altura < 0){
            cout << "A ver. empanado, si la altura es menor que 0, no hay triangulo." <<
                    _altura << endl;
            altura = 0;
        }
    }
    int areatriangulo (int b, int a){
        int area;
        area = (b * a) / 2;
        return area;
    }


private:
    //atributos
    int base;
    int altura;
};

class Rectangulo{
public:
    Rectangulo(int _lado1, int _lado2){
        setLado1 (_lado1);
        setLado2 (_lado2);
    }


        int getLado1(){
            return lado1;
        }

        int getLado2(){
            return lado2;
        }

        void setLado1(int _lado1){
            if(_lado1 < 0){
                cout << "Atontao, no existen los rectangulos con lados negativos." <<  _lado1 <<endl;
                lado1 = 0;

            }

                }

        void setLado2(int _lado2){
            if(_lado2 < 0){
                cout << "Atontao, no existen los rectangulos con lados negativos." << _lado2 << endl;
                lado2 = 0;
            }

        }

        int arearectangulo (int c, int d){
            int area;
            area = c * d;
            return area;
        }

        int perimetro (int e, int f){
            int perimetro;
            perimetro = (e + f) * 2;
            return perimetro;
        }



private:
   int lado1;
   int lado2;
};

int main()
{
    int base;
    int altura;
    cout << "Crack, introduce la base de tu triangulo: " << endl;
    cin >> base;

    cout << " y ahora la altura: " << endl;
    cin >> altura;

    Triangulo x(base,altura);
    cout << "El area de tu triangulo es: " << x.areatriangulo(base,altura) << endl;


    int lado1;
    int lado2;
    cout << "Venga bichejo, introduce el lado de tu rectangulo: " << endl;
    cin >> lado1;

    cout << "Ahora, el otro lado, maquina: " << endl;
    cin >> lado2;

    Rectangulo y(lado1,lado2);
    cout << "Como yo soy mas maquina que tu, te voy a decir dos cosas." << endl;
    cout << "La primera, el area de tu rectangulo: " << y.arearectangulo(lado1,lado2) << endl;

    cout << "Por si eso fuera poco, ahora te digo su perimetro: " << y.perimetro(lado1,lado2) << endl;

    return  0;
}

