#include <iostream>

using namespace std;
class Vector3d{
public:
  Vector3d(float _x, float _y, float _z){
               x = _x;
               y = _y;
               z = _z;
               }

private:
   float x;
   float y;
   float z;

public:
   void getCoordinates(float &a, float &b, float &c){
          a = x;
          b = y;
          c = z;
      }
      float module(){
          return sqrt(x*x+y*y+z*z);
      }



      void multiplicaPor(Vector3d a){
          x = x*a .x;
          y = y*a .y;
          z = z*a .z;
      }


      void sumar(Vector3d a){
          x = x+a .x;
          y = y+a .y;
          z = z+a .z;
      }



};
int main()
{
    float x,y,z;

   Vector3d miVector1(x,y,z);
   cout << "Introduce el valor de x del vector1: ";
        cin >> x;
   cout << "Introduce el valor de y del vector1: ";
        cin >> y;
   cout << "Introduce el valor de z del vector 1: ";
        cin >> z;


   Vector3d miVector2(x,y,z);
   cout << "El modulo es " << miVector1.module () << endl;

   cout << "Introduce el valor de x del vector2: ";
        cin >> x;
   cout << "Introduce el valor de y del vector2: ";
        cin >> y;
   cout << "Introduce el valor de z del vector2: ";
        cin >> z;
   cout << "El modulo es: " << miVector2.module ()<< endl ;


   Vector3d miVector3(x,y,z);
   cout << "Introduce el valor de x del vector3:  ";
         cin >> x;
   cout << "Introduce el valor de y del vector3:  ";
         cin >> y;
   cout << "Introduce el valor de z del vector3:  ";
         cin >> z;
   cout << "El modulo es: " << miVector3.module () << endl ;

            miVector1.multiplicaPor(miVector2);
            miVector1.getCoordinates(x,y,z);

            cout << "Vector1 x Vector2 " << x << "," << y << "," << z << endl;

            miVector2.sumar(miVector3);
            miVector2.getCoordinates(x,y,z);

            cout << "Vector 2 + Vector3"  << x << "," << y << "," << z << endl;
                        return 0;
    return 0;
}
