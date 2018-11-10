#include <iostream>
#include <math.h>

using namespace std;
class Vector3D{
public:
    // --------constructor 1 -----------
    Vector3D(float _x, float _y, float _z){
        x = _x;
        y = _y;
        z = _z;
    }
    // ----------- constructor 2 ----------
    Vector3D(Vector3D &anotherOne){
        float u,v,w;
        anotherOne.getCoordinates(u,v,w);
        x = u; y = v; z = w;
    }
    //metodos
    void getCoordinates(float &primeracoordenada, float &segundacoordenada, float &terceracoordenada){
        primeracoordenada = x ;
        segundacoordenada = y;
        terceracoordenada = z;
    }

    void scalarMultiplyBy(int escalar){
        int i = escalar;
        x *= i;
        y *= i;
        z *= i;
    }
    float module(){
        return sqrt((x*x)+(y*y)+(z*z));
    }
    void multiplyBy(Vector3D &otroVector){
        float i, j, k, a, b, c;
        otroVector.getCoordinates(a,b,c);
        i = y*c - z*b;
        j = z*a - x*c;
        k = x*b - y*a;
        x = i; y = j; z = k;
    }
    void add(Vector3D &otroVectorDiferente){
        float l,m,n;
        otroVectorDiferente.getCoordinates(l,m,n);
        x += l;
        y += m;
        z += n;
    }
    void copyFrom(Vector3D &otroVectorMas){
        float r,s,t;
        otroVectorMas.getCoordinates(r,s,t);
        x = r; y = s; z = t;
    }


private:
    float x,y,z;
};

int main()
{
    float x,y,z;
    Vector3D miVector{1,2,3};
        miVector.getCoordinates(x,y,z);
        cout << "x: " << x << " y: " << y << " z: " << z << endl;
        cout << " si este vector lo multiplicamos por 3: " << endl;
        miVector.scalarMultiplyBy(3);
        miVector.getCoordinates(x,y,z);
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl << endl;
        cout << "El modulo de este vector es: " << miVector.module() << endl << endl;
   // ------ añadimos vectores para operar entre ellos-----
    Vector3D miVector2{2,-1,4};
    Vector3D miVector3{0,1,2};

    // ---- producto vectorial -------
        miVector.multiplyBy(miVector2);
        miVector.getCoordinates(x,y,z);
        cout <<"el resultado del producto vectorial con miVector2 es: " << endl;
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    // ------ suma de vectores --------

        miVector.add(miVector3);
        miVector.getCoordinates(x,y,z);
        cout <<"el resultado de la suma vectorial con miVector3 es: " << endl;
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    // ------- copio las coordenadas a miVector -------

        miVector.copyFrom(miVector2);
        miVector.getCoordinates(x,y,z);
        cout <<"el resultado de copiar las coordenadas de miVector2 es: " << endl;
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    // --------- construyo un vector nuevo copia de miVector -----
    Vector3D miVector4{miVector};
        miVector4.getCoordinates(x,y,z);
        cout <<"el resultado del constructor copia con miVector es: " << endl;
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;





       return 0;
   }
