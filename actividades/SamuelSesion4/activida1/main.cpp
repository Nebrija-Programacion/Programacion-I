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
    float module(){
        return sqrt(x*x+y*y+z*z);
    }
    void multiplyBy(Vector3D a){
        x = x*a.x;
        y = y*a.y;
        z = z*a.z;
    }
    void add(Vector3D a){
        x = x+a.x;
        y = y+a.y;
        z = z+a.z;
    }

private:
    float x, y, z;

};

int main(){

    float x, y, z;

    cout << "Valor para x en vector 1: " << endl;
    cin >> x;
    cout << "Valor para y en vector 1: " << endl;
    cin >> y;
    cout << "Valor para z en vector 1: " << endl;
    cin >> z;

    Vector3D Vector1{x, y, z};

    cout << "Valor para x en vector 2: " << endl;
    cin >> x;
    cout << "Valor para y en vector 2: " << endl;
    cin >> y;
    cout << "Valor para z en vector 2: " << endl;
    cin >> z;

    Vector3D Vector2{x, y, z};

    cout << "Valor para x en vector 3: " << endl;
    cin >> x;
    cout << "Valor para y en vector 3: " << endl;
    cin >> y;
    cout << "Valor para z en vector 3: " << endl;
    cin >> z;

    Vector3D Vector3{x, y, z};

    cout << "El modulo del vector 1 es: " << Vector1.module() << endl;
    cout << "El modulo del vector 2 es: " << Vector2.module() << endl;
    cout << "El modulo del vector 3 es: " << Vector3.module() << endl;

    Vector1.multiplyBy(Vector2);
    Vector1.getCoordinates(x,y,z);
    cout << "Vector 1 x vector 2 = x: " << x << " y: " << y << " z: " << z << endl;

    Vector2.add(Vector3);
    Vector2.getCoordinates(x,y,z);
    cout << "Vector 2 + vector 3 = x: " << x << " y: " << y << " z: " << z << endl;

    return 0;

}
