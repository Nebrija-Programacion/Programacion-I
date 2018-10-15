#include <iostream>
#include <<math.h>
using namespace std;

class Vector3D{
   private:
    float x;
    float y;
    float z;
    float k;
   public:
    Vector3D(float _x, float _y, float _z , float _k){
        x = _x ;
        y = _y ;
        z = _z ;
        k = _k;
    }
    void getCoordinates ( float &a , float &b , float &c){
        a = x ;
        b = y ;
        c = z ;
    }
    float module( ){
        return  sqrt ( x^2 + y^2 + z^2);
    }
    void scalarMultiplyBy(float num ){
       x = num * x; // es lo mismo que x*= num
       y = num * y;
       z = num * z;
    }
    void add (Vector3D a ){ // a es otro vector con sus componentes
        x = x + a.x;
        y = y + a.y;
        z = z + a.z;
    }
    void multiply(Vector3D a){
        x = x*a.x;
        y = y*a.y;
        z = z*a.z;
};
    float getX(){return x;}
    float getY(){return y;}
    float getz(){return z;}

    void getCoords( float %a , float &b,  float &c){
        a = x ;
        b = y ;
        c = z ;

    }
int main()
{
   float x, y , z, multi ;
   cout << "  dame x: " << endl;
   cin >> x;
   cout << " dame y: " << endl;
   cin >> y;
   cout << " dame z: " << endl;

   Vector3D miVector{x,y,z};
   cout << " el modulo  es: " << miVector.module() << endl;
   cout << " dame un numero pa multiplicar el vector:  "<< endl;
   cin >> multi;
   miVector.scalarMultiplyBy(multi);
   cout << " el modulo es : " << miVector.module()<< endl;
   float k;
   cout << " dame otro numero: " << endl;
   cin >> k;
   Vector3D otrovector{x,y,z};
   miVector.add(otrovector);
   cout << " X: " << miVector.getX() << endl;
   cout << " Y: " << miVector.getY() << endl;
   cout << " Z: " << miVector.getz() << endl;

   miVector.getCoordinates(x, y, z);
   cout << x << y<< z<< endl;

    return 0;

}
