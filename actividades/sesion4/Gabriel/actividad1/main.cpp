#include <iostream>
#include <math.h>

using namespace std;

class Vector3D{
public:
    Vector3D (float _x, float _y, float _z){
        x = _x;
        y = _y;
        z = _z;
        }
    float getVectores(float &a, float &b, float &c){
        a = x;
        b = y;
        c = z;
    }
    float module(float a, float b, float c){
        return sqrt(pow(x,2) + pow(y,2) + pow(z,2)); // Un poco raro pero funciona
    }
    void multiply(Vector3D vectorQueMultiplica){
           x = x*vectorQueMultiplica.x;
           y = y*vectorQueMultiplica.y;
           z = z*vectorQueMultiplica.z;
    }
    void add(Vector3D vectorQueSuma){
        x = x+vectorQueSuma.x;
        y = y+vectorQueSuma.y;
        z = z+vectorQueSuma.z;
    }
private:
        float x, y, z; // Las coordenadas del vector
};
int main()
{
    float x,y,z;
        cout << "Let's start with the first vector." << endl;
        cout << "Introduce the value of x: ";
        cin >> x;
        cout << "Introduce the value of y: ";
        cin >> y;
        cout << "Introduce the value of z: ";
        cin >> z;

        Vector3D myVector1(x, y, z);

        cout << "The module of the first vector: " << myVector1.module(x, y, z) << endl;

        cout << "Now, let's move on to the second vector, if you may." << endl;
        cout << "Introduce the value of x: ";
        cin >> x;
        cout << "Introduce the value of y: ";
        cin >> y;
        cout << "Introduce the value of z: ";
        cin >> z;

        Vector3D myVector2(x, y, z);

        cout << "The module of the second vector: " << myVector2.module(x, y, z) << endl;

        cout << "We are getting to the end, there is just one more left, be patient." << endl;
        cout << "Introduce the value of x: ";
        cin >> x;
        cout << "Introduce the value of y: ";
        cin >> y;
        cout << "Introduce the value of z: ";
        cin >> z;

        Vector3D myVector3(x, y, z);

        cout << "The module of the third vector: " << myVector3.module(x, y, z) << endl;

        cout << "It is time to do some operations. Take a seat." << endl;
        cout << "The result of multiplying the first vector by the second one is:" << endl;

        myVector1.multiply(myVector2); // myVector3 pasa a ser vectorQueMultiplica
        myVector1.getVectores(x, y, z);// coge los datos de myVector1 (que es al que se le multiplica)
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;

        cout << "The result of adding the second vector to the third is:" << endl;

        myVector2.add(myVector3); // myVector3 pasa a ser vectorQueSuma
        myVector2.getVectores(x, y, z); // coge los datos de myVector2 (que es al que se le suma)

        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;


    return 0;
}
