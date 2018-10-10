#include <iostream>
#include <math.h>

using namespace std;
class Vector3D{
        public:
    Vector3D(float a,float b,float c){
        x = a;
        y = b;
        z = c;
    }
    void getCoordinates(float &a, float &b, float&c){
        a = x;
        b = y;
        c = z;
    }
    float module(){
        return sqrt(x*x+y*y+z*z); //(pow(x,2)+pow(y,2)+pow(z,2);
    }
    void vectorMultiply(Vector3D a){
        x = x*a.x;
        y = y*a.y;
        z = z*a.z;
    }
    void add(Vector3D a){
           x = x + a.x;
           y = y + a.y;
           z = z + a.z;
    }
private:
    float x,y,z;
};

int main()
{
    float x,y,z;
    cout << "Hola usuario. Introduce vamos a introducir tres vectores." << endl;
    cout << "Empecemos con el primer vector." << endl;
    cout << "Introduce x del primer vector: " << endl;
    cin >> x;
    cout << "Introduce y del primer vector: " << endl;
    cin >> y;
    cout << "Introduce z del primer vector: " << endl;
    cin >> z;
    Vector3D miVector1{x,y,z};
    cout << "El modulo del primer vector es: " << miVector1.module() << endl;
    cout << "Seguimos con el segundo vector: " << endl;
    cout << "Introduce x del primer vector: " << endl;
    cin >> x;
    cout << "Introduce y del segundo vector: " << endl;
    cin >> y;
    cout << "Introduce z del segundo vector: " << endl;
    cin >> z;
    Vector3D miVector2{x,y,z};
    cout << "El modulo del segundo vector es: " << miVector2.module() <<endl;
    cout << "Vamos con el tercer vector." << endl;
    cout << "Introduce x del tercer vector: " << endl;
    cin >> x;
    cout << "Introduce y del tercer vector: " << endl;
    cin >> y;
    cout << "Introduce z del tercer vector: " << endl;
    cin >> z;
    Vector3D miVector3{x,y,z};
    cout << "El modulo del tercer vector es: " << miVector3.module() <<endl;
    miVector1.vectorMultiply(miVector2);
    miVector1.getCoordinates(x,y,z);
    cout << "El resultado de multiplicar el primer vector por el segundo es el vector: (" << x << "," << y << "," << z << ")" << endl;
    miVector2.add(miVector3);
    miVector2.getCoordinates(x,y,z);
    cout << "Por ultimo, el resultado de sumar el segundo vector y el tercer vector es: (" << x << "," << y << "," << z << ")" << endl;

    return 0;
}
