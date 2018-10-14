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

   void add(Vector3D a){
       x = x + a.x;
       y = y + a.y;
       z = z + a.z;
   }



   float module(){
       return sqrt(x*x+y*y+z*z);
   }

   void MultiplyBy(Vector3D a){
       x = x*a.x;
       y = y*a.y;
       z = z*a.z;
   }



private:
float x,y,z; ///Cordenadas del vector


};


int main()
{
    float x,y,z;

cout << "Hola ser superior, cuanto vale x? ";
cin >> x;

cout << "Hola ser superior, cuanto vale y? ";
cin >> y;

cout << "hola ser superior, cuanto vale z? ";
cin >> z;

Vector3D miVectorcito{x,y,z};

cout << "El modulo de este verctor es: " << miVectorcito.module() << endl;



cout << "Ser superior, intruzca otro valor de x ";
cin >> x;

cout << "Ser superior, intruzca otro valor de y ";
cin >> y;

cout << "Ser superior, intruzca otro valor de z ";
cin >> z;

Vector3D otroVectorcito{x,y,z};

cout << "El modulo de este vector es: " << otroVectorcito.module() << endl;


cout << "Ser superior, necesito por ultima vez otro valor para x" << endl;
cin >> x;

cout << "Ser superior, necesito por ultima vez otro valor para y" << endl;
cin >> y;

cout << "Ser superior, necesito por ultima vez otro valor para z" << endl;
cin >> z;

Vector3D nuevoVectorcito{x,y,z};

cout << "El modulo de este vector es " << nuevoVectorcito.module() << endl;

miVectorcito.MultiplyBy(otroVectorcito);
miVectorcito.getCoordinates(x,y,z);
cout << "Señor, el resultado de multiplicar el primer vector por el segundo es: " << endl;

cout << "La coordenada x = " << x << endl;
cout << "La coordenada y = " << y << endl;
cout << "La coordenada z = " << z << endl;

otroVectorcito.add(nuevoVectorcito);
otroVectorcito.getCoordinates(x,y,z);
cout << "Señor, el resultado de sumar el segundo vector con el tercer vector es: " << endl;

cout << "La coordenada x = " << x << endl;
cout << "La coordenada y = " << y << endl;
cout << "La coordenada z = " << z << endl;


return 0;

}
