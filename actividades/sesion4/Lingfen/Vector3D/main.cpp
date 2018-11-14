#include <iostream>
#include <math.h>

using namespace std;

class Vector3D
{
public:
    Vector3D(float _x, float _y, float _z)
    {
        x = _x;
        y = _y;
        z = _z;

    }
    void getCoordinates(float &a, float &b, float &c)
    {
        a = x;
        b = y;
        c = z;
    }
    float module()
    {
        return sqrt(x*x+y*y+z*z);  //sqrt (square root) para obtener la raiz cuadrada//

    }
    void multiply(Vector3D a)
    {
        x = x*a.x;
        y = y*a.y;
        z = z*a.z;
    }
    void add (Vector3D a)
    {
        x = x + a.x;
        y = y + a.y;
        z = z + a.z;
    }

private:
    float x, y, z;
};

int main()
{
    float x, y, z;
    cout << "Dime un valor que se te ocurra para x en el vector uno:" << endl;
    cin >> x;
    cout << "Otro valor para y, en el vector uno:" << endl;
    cin >> y;
    cout << "Otro valor para z, en el vector uno:" << endl;
    cin >> z;
    Vector3D vectoruno{x,y,z};
    cout << "El modulo del vector uno es:" << vectoruno.module() << endl;


    cout << "Vamos a hacer de nuevo lo mismo que hemos hecho anteriormente pero ahora con el vector dos." << endl;
    cout << "Dime un valor para x en el vector dos:" << endl;
    cin >> x;
    cout << "Otro valor para y en el vector dos:" << endl;
    cin >> y;
    cout << "Otro valor para z en el valor dos:" << endl;
    cin >> z;
    Vector3D vectordos{x,y,z};
    cout << "El modulo del vector dos es:" << vectordos.module() << endl;


    cout << "Y finalmente vamos a hacer lo mismo de nuevo pero con el vector 3." << endl;
    cout << "Dime un valor para x en el vector tres:" << endl;
    cin >> x;
    cout << "Otro valor para y en e vector tres:" << endl;
    cin >> y;
    cout << "Un ultimo valor para z en el vector tres:" << endl;
    cin >> z;
    Vector3D vectortres{x,y,z};
    cout << "El modulo del vector tres es:" << vectortres.module() << endl;


    vectoruno.multiply(vectordos);
    vectoruno.getCoordinates(x,y,z);
    cout << "Multiplicar vector uno por el vector dos da como resultado: x:"<<x<< " y:" <<y<< " z:" <<z<< endl;

    vectordos.add(vectortres);
    vectordos.getCoordinates(x,y,z);
    cout << "Sumar el vector dos y el vector tres da como resultado: x:" <<x<< " y:" <<y<< " z:" <<z<< endl;

    return 0;

}
