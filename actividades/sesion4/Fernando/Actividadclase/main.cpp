#include <iostream>
#include <math.h>

using namespace std;

class Vector3D
{
public:
    Vector3D(float _x, float _y, float _z) {
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
     return sqrt((x*x)+(y*y)+(z*z));
}
    void scalarMultiplyBy(float _num){
        x*= _num;
        y*= _num;
        y*= _num;
    }
    void add(Vector3D Suma){
        x = x+Suma.x;
        y = y+Suma.y;
        z = z+Suma.z;
    }
    void multiply(Vector3D Multiplica){
           x = x*Multiplica.x;
           y = y*Multiplica.y;
           z = z*Multiplica.z;
    }
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    float getZ(){
        return z;
    }
private:
    float x;
    float y;
    float z;
};
int main(){
    float x,y,z,num;
    cout << "Bienvenido usuario, empecemos introduciendo el Primer vector " << endl;
    cout << "¿cuanto vale x? ";
    cin >> x;
    cout << "¿cuanto vale y? ";
    cin >> y;
    cout << "¿cuanto vale z? ";
    cin >> z;
    Vector3D miVector(x,y,z);
    cout << "El modulo es: " << miVector.module() << endl;
    cout << "Por que numero desea multiplicar el vector? ";
    cin >> num;
    miVector.scalarMultiplyBy(num);
    cout << "El modulo es: " << miVector.module() << endl;
    cout << "Bien hecho, ahora introduzcamos el Segundo vector " << endl;
    cout << "¿cuanto vale x? ";
    cin >> x;
    cout << "¿cuanto vale y? ";
    cin >> y;
    cout << "¿cuanto vale z? ";
    cin >> z;
    Vector3D otroVector(x,y,z);
cout << "El modulo de tu segundo vector es: " << otroVector.module() << endl;
cout << "Ya casi estamos, ahora introduce el Tercer vector " << endl;
cout << "Introduce el valor de x: ";
cin >> x;
cout << "Introduce el valor de y: ";
cin >> y;
cout << "Introduce el valor de z: ";
cin >> z;
Vector3D otroVector2(x,y,z);
cout << "El modulo de tu tercer vector es: " << otroVector2.module() << endl;
cout << "Ahora te mostrare el resultado de multiplicar el primer vector por el segundo: " << endl;
miVector.multiply(otroVector);
miVector.getCoordinates(x,y,z);
cout << "x: " << x << endl;
cout << "y: " << y << endl;
cout << "z: " << z << endl;
cout << "Ahora te mostrare el resultado de sumar el segundo vector + el tercer vector" << endl;
otroVector.add(otroVector2);
otroVector.getCoordinates(x, y, z);
 cout << "x: " << x << endl;
cout << "y: " << y << endl;
cout << "z: " << z << endl;
return 0;

}
