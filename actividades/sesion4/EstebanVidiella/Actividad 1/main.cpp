#include <iostream>
#include <math.h>
using namespace std;


class Vector3D{

public:
    Vector3D(float a,float b,float c){
        x=a;
        y=b;
        z=c;
    }
    void getCoordinates(float &a, float &b, float &c){
        a=x;
        b=y;
        c=z;
    }
    float module(){
        return sqrt(x*x+y*y+z*z) ;
    }


    void multiplyBy(Vector3D a){
        x = x*a.x;
        y = y*a.y;
        z = z*a.z;

    }
    void add(Vector3D a){
        x=x+a.x;
        y=y+a.y;
        z=z+a.z;
    }
private:

    float  x, y, z;

};


int main(){
    float x,y,z;

    cout << "Introduzca el valor de x del vector 1: " << endl;
    cin >> x;
    cout << "Introduzca el valor de y del vector 1: " << endl;
    cin >> y;
    cout << "Introduzca el valor de z del vector 1: " << endl;
    cin >> z;
    Vector3D miVector1{x,y,z};

    cout << "Introduzca el valor de x del vector 2: " << endl;
    cin >> x;
    cout << "Introduzca el valor de y del vector 2: " << endl;
    cin >> y;
    cout << "Introduzca el valor de z del vector 2: " << endl;
    cin >> z;
    Vector3D miVector2{x,y,z};

    cout << "Introduzca el valor de x del vector 3: " << endl;
    cin >> x;
    cout << "Introduzca el valor de y del vector 3: " << endl;
    cin >> y;
    cout << "Introduzca el valor de z del vector 3: " << endl;
    cin >> z;
    Vector3D miVector3{x,y,z};

    cout << "El modulo del vector 1 es: " << miVector1.module() << endl;
    cout << "El modulo del vector 2 es: " << miVector2.module() << endl;
    cout << "El modulo del vector 3 es: " << miVector3.module() << endl;

    miVector1.multiplyBy(miVector2);
    miVector1.getCoordinates(x,y,z);
    cout << "La multiplicacion del vector 1 por el vector 2 es: " << " x: " <<x <<" y: "<< y << " z: " << z << endl;
    miVector2.add(miVector3);
    miVector2.getCoordinates(x,y,z);
    cout << "La suma del vector 2 y del vector 3 es: " << " x: " <<x <<" y: "<< y << " z: " << z << endl;


    return 0;
}
