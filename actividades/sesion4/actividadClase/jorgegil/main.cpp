#include <iostream>
#include <math.h>

using namespace std;

class vector3d{
public:
    vector3d(float _x, float _y, float _z){
        x = _x;
        y = _y;
        z = _z;
    }

    float getVectores(float &a, float &b, float &c){
        a = x;
        b = y;
        c = z;
    }

    float modulo(float a, float b, float c){
        int resul;
        a = pow(x,2);
        b = pow(y,2);
        c = pow(z,2);
        resul = a+b+c;
        return sqrt(resul);
    }

    void scalarMultiplyBy(float num){
        x = num*x;
        y = num*y;
        z = num*z;
    }

    void add(vector3d a){
       x = x + a.x;
       y = y + a.y;
       z = z + a.z;
    }
    void multiply(vector3d a){
       x = x*a.x;
       y = y*a.y;
       z = z*a.z;
    }

private:
    float x, y, z;
};

int main()
{
    float x,y,z;
    cout << "Coordenadas del vector 1:" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;
    vector3d vector1(x,y,z);
    vector1.getVectores(x,y,z);
    cout << "VECTOR 1\nx: " << x << ", y: " << y << ", z: " << z << endl;
    cout << "Modulo del Vector 1: " << vector1.modulo(x,y,z) << endl;

    cout << "\nCoordenadas del vector 2:" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;
    vector3d vector2(x,y,z);
    vector2.getVectores(x,y,z);
    cout << "VECTOR 2\nx: " << x << ", y: " << y << ", z: " << z << endl;
    cout << "Modulo del Vector 2: " << vector2.modulo(x,y,z) << endl;

    cout << "\nCoordenadas del vector 3:" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;
    vector3d vector3(x,y,z);
    vector3.getVectores(x,y,z);
    cout << "VECTOR 3\nx: " << x << ", y: " << y << ", z: " << z << endl;
    cout << "Modulo del Vector 3: " << vector3.modulo(x,y,z) << endl;

    vector1.multiply(vector2);// Multiplicamos el vector1 con el vector2
    vector1.getVectores(x,y,z);// Sacamos los parametros del vector resultante de la suma
    cout << "\nVector1 * Vector2 = (" << x << ", " << y << ", " << z << ")" << endl;

    vector3.add(vector2);// Sumamos el vector3 mas el vector2
    vector3.getVectores(x,y,z);// Sacamos los parametros del vector3 resultante de la multiplicacion
    cout << "\nVector3 + Vector2 = (" << x << ", " << y << ", " << z << ")" << endl;

    return 0;
}
