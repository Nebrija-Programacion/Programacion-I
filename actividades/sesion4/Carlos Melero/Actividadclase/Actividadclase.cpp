#include <iostream>

using namespace std;

class Vector3D{
public:
    Vector3D(float _x, float _y, float _z){
        x = _x;
        y = _y;
        z = _z;
    }

    void getCoordinates(float & a, float & b, float & c){
        a = x;
        b = y;
        c = z;
    }

    void multiplyBy(Vector3D m){
               x = x*m.x;
               y = y*m.y;
               z = z*m.z;
    }
    void add(Vector3D s){
        x = x+s.x;
        y = y+s.y;
        z = z+s.z;
    }

    float module(){
        return (x*x+y*y+z*z);
    }



private:
    //coordenadas del vector
    float x;
    float y;
    float z;

};

int main()
{
    float x;
    float y;
    float z;



    cout << "Cuanto vale x del primer vector ";
    cin >> x;
    cout << "Cuanto vale y del primer vector ";
    cin >> y;
    cout << "Cuanto vale z del primer vector ";
    cin >> z;
    Vector3D miVector{x,y,z};
    cout << "El modulo del primer vector es " << miVector.module() << endl;

    cout << "Cuanto vale x del segundo vector ";
    cin >> x;
    cout << "Cuanto vale y del segundo vector ";
    cin >> y;
    cout << "Cuanto vale z del segundo vector ";
    cin >> z;
    Vector3D miVector2{x,y,z};
    cout << "El modulo del segundo vector es " << miVector2.module() << endl;

    cout << "Cuanto vale x del tercer vector ";
    cin >> x;
    cout << "Cuanto vale y del tercer vector ";
    cin >> y;
    cout << "Cuanto vale z del tercer vector ";
    cin >> z;
    Vector3D miVector3{x,y,z};
    cout << "El modulo del tercer vector es " << miVector3.module() << endl;

    cout << "La multiplicacion de los 2 primeros vectores es ";
    miVector.multiplyBy(miVector2);
    miVector.getCoordinates(x, y, z);
    cout << "x: " << x << " y: " << y << " z: " << z << endl;

    cout << "La suma del segundo vector y el tercero es ";
    miVector2.add(miVector3);
    miVector2.getCoordinates(x, y, z);
    cout << "x: " << x << " y: " << y << " z: " << z << endl;



    return 0;
}
