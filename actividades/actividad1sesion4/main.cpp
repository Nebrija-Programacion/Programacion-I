#include <iostream>

#include <math.h>

using namespace std;

class Vector3D{
private:
    int x;
    int y;
    int z;

public:

    Vector3D(int _x, int _y, int _z){

        x = _x;
        y = _y;
        z = _z;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

    int getZ(){
        return z;
    }

    float module(){
        return sqrt(pow(x,2) + pow(y,2) + pow(z,2));//es lo mismo que poner sqrt(x*x, y*y, z*z)
    }

    void add(Vector3D a){
        x = x + a.x;
        y = y + a.y;
        z = z + a.z;
    }

    void multiplyBy(Vector3D a){
        x = x * a.x;
        y = y * a.y;
        z = z * a.z;
    }
};

int main()
{
    int xp, yp, zp, x, y, z, xx, yy, zz;

    cout << "Introduce la coordenada x del primer vector: " << endl;
    cin >> x;

    cout << "Introduce la coordenada y del primer vector: " << endl;
    cin >> y;

    cout << "Introduce la coordenada z del primer vector: " << endl;
    cin >> z;

    cout << "Introduce la coordenada x del segundo vector: " << endl;
    cin >> xp;

    cout << "Introduce la coordenada y del segundo vector: " << endl;
    cin >> yp;

    cout << "Introduce la coordenada z del segundo vector: " << endl;
    cin >> zp;

    cout << "Introduce la coordenada x del tercer vector: " << endl;
    cin >> xx;

    cout << "Introduce la coordenada y del tercer vector: " << endl;
    cin >> yy;

    cout << "Introduce la coordenada z del tercer vector: " << endl;
    cin >> zz;

    Vector3D miVector{x,y,z};

    cout << "El modulo del primer vector es: " << miVector.module() << endl;

    Vector3D miVectorcito{xp,yp,zp};

    cout << "El modulo del segundo vector es: " << miVectorcito.module() << endl;

    Vector3D masVectores{xx,yy,zz};

    cout << "El modulo del tercer vector es: " << masVectores.module() << endl;

    miVector.multiplyBy(miVectorcito);

    cout << "El resultado de la multiplicacion entre el primer y segundo vector es: " << "x: " << miVector.getX() << " y: " << miVector.getY() << " z: " << miVector.getZ() << endl;

    miVectorcito.add(masVectores);

    cout << "El resultado de la suma entre el segundo y tercer vector es: " << "x: " << miVectorcito.getX() << " y: " << miVectorcito.getY() << " z: " << miVectorcito.getZ() << endl;

    return 0;
    //Si hay algo mal me gustaria decir que hago unos tiramisus DPM.
}
