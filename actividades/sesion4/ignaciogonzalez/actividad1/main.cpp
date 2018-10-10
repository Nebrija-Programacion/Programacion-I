#include <iostream>
#include <math.h>

using namespace std;
class Vector3D{
public:
    Vector3D(float _x, float _y, float _z){
        x = _x;
        y = _y;
        z = _z;
    }

        void getCoordinates(float &a, float &b, float &c){
            a = x;
            b = y;
            c = z;

        }
        void MultiplyBy(Vector3D a){
            x = x * a.x;
            y = y * a.y;
            z = z * a.z;
        }

        float module(){
            return sqrt(x*x+y*y+z*z);
        }
        void add(Vector3D a){
            x = x + a.x;
            y = y + a.y;
            z = z + a.z;
        }


private:
    //atributos
    float x,y,z;
};
int main()
{
    float x,y,z;
        cout << "Le voy a pedir que por favor, que introduzca las coordenadas de 3 vectores. " << endl;
        cout << "Introduce la coordenada x de su primer vector: " << endl;
        cin >> x;
        cout << "Introduce la coordenada y de su primer vector: " << endl;
        cin >> y;
        cout << "Introduce la coordenada z de su primer vector: " << endl;
        cin >> z;
        Vector3D miVector{x,y,z};
        cout << "El modulo de este vector es " << miVector.module() << endl;


        cout << "Introduce la coordenada x de otro vector: " << endl;
        cin >> x;
        cout << "Introduce la coordenada y de otro vector: " << endl;
        cin >> y;
        cout << "Introduce la coordenada z de otro vector: " << endl;
        cin >> z;
        Vector3D otroVector{x,y,z};
        cout << "El modulo de este vector es " << otroVector.module() << endl;


        cout << "Introduce la coordenada x del tercer vector: " << endl;
        cin >> x;
        cout << "Introduce la coordenada y del tercer vector: " << endl;
        cin >> y;
        cout << "Introduce la coordenada z del tercer vector: " << endl;
        cin >> z;
        Vector3D otherVector{x,y,z};
        cout << "El modulo de este vector es " << otherVector.module() << endl;

        miVector.MultiplyBy(otroVector);
        miVector.getCoordinates(x,y,z);
        cout << "El resultado de multiplicar el primer vector por el segundo vector es el siguiente: " << endl;
        cout << "Coordenada x, del vector resultante: " << x << endl;
        cout << "Coordenada y, del vector resultante: " << y << endl;
        cout << "Coordenada z, del vector resultante: " << z << endl;

        otroVector.add(otherVector);
        otroVector.getCoordinates(x,y,z);
        cout << "El resultado de sumar el segundo vector con el tercer vector es el siguiente: " << endl;
        cout << "Coordenada x, del vector resultante: " << x << endl;
        cout << "Coordenada y, del vector resultante: " << y << endl;
        cout << "Coordenada z, del vector resultante: " << z << endl;


        return 0;
}
