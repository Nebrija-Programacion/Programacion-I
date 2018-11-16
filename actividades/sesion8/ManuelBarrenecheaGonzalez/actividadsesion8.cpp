#include <iostream>
#include <math.h>
#include <vector>
#define rad 0.0174533
#include <array>

using namespace std;

class Vector{
private:
    vector <float> coordenadas;
    int size;

public:
    Vector(int n){

        if(n < 2 || n > 4){
            throw string{"Ese numero no me vale"};
        }else{
            size = n;
            for(int i{0}; i < n; i++){
                coordenadas.push_back(0); // Para inicializar a 0.
            }
        }
    }

    float getElement(int i){
        return coordenadas.at(i);
    }

    void setElement(int i, float value){
        coordenadas.at(i) = value; // coordenadas[i] = value;
    }

    float module(){
        float suma = 0;
        for (auto elem : coordenadas){
            suma = suma + elem * elem;
        }
        return sqrt(suma);
    }

    Vector unitVector(){
        Vector result(size);

        float m = module();

        for(int i{0}; i < size; i++){
            result.setElement(i,coordenadas.at(i)/m);
        }
        return result;
    }

    void Print(){
        cout << "[ ";

        for(auto elem : coordenadas){
            cout << elem << ", ";
        }

        cout << "]";
    }

    int getSize(){
        return size;
    }
};

Vector add(Vector a, Vector b){

    if(a.getSize() != b.getSize()){
        throw string{"No puede sumar"};
    }

    Vector suma(a.getSize());

    for(int i{0}; i < a.getSize(); i++){
        suma.setElement(i, a.getElement(i) + b.getElement(i));
    }

    return suma;
}

float scalarMultiply(Vector a, Vector b){
    if(a.getSize() != b.getSize()){
        throw string{"No se pueden multiolicar"};
    }

    float result{0};

    for(int i{0}; i < a.getSize(); i++){
        result = result + a.getElement(i) + b.getElement(i);
    }

    return result;
}

bool perpendicular(Vector a, Vector b){
    if(scalarMultiply(a,b) == 0){
        return true;
    }else{
        return false;
    }
}

float anguloRadianes(Vector a, Vector b){
    float num, angulo;

    if(a.getSize() != 3 || b.getSize() != 3){
        throw string{"No me valen los datos"};
    }

    num = scalarMultiply(a,b);

    angulo = (num / (a.module() * b.module()));

    return angulo * rad;
}

Vector productoVectorial(Vector a, Vector b){
    Vector p(a.getSize());

    if(a.getSize() != b.getSize()){
        throw string{"No me valen los datos"};
    }

    p.setElement(0,a.getElement(1) * b.getElement(2) - a.getElement(2) * b.getElement(1));
    p.setElement(1,a.getElement(0) * b.getElement(2) - a.getElement(2) * b.getElement(0));
    p.setElement(2,a.getElement(0) * b.getElement(1) - a.getElement(1) * b.getElement(0));

    return p;
}

class Matriz{
private:
    array <float,9> matriz;

public:
    Matriz(){
        matriz = {0,0,0,0,0,0,0,0,0};
    }

    float getElement(int fila, int col){
        int x = (col -1) + (fila - 1) * 3;
        return matriz.at(x);
    }

    void setElement(int fila, int col, int valor){
        int x = (col -1) + (fila - 1) * 3;
        matriz.at(x);
    }

    void productoMatrizVectorial(Matriz matriz){
        Matriz h;

        for(int fila{1}; fila <= 3; fila++){
            for(int col{1}; col <= 1; col++){
                float aux{0};
                for(int u{1}; u <= 3; u++){
                    aux = aux + getElement(fila,u) * matriz.getElement(u,col);
                }
                h.setElement(fila,col,aux);
            }
        }

        for (int fila{1}; fila<=3; fila++){
            for (unsigned short int col{1}; col<=1; col ++){
                setElement(fila,col,h.getElement(fila,col));
            }
        }
    }

    void print(){
        for (int fila{1}; fila<=3; fila++){
            for (int col{1}; col<=1; col++){
                cout << getElement(fila,col) << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    try{

    Vector miVector(3);

    cout <<"Introduce tres valores: " << endl;

    for (int i=0; i<miVector.getSize(); i++){
        float aux;
        cin >> aux;
        miVector.setElement(i,aux);
    }

    Vector miotroVector(3);

    miotroVector = miVector.unitVector();

    cout << "El modulo es: " << miVector.module() << endl;

    cout << "El vector unitario es: " << endl;

    miotroVector.Print();

    Vector miVectorcito(3);

    cout << endl <<"Introduce tres valores: " << endl;

    for (int i=0; i < miVectorcito.getSize(); i++){
        float aux;
        cin >> aux;
        miVectorcito.setElement(i,aux);
    }

    cout << "La suma de los dos vectores es: ";

    miotroVector = add(miVector,miVectorcito);
    miotroVector.Print();

    cout << endl << "El producto escalar de los dos vectores es: ";

    cout << scalarMultiply(miVector,miVectorcito) << endl;

    if(perpendicular(miVector,miVectorcito)){

        cout << "Son perpendiculares en el espacio n-dimensional." << endl;
    }else{

        cout << "No son perpendiculares en el espacio n-dimensional." << endl;
    }

    cout << "El angulo entre los dos vectores en radianes es: " << anguloRadianes(miVector,miVectorcito) << endl;

    cout << "El producto vectorial de los dos vectores es: ";

    miotroVector = productoVectorial(miVector,miVectorcito);
    miotroVector.Print();

    Matriz matriz;
    Matriz matriz2;

    for (unsigned short int fila{1}; fila<=3; fila++){
        for (unsigned short int col{1}; col<=3; col++){

            cout << endl << "Introduce el elemnto " << fila << "," << col <<" de la matriz: ";
            float valor;
            cin >> valor;

            matriz.setElement(fila,col,valor);
        }
    }

    for (int fila{1}; fila<=3; fila++){
        for (int col{1}; col<=1; col++){

            cout << "Introduce el elemnto " << fila << "," << col <<" del vector: ";
            float valor;
            cin >> valor;

            matriz2.setElement(fila,col,valor);
        }
    }

    matriz.productoMatrizVectorial(matriz2);
    matriz.print();

    } catch (string e) {
        cout << e << endl;
    }
}
