#include <iostream>

using namespace std;

class Cuadrado{
public:
    Cuadrado(int _lado){
        if (_lado <= 0){
            throw string{"ERROR: El lado debe ser mayor que 0"};
        }else{
            lado = _lado;
        }
    }

    int getArea(){
        return lado*lado;
    }

    void dibujaCuadrado(){
        for (int i{0}; i < lado ; i++){
            for (int j{0}; j < lado; j++){
                cout << "**";
            }
            cout << endl;
        }
    }

private:
    int lado;
};

int main()
{
    try{
        int lado;
        cout << "Introduce el lado de un cuadrado: " ;
        cin >> lado;
        Cuadrado miCuadrado(lado);
        cout << "El área del cuadrado es " << miCuadrado.getArea() << endl;
        cout << endl;
        cout << "Este es tu cuadrado:" << endl << endl;
        miCuadrado.dibujaCuadrado();
        cout << endl;
    }catch(string e){
        cout << e << endl;
        return 1;
    }

    return 0;
}
