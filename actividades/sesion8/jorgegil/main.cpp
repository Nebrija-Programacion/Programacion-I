#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Vector{
public:
    // n = tamaño
    Vector(int n){
        if (n<0){ // cualquier numero de coordenadas mayor que 0
            throw string {"Numero de coordenadas incorrecto!"};
        }
        size = n;
        for (int i=0; i<n; i++){
            v.push_back(0);
        }
    }

    void setElement(int indice, float valor){
        if(indice<0 || indice>size-1){
            throw string {"El numero de coorenadas del vector es incorrecto"};
        }
        v.at(indice) = valor; // v[indice]=valor
    }

    float module(){
        float suma=0;
        for(int i=0; i<size; i++){
            suma = suma +pow(v.at(i),2);
        }
        return sqrt(suma);
    }

    Vector unitVector(vector<float> z){
        Vector result(size);
        float m = module();
        for (int i=0; i<size; i++){
            result.setElement(i, v.at(i)/m);
        }
        return result;
    }

    int getSize(){
        return size;
    }

    float getElement(int i){
        return v.at(i);
    }

    void print(){
        cout << "[";
        for(auto elem:v){
            cout << elem << ",";
        }
        cout << "]" << endl;
    }


private:
    vector<float> v;
    int size;
};

Vector add(Vector a, Vector b){
    Vector suma(a.getSize());

    if(a.getSize() != b.getSize()){
        throw string{"Los dos vectores tienen que tener la misma longitud"};
    }
    for(int i=0; i<a.getSize(); i++){
        suma.setElement(i, a.getElement(i) + b.getElement(i));
    }
    return suma;
}

float scalarMultiply(Vector a, Vector b){
    if(a.getSize() != b.getSize()){
        throw string{"Los dos vectores tienen que tener la misma longitud"};
    }

    float result=0;

    for (int i=0; i<a.getSize(); i++){
        result = result + a.getElement(i)*b.getElement(i);
    }
    return result;
}

bool sonPerpendiculares(Vector a, Vector b){
    return (scalarMultiply(a,b) == 0);
}

float angulo(Vector a, Vector b){
    float escalar,m1,m2,angle;

    if(a.getSize() != 3 || b.getSize() != 3){
        throw string{"No se puede obtener el angulo"};
    }
    escalar = scalarMultiply(a,b);
    m1 = a.module();
    m2 = b.module();
    angle = acos(escalar/(m1*m2));

    return angle;
}




int main()
{
    try{
        Vector v1(3);

        cout << "Introduce 3 valores para v1:" << endl;
        for (int i=0; i<3; i++){
            float aux;
            cin >> aux;
            v1.setElement(i,aux);
        }
        cout << "El vector1 es = ";
        v1.print();


        Vector v2(3);

        cout << "Introduce 3 valores para v2:" << endl;
        for (int i=0; i<3; i++){
            float aux;
            cin >> aux;
            v2.setElement(i,aux);
        }
        cout << "El vector2 es = ";
        v2.print();

        //Suma de v1 y v2
        Vector v3(3);
        v3 = add(v1,v2);
        cout << "La suma de v1 y v2 es = ";
        v3.print();

        //Multiplicacion de v1 y v2
        float escalar;
        escalar = scalarMultiply(v1,v2);
        cout << "El productor escalar entre v1 y v2 es = "<< escalar << endl;

        //Para saber si son perpendiculares
        if(sonPerpendiculares(v1,v2)){
            cout << "Los vectores v1 y v2 son perpendiculares!" << endl;
        }else{
            cout << "Los vectores no son perpendiculares :(" << endl;
        }

        //Para saber el angulo que forman
        float angle;
        angle = angulo(v1,v2);
        cout << "El angulo que forman los vectores(R) = " << angle << endl;


    }catch(string e){
        cout << e << endl;
        return -1;
    }
    return 0;
}
