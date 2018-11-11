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
    void scalarMultiplyBy (float num ){
        x = x * num;
        y = y * num;
        z = z * num;
    }

    float module () {
        return sqrt (x*x+ y*y + z*z);
    }
    void add (Vector3D a ){
        x = x + a.x;
        y = y + a.y;
        z = z + a.z;
    }
    void vectorMultiplyBy (Vector3D a ){
        x = x * a.x;
        y = y * a.y;
        z = z * a.z;
    }
private:

float x,y,z;
};

    int main(){
        float x,y,z;
            cout<< "hola señor usuario cuanto vale la x del vector numero 1? ";
            cin >> x;
            cout<< "hola señor usuario cuanto vale la y del vector numero 1? ";
            cin >> y;
            cout<< "hola señor usuario cuanto vale la z del vector numero 1? ";
            cin >> z;

            Vector3D miVector1(x,y,z);
            cout<< "El modulo es " << miVector1.module () << endl;

                cout<< "hola señor usuario cuanto vale la x del vector numero 2? ";
                cin >> x;
                cout<< "hola señor usuario cuanto vale la y del vector numero 2? ";
                cin >> y;
                cout<< "hola señor usuario cuanto vale la z del vector numero 2? ";
                cin >> z;

                Vector3D miVector2(x,y,z);
                cout<< "El modulo es " << miVector2.module ()<< endl ;

                    cout<< "hola señor usuario cuanto vale la x del vector numero 3? ";
                    cin >> x;
                    cout<< "hola señor usuario cuanto vale la y del vector numero 3? ";
                    cin >> y;
                    cout<< "hola señor usuario cuanto vale la z del vector numero 3? ";
                    cin >> z;

                    Vector3D miVector3(x,y,z);
                    cout<< "El modulo es " << miVector3.module () << endl ;
                    miVector1.vectorMultiplyBy(miVector2);
                    miVector1.getCoordinates(x,y,z);

                    cout << "Al multiplicar vectorialmente el primer vector por el segundo da como resultado el vector: (" << x << "," << y << "," << z << ")" << endl;

                    miVector2.add(miVector3);
                    miVector2.getCoordinates(x,y,z);

                    cout << "Al sumar el segundo vector y el tercer vector da como resultado el vector: (" << x << "," << y << "," << z << ")" << endl;
                    return 0;
    }

