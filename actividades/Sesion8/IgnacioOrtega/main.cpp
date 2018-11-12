#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <math.h>

using namespace std;

class Vector{
public:
    Vector(int a) {
        size =a;
        for (int i{0};i<a;i++){
            vector1.push_back(0);
        }
    }
    float getElement(int i){
        return vector1.at(i);
    }
    int getSize(){
        return size;
    }
    void setElement(int a, float b){
        int z;
        z=vector1.size();
        if (a<= (z-1) && a>=0){
            vector1.at(a)=b;
        }
        else{
            cout << "Has introducido una coordenada no perteneciente al tamano de tu vector." << endl;
        }
    }
    float module(){
        float sumatorio{0};
        for (int i {0}; i<size; i++){
            sumatorio = sumatorio + (vector1.at(i)*vector1.at(i));
        }
        return  sqrt(sumatorio);
    }
    Vector unitVector(){
        Vector vector2(size);
        float c=module();
        for (int i{0}; i<size; i++){
            vector2.setElement(i, vector1.at(i)/c);
        }
        return  vector2;
    }

private:
    vector <float> vector1;
    int size;
};

Vector add(Vector a, Vector b){
    Vector sumaVectores(a.getSize());
    if (a.getSize()==b.getSize()){
            for (int i{0}; i<sumaVectores.getSize(); i++){
            sumaVectores.setElement(i, a.getElement(i)+b.getElement(i));
        }
        return  sumaVectores;
    }
}

float scalarMultiply(Vector a, Vector b){
    float sumatorio{0};
    if ( a.getSize()==b.getSize()){
        for (int i{0}; i < a.getSize(); i++){
            sumatorio = sumatorio +(a.getElement(i)*b.getElement(i));
        }
        return sumatorio;
    }
}
string perpendicularVector(Vector a, Vector b){
    float sumatorio{0};
    for (int i{0}; i < a.getSize(); i++){
        sumatorio = sumatorio +(a.getElement(i)*b.getElement(i));
    }
    if (sumatorio==0){
        string frase ="Tus vectores son perpendiculares";
        return frase;
    }
    else{
        string frase2 = "Tus vectores no son perpendiculares";
        return  frase2;
    }
}
void printVector(Vector a){
    int n;
    n= a.getSize();
    for (int i {0}; i<n; i++){
        cout << " " <<a.getElement(i) << " ";
    }
    cout << endl;
}
float aungloVectores(Vector a, Vector b){
    if (a.getSize()==3 && b.getSize()==3){
        float sumatorio1{0};
        float sumatorio2{0};
        float sumatorio3{0};
        float sumatorio{0};
        for ( int i{0}; i< a.getSize(); i++){
            sumatorio1= sumatorio1 +(a.getElement(i)*b.getElement(i));
        }
        for ( int i{0}; i< a.getSize(); i++){
            sumatorio2= sumatorio2 +(a.getElement(i)*a.getElement(i));
        }
        sumatorio2= sqrt(sumatorio2);
        for ( int i{0}; i< b.getSize(); i++){
            sumatorio3= sumatorio3 +(b.getElement(i)*b.getElement(i));
        }
        sumatorio3= sqrt(sumatorio3);
        sumatorio = sumatorio1/(sumatorio2*sumatorio3);
        return sumatorio;
    }
}
void productoVectorial (Vector a, Vector b){
    Vector productoVectorial(3);
    float primero;
    float segundo;
    float tercero;
    if (a.getSize()==3 && b.getSize()==3){
        primero = (a.getElement(1)*b.getElement(2))-(a.getElement(2)*b.getElement(1));
        segundo = (a.getElement(2)*b.getElement(0))-(a.getElement(0)*b.getElement(2));
        tercero = (a.getElement(1)*b.getElement(0))-(a.getElement(0)*b.getElement(1));
        productoVectorial.setElement(0,primero);
        productoVectorial.setElement(1,segundo);
        productoVectorial.setElement(2,tercero);
        int n;
        n= productoVectorial.getSize();
        for (int i {0}; i<n; i++){
            cout << " " <<productoVectorial.getElement(i) << " ";
        }
        cout << endl;
    }
    else{
        cout << "Uno o los dos vectores tienen un tamano distinto a 3 coordenadas por tanto no se puede ejecutar." << endl;
    }

}


int main(){
    int a;
    int b;
    int posicion{0};
    float valor;
    cout << "Dime de cuantas coordenadas quieres que sea tu vector (para que te salgan mas cosas pon de tamano 3)" << endl;
    cin >> a;
    cout << "Dime de cuantas coordenadas quieres que sea tu segundo vector (para que te salgan mas cosas pon de tamano 3)" << endl;
    cin >> b;
    Vector miVector(a);
    Vector miVector2(b);
    cout << "Ahora vas a rellenar con los valores que quieres las diferentes posiciones de tu vector:" << endl;
    cout << "Cuando quieras parar da como posicion `-1`" << endl;
    while (posicion != -1){
        cout << "Dame la posicion del vector que quieres cambiar:" << endl;
        cin >> posicion;
        if (posicion != -1){
            cout << "Ahora dame el valor que le quieres asignar a dicha posicion del vector:" << endl;
            cin >> valor;
            miVector.setElement(posicion, valor);
        }
    }
    posicion=0;
    cout << " Ahora haz lo mismo para otro vector: " << endl;
    while (posicion != -1){
        cout << "Dame la posicion del vector que quieres cambiar:" << endl;
        cin >> posicion;
        if (posicion != -1){
            cout << "Ahora dame el valor que le quieres asignar a dicha posicion del vector:" << endl;
            cin >> valor;
            miVector2.setElement(posicion, valor);
        }
    }
    cout << "El modulo de tu primer vector es: " << miVector.module() << endl;
    cout << "El modulo de tu segundo vector es: " << miVector2.module() << endl;
    cout << "La suma de tus dos vectores es: " << endl;
    printVector(add(miVector, miVector2));
    cout << "El producto escalar de tus dos vectores es: " << scalarMultiply(miVector, miVector2) << endl;
    cout << perpendicularVector(miVector, miVector2) << endl;
    cout << "El angulo entre tus dos vectores (medidos en radianes es: " << aungloVectores(miVector, miVector2) << endl;
    cout << "El producto vectorial entre tus dos vectores es: " << endl;
    productoVectorial(miVector, miVector2);
}
//El de la matriz no entiendo lo que hay que hacer. ya que no he tenido que hacer una matriz 3x3 en ningún momento.
