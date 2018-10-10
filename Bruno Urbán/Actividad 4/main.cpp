#include <iostream>
#include <math.h>
using namespace std;

class Vector3D{
public:
    Vector3D(float _x, float _y, float _z){
        x= _x;
        y= _y;
        z= _z;

    }
    void getCoordinates(float &a, float &b, float &c){
        a= x;
        b= y;
        c= z;
    }
    void scalarMultiplyBy (float m){
       x = x*m;
       y = y*m;
       z = z*m;

    }
    void add(Vector3D a){
        x = x +a.x;
        y = y + a.y;
        z = z + a.z;
    }
    void multiply (Vector3D a){
        x = x*a.x;
        y = y*a.y;
        z = z*a.z;
    }

    float module (){
        return sqrt(x*x+y*y+z*z);

    }
    float getX(){return x;}
    float gety(){return y;}
    float getz(){return z;}




private:
    float x, y, z; // Las coordenadas del vector
};

int main(){

    float x,y,z;
    cout << "Cuanto vale x, y, z?" << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    Vector3D miVector{x,y,z};
    cout << "Modulo: " << miVector.module() << endl;
    float num;
    cout << "dime un numero ";
    cin >> num;
    miVector.scalarMultiplyBy(num);
    miVector.getCoordinates(x,y,z);
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    cout << "Dime otro vector x, y, z " << endl;
    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    Vector3D otroVector{a,b,c};
    miVector.add(otroVector);


    return 0;
}
