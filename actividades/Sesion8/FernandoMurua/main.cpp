#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
class Vector
{
public:
    Vector(unsigned int n) {
        size = n;
        for(unsigned int i{0};i < n ; i++){
            v.push_back(0);
        }
    }
    void setElement(int i, float valor){

     v.at(i) = valor;
    }
    float module(){
         float suma = 0;
         for(auto element:v){
       suma = suma + (element*element);
        }
         return sqrt(suma);
    }
    Vector unitVector(){
        Vector result(size);
        float m = module();
        for(unsigned int i{0};i<v.size();i++){
            result.setElement(i,v.at(i)/m);
        }
        return result;
    }
    int getSize(){
        return size;
    }
    float getElement(int i){
        return v.at(i);
    }
    void print()
    { cout << "(" ;
           for(auto elemento:v){
               cout  <<  elemento  << "," ;

           }
           cout <<")"<< endl;
}
private:
    vector<float> v;
    int size;
};
Vector add(Vector a, Vector b)
{
    Vector suma(a.getSize());
     if(a.getSize() != b.getSize()) throw string{"No puedo sumar"};
     for( int i=0; i < a.getSize(); i++) {
        suma.setElement( i, a.getElement(i) + b.getElement(i));
    }
    return suma;
}
 float scalarMultiply(Vector a, Vector b)
{
    float result{0};
     if(a.getSize() != b.getSize()){
        throw string{"No se puede calcular el producto escalar"};
    }
    for( int i=0; i<a.getSize(); i++){
        result = result+a.getElement(i)*b.getElement(i);
    }
    return result;
}
 bool Perpendiculares(Vector a, Vector b){
     if(scalarMultiply(a,b)==0){
         return true;
     }else {
         return false;
     }
     }
 float anguloRadianes(Vector a, Vector b)
 {
     float escalar,angulo;
      if(a.getSize() != 3 || b.getSize() != 3){
         throw string{"No se puede calcular el angulo"};
     }
     escalar=scalarMultiply(a,b);

     angulo =acos(escalar/(a.module()*b.module()));
     return angulo;
 }
 Vector productoVectorial(Vector a, Vector b)
 {
     Vector c(3);
      if(a.getSize() != 3 || b.getSize() != 3){
         throw string{"No se puede calcular el producto vectorial"};
     }
     c.setElement(0,a.getElement(1)*b.getElement(2)-b.getElement(1)*a.getElement(2));
     c.setElement(1,a.getElement(2)*b.getElement(0)-b.getElement(2)*a.getElement(0));
     c.setElement(2,a.getElement(0)*b.getElement(1)-b.getElement(0)*a.getElement(1));
     return c;
 }
int main(){
    try{

    Vector Vector1(3);
    //Pedimos al usuario que introduzca valores
    cout << "Introduce los valores: " << endl;
    for(int i{0};i<Vector1.getSize();i++){
        float aux;
        cin >> aux;
        Vector1.setElement(i,aux);
    }
cout << "Tu vector actual es: " << endl;
//Utilizamos la funcion "print" para mostrarle su vector
Vector1.print();

Vector Vector2(3);
//Establecemos al Vector2 como el vector unitario del Vector1
Vector2=Vector1.unitVector();
cout << "El vector unitario es: " << endl;
Vector2.print();
Vector Vector3(3);
cout << "Introduce los valores del segundo Vector: " << endl;
for(int i{0};i<Vector3.getSize();i++){
    float aux;
    cin >> aux;
    Vector3.setElement(i,aux);
}
//Mostramos la suma de ambos vectores
cout << "La suma del Vector 1 y del Vector 2 es: " << endl;
Vector2=add(Vector1, Vector3);
Vector2.print();
//Mostramos el producto escalar de ambos vectores
cout <<"El producto escalar de ambos es: "<< endl;
cout << scalarMultiply(Vector1, Vector3) << endl;
if (Perpendiculares(Vector1, Vector2)){
    cout << "Son perpendiculares entre si " << endl;
}else {
    cout << "No son perpendiculares entre si " << endl;
}
cout << "El angulo formado entre si es de: " << anguloRadianes(Vector1, Vector3) <<  " radianes" << endl;

cout << "El producto vectorial de ambos Vectores es: "  << endl;
Vector2=productoVectorial(Vector1, Vector3);
Vector2.print();
} catch(string e){
       cout << e << endl;
       return 0;
   }
}
