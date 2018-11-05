#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
class Vector
{
public:
    Vector(int n) {
        if(n <2 || n >4){
            throw string{"Numero de cordenadas incorecto"};
        }
        size = n;
        for(int i{0};i < n ; i++){
            v.push_back(0);
        }
    }
    void setElement(int i, float valor){
        if(i < 0 || i > size - 1){
          throw string{"Numero de cordenadas incorecto"};
        }
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
        for(int i{0};i<v.size();i++){
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


private:
    vector<float> v;
    int size;
};
Vector addBy(Vector a,Vector b){
    if(a.getSize() != b.getSize()){
        throw string{"No puedo sumarlos"};
    }
    Vector suma(a.getSize());
    for(int i{0};i<a.getSize(); i++){
      suma.setElement(i,a.getElement(i)+b.getElement(i));
    }
    return suma;
}
float scalarBy(Vector a, Vector b){
    if(a.getSize() != b.getSize()){
        throw string{"No puedo multiplicarlos"};
    }
    Vector scalar(a.getSize());
    for(int i{0};i<a.getSize(); i++){
      scalar.setElement(i,a.module()*b.module());
    }
    return scalar;
}


int main(){
    try{
        int n;
        cout << "¿Cuantas coordenadas quieres que tenga tu vector? " << endl;
        cin >> n;
    Vector miVector(n);
    cout << "Introduce " << n << " valores" << endl;
    for(int i=0;i< n ;i++){
        float aux;
        cin >> aux;
        miVector.setElement(i,aux);
    }
    Vector miOtroVector(n);
    cout << "Ahora introduce los valores de tu otro vector" << endl;
    cout << "Introduce " << n << " valores" << endl;
    for(int i=0;i< n ;i++){
        float aux;
        cin >> aux;
        miOtroVector.setElement(i,aux);
    }
    cout << "El modulo de tu vector es: " << miVector.module() << endl;
    cout << "El modulo de tu otro vector es: " << miOtroVector.module() << endl;
    addBy(miVector,miOtroVector);
    scalarBy(miVector,miOtroVector);
    }
    catch(string e){
        cout << e << endl;
        return 1;
    }
    return 0;
}
