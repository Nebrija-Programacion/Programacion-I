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

    cout << "Mete x del primer vector: " << endl; cin >> x;
    cout << "Mete y del primer vector: " << endl; cin >> y;
    cout << "Mete z del primer vector: " << endl; cin >> z;

    Vector3D Vector1{x, y, z};

    cout << "Mete x del segundo vector: " << endl;
    cin >> x;
    cout << "Mete y del segundo vector: " << endl;
    cin >> y;
    cout << "Mete z del segundo vector: " << endl;
    cin >> z;

    Vector3D Vector2{x, y, z};

    cout << "Mete x del tercer vector: " << endl; cin >> x;
    cout << "Mete y del tercer vector: " << endl; cin >> y;
    cout << "Mete z del tercer vector: " << endl; cin >> z;

    Vector3D Vector3{x, y, z};

    cout << "El modulo del primer vector: " << Vector1.module() << endl;
    cout << "El modulo del segundo vector: " << Vector2.module() << endl;
    cout << "El modulo del tercer vector: " << Vector3.module() << endl;

    Vector1.multiplyBy(Vector2);
    Vector1.getCoordinates(x,y,z);

    cout << "1vector  x 2vector = x: " << x << " y: " << y << " z: " << z << endl;

    Vector2.add(Vector3);
    Vector2.getCoordinates(x,y,z);

    cout << "2Vector  + 3vector = x: " << x << " y: " << y << " z: " << z << endl;

    return 0;
}
