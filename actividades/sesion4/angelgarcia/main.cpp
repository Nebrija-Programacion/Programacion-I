#include <iostream>
#include <math.h>

using namespace std;

class Vector3D{


    public:
        //constructor
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

     void scalarMultBy(float num){
         x*= num;
         y*= num;
         z*= num;
}

     void add(Vector3D a){
         x = x + a.x;
         y = y + a.y;
         z = z + a.z;

      }

     float module(){
         return sqrt(x*x + y*y + z*z);

    }


     void multiply (Vector3D a){
       x = x*a.x;
       y = y*a.y;
       z = z*a.z;



     }



     float getx(){return x;}
       float gety(){return y;}
       float getz(){return z;}




private:
     //atributos
float x,y,z;




};



int main(){
    float x,y,z;
    cout << "***** Modulo *****" << endl;

    cout << "Introduce el valor de X: ";
    cin >> x;
        cout << "Introduce el valor de Y: ";
    cin >> y;
    cout << "Introduce el valor de Z: ";
     cin >> z;

        Vector3D miVector{x,y,z};
        cout << "El modulo es " << miVector.module() << endl;

            float num;
cout << "*****Producto por escalar*****" << endl;

          cout << "Introduce un numero por el que multiplicar el modulo: ";

  cin >> num;
miVector.scalarMultBy(num);


  cout << "El modulo es " << miVector.module() << endl;

  cout << "*****Coordenadas*****" << endl;

  cout << "Cuanto vale X? ";
  cin >> x;
      cout << "Cuanto vale Y? ";
  cin >> y;
  cout << "Cuanto vale z? ";
   cin >> z;


  Vector3D otroVector{x,y,z};
miVector.add(otroVector);



        cout << "x: " << miVector.getx() << endl;
        cout << "y: " << miVector.gety() << endl;
        cout << "z: " << miVector.getz() << endl;

return 0;

}
