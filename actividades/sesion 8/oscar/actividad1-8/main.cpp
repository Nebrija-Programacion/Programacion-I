
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
class Vector{
public:
    Vector(unsigned int n)
    {
            if (n < 2 || n>4) {
                throw string{"numero de coordenadas incorrecto"};
            }
            size = n;
            for(unsigned int i=0; i<n; i++){
                v.push_back(0);
            }
     }

     void setElement(unsigned int ind,float valor)
     {
            if(ind >= size ) {
                throw string{"Indice fuera del rango"};
            }
            v.at(ind)=valor;
     }

     float module()
     {
            float suma{0};
            for (auto elem: v) {
                suma += elem*elem;
            }
            return sqrt(suma);
     }

     Vector unitVector()
     {
            float m = module();
            if( m == 0) throw string{"no existe el vector unitario "};
            Vector unitario(size);
            for(unsigned int i=0; i < size; i++){
                unitario.setElement(i,v.at(i)/m);
            }
            return unitario;
     }

     unsigned int getSize(){
           return size;
     }

     float getElement(unsigned int indice)
     {
            if(indice >= size ) {
                throw string{"Indice fuera del rango"};
            }
            return v.at(indice);
     }

     void print()
     {
            cout << "[";
            for(auto elem:v){
                cout << elem << ",";
            }
            cout << "]";
     }

private:

    vector<float>v;
    unsigned int size;

};

Vector add(Vector a, Vector b)
{
    Vector suma(a.getSize());

    if(a.getSize() != b.getSize()) throw string{"No puedo sumar"};

    for(unsigned int i=0; i < a.getSize(); i++) {
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
    for(unsigned int i=0; i<a.getSize(); i++){
        result = result+a.getElement(i)*b.getElement(i);
    }
    return result;
}


int main()
{
    try{
        Vector miVector1(3);
        Vector miVector2(3);
        Vector miVector3(3);
        float escalar;


        cout << "Introduce numeros: " << endl;
        for(unsigned int i=0; i<3; i++){
            float aux;
            cin >> aux;
            miVector1.setElement(i,aux);
        }

        cout << "El vector actual es: ";
        miVector1.print(); cout << endl;

        cout << "El modulo es:  " << miVector1.module() << endl << endl;


        miVector2= miVector1.unitVector();
        cout << "El vector unitario es: ";
        miVector2.print();

        miVector3=add(miVector1,miVector2);
        miVector3.print();

        escalar=scalarMultiply(miVector1,miVector3);
        cout << "El producto escalar es:  " << escalar << endl;


    } catch(string e){
        cout << e << endl;
        return 0;
    }
}
