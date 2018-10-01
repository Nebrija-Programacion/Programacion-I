#include <iostream>
using namespace std;

class Triangulo{
public:
    Triangulo(float _base, float _altura)
    {
        base = _base;
        altura = _altura;
    }

    float getBase(){
        return base;
    }

    float getAltura(){
        return altura;
    }

    void setBase(float _base){
        if(_base < 0){
            cout << "Error. La base debe sr mayor que 0. Establecere tu area a 0 " <<endl;
            base = 0;
        }else{
            base = _base;
        }
    }

    void setAltura(float _altura){
        if(_altura < 0){
            cout << "Error. La altura debe ser mayor que 0. Establecere tu area a 0" << endl;
            altura = 0;
        }else{
            altura = _altura;
        }
    }

private:
    float base;
    float altura;
};


class Rectangulo{
public:
    Rectangulo(int _lado1, int _lado2)
    {
        lado1 = _lado1;
        lado2 = _lado2;
    }

    int getLado1(){
        return lado1;
    }

    int getLado2(){
        return lado2;
    }

    void setLado1(int _lado1){
        if (_lado1 < 0){
        cout << "Error el lado1 debe ser mayor que 0. Establecere el area a 0 " << endl;
        lado1 = 0;
    }else{
    lado1 = _lado1;
    }
}


void setLado2(int _lado2){
    if (_lado2 < 0){
    cout << "Error. El lado2 debe ser mayor que 0. Establecere el area a 0 " << endl;
    lado2 = 0;
     }else{
    lado2 = _lado2;
}
}


    private:

    int lado1;
    int lado2;
};

int main(){

    float base;
    float altura;

    int lado1;
    int lado2;

    cout << "Introduce la altura del triangulo " ;
            cin >> altura;


    cout << "Introduce la base del triangulo " ;
                        cin >> base;


    cout << "El area de tu triangulo es: " << (base * altura) / 2 << endl;





    cout << "Introduce el lado1 del rectangulo ";
    cin >> lado1;


    cout << "Introduce el lado2 del rectangulo ";
    cin >> lado2;


    cout << "El area de tu rectangulo es " << lado1*lado2 << endl;
return 0;
}




