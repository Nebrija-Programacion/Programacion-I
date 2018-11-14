#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Vector{
public:
    Vector(int n){
        size = n;
        for(int i=0; i<n; i++){
            v.push_back(0);
        }

    }
    void setElement(int i, float value){
        v.at(i) = value;    //v[i] = value;
    }
    float module(){
        float suma = 0;
        for(auto elem:v){
            suma = suma+elem*elem;
        }
        return sqrt(suma);
    }
    Vector unitVector(){
        float m = module();
        if(m == 0){ throw string("No existe el vector unitario."); }
        Vector result(size);
        for(int i=0; i<size; i++){
            result.setElement(i, v.at(i)/m);
        }
        return result;
    }
    void print(){
        cout << "[";
        for(auto elem:v){
            cout << elem << ",";
        }
        cout << "]" << endl;
    }
    int getSize(){
        return size;
    }
    float getElement(int i){
        return v.at(i);
    }

private:
    vector<float> v;
    int size;
};

Vector add(Vector a, Vector b){
    if(a.getSize() != b.getSize()){
        throw string{"No se pueden sumar."};
    }
    Vector suma(a.getSize());
    for(int i=0; i<a.getSize(); i++){
        suma.setElement(i, a.getElement(i)+b.getElement(i));
    }
    return suma;
}
float scalarMultiply(Vector a, Vector b){
    if(a.getSize() != b.getSize()){
        throw string{"No se pueden sumar."};
    }
    float result{0};
    for(int i=0; i<a.getSize(); i++){
        result = result+a.getElement(i)*b.getElement(i);
    }
    return result;
}
bool Perpendicular(Vector a, Vector b){
    if(scalarMultiply(a,b)==0){
        return true;
    }else{
        return false;
    }
}
float Radians(Vector a, Vector b){
    float scalar,angle;
    if(a.getSize() != 3 || b.getSize() != 3){
        throw string{"No se puede calcular el angulo."};
    }
    scalar=scalarMultiply(a,b);

    angle =acos(scalar/(a.module()*b.module()));
    return angle;
}
Vector vectorProduct(Vector a, Vector b){
    Vector prod(a.getSize());
    if(a.getSize() != b.getSize()){
        throw string {"No se puede calcular el producto vectorial."};
    }
    prod.setElement(0,a.getElement(1)*b.getElement(2)-a.getElement(2)*b.getElement(1));
    prod.setElement(1,a.getElement(0)*b.getElement(2)-a.getElement(2)*b.getElement(0));
    prod.setElement(2,a.getElement(0)*b.getElement(1)-a.getElement(1)*b.getElement(0));
    return prod;
}

int main()
{
    try{

    Vector miVector(3);
    cout << "Introduce valores para el primer vector: " << endl;
    for (int i=0; i<miVector.getSize(); i++){
        float aux;
        cin >> aux;
        miVector.setElement(i,aux);
    }

    cout << "El vector introducido es: " ;
    miVector.print();

    cout << "Su modulo es: " << miVector.module() << endl;

    Vector Vector2(3);
    Vector2=miVector.unitVector();
    cout << "El vector unitario es: ";
    Vector2.print();

    Vector Vector3(3);
    cout << "Introduce valores para el segundo vector: " << endl;
    for(int i{0};i<Vector3.getSize();i++){
        float aux;
        cin >> aux;
        Vector3.setElement(i,aux);
    }

    Vector2=add(miVector, Vector3);
    cout << "La suma del ambos vectores es: " ;
    Vector2.print();


    cout <<"El producto escalar de ambos es: "<< scalarMultiply(miVector, Vector3) << endl;

    if (Perpendicular(miVector, Vector3)){
        cout << "Son perpendiculares." << endl;
    }else {
        cout << "No son perpendiculares." << endl;
    }

    cout << "El angulo formado entre si es de " << Radians(miVector, Vector3) <<  " radianes." << endl;

    Vector2=vectorProduct(miVector, Vector3);
    cout << "El producto vectorial de ambos vectores es: " ;
    Vector2.print();

    }catch(string e){
        cout << e << endl;
        return -1;
    }
     return 0;
}
