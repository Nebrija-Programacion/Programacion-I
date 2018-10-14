
#include <iostream>
#include <math.h>

using namespace std;


class Vector3d{
    public:

        Vector3d(float _x, float _y, float _z){
            x = _x;
            y = _y;
            z = _z;
        }

        void getCoordenadas(float & a, float & b, float & c){
            a = x;
            b = y;
            c = z;
        }

        float module(){
            return sqrt(x*x+y*y+z*z);
        }

        void multiplyBy(Vector3d a){
            x = x * a.x;
            y = y * a.y;
            z = z * a.z;
        }

        void add(Vector3d a){
            x = x + a.x;
            y = y + a.y;
            z = z + a.z;
        }

    private:

        float x, y, z;

};

int main(){

    float x, y, z;


    cout << "Introduce el valor de x para el primer vector: " << endl;
    cin >> x;
    cout << "Introduce el valor de y para el primer vector: " << endl;
    cin >> y;
    cout << "Introduce el valor de z para el primer vector: " << endl;
    cin >> z;


    Vector3d Vector1{x, y, z};


    cout << "Introduce el valor de x para el segundo vector: " << endl;
    cin >> x;
    cout << "Introduce el valor de y para el segundo vector: " << endl;
    cin >> y;
    cout << "Introduce el valor de z para el segundo vector: " << endl;
    cin >> z;


    Vector3d Vector2{x, y, z};


    cout << "Introduce el valor de x para el tercer vector: " << endl;
    cin >> x;
    cout << "Introduce el valor de y para el tercer vector: " << endl;
    cin >> y;
    cout << "Introduce el valor de z para el tercer vector: " << endl;
    cin >> z;


    Vector3d Vector3{x, y, z};


    cout << "El modulo del primer vector es: " << Vector1.module() << endl;
    cout << "El modulo del segundo vector es: " << Vector2.module() << endl;
    cout << "El modulo del ptercer vector es: " << Vector3.module() << endl;


    Vector1.multiplyBy(Vector2);
    Vector1.getCoordenadas(x, y, z);
    cout << "Primer vector x segundo vector = x: " << x << " y: " << y << " z: " << z << endl;


    Vector2.add(Vector3);
    Vector2.getCoordenadas(x, y, z);
    cout << "Segundo vector x tercer vector = x: " << x << " y: " << y << " z: " << z << endl;


    return 0;


}
