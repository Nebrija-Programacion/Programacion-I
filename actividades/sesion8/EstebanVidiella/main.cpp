#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#define rad 0.0174533

using namespace std;

class Vector{
public:
    Vector(int n){
    /*if (n<2 || n>4){
        throw string {"Numero de coordenadas incorrecto."};
    }*/
        size = n;
    for(int i=0; i<n ; i++){
        v.push_back (0); //Para inizializar a 0
    }
    }
    void setElement (int i, float value) {
        /*if (i < 0 || i > size -1){
            throw string {"Numero de elementos incorrecto."};
        }*/
        v.at(i) = value;
    }
    float module(){
            float suma{0};
            for(auto elem:v){
                suma=suma + elem*elem;

          }
            return sqrt(suma);
        }
    Vector unitVector(){
        float m = module();
        if(m==0) throw string ("No existe el vector unitario");
        Vector result (size); //Para poner el mismo tamaño que el vector original
        for (int i=0; i<size; i++){
            result.setElement(i,v.at(i)/m);// i es igual al indice y v al valor
        }
        return result;
    }
    void print(){
        cout<< "[";
        for (auto elem:v){
            cout <<elem << ",";
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
    vector <float> v;
    int size;
};

Vector add(Vector a, Vector b){
    Vector suma(a.getSize());
    if(a.getSize() != b.getSize()){
        throw string {"No se pueden sumar"};
    }
    for(int i=0; i<a.getSize(); i++){
        suma.setElement(i, a.getElement(i) + b.getElement(i));
    }
    return suma;
}
float scalarMultiply(Vector a, Vector b){
    if(a.getSize() != b.getSize()){
        throw string {"No puedo operar"};
    }
    float producto{0};
    for(int i=0;i<a.getSize();i++){
        producto=producto+a.getElement(i)*b.getElement(i);
    }
    return producto;
}

bool perpendicularesSiNo(Vector a,Vector b){
    if(scalarMultiply(a,b)==0){
        return true;
    }else{
        return false;
    }
}
float AnguloRadianes(Vector a,Vector b){
    float scalar,angulo;
    if(a.getSize() !=3 || b.getSize() !=3){
        throw string{"No pued calcular el angulo."};
    }
    scalar=scalarMultiply(a,b);
    angulo=(scalar/(a.module()*b.module()));
    return angulo*rad;//rad lo he definido al principio con un define
}
Vector productoVectorial(Vector a, Vector b){
    Vector prod(a.getSize());
    if(a.getSize() != b.getSize()){
        throw string {"No puedo calcular el producto vectorial."};
    }
    prod.setElement(0,a.getElement(1)*b.getElement(2)-a.getElement(2)*b.getElement(1));
    prod.setElement(1,a.getElement(0)*b.getElement(2)-a.getElement(2)*b.getElement(0));
    prod.setElement(2,a.getElement(0)*b.getElement(1)-a.getElement(1)*b.getElement(0));
    return prod;
}

class Matriz{
public:
    Matriz(){
        num = {0,0,0,0,0,0,0,0,0};
    }
    float getElement(int fil, int col){
        unsigned short arr=(col-1)+(fil-1)*3;
        return num.at(arr);
    }
    void setElement(int fil, int col, float valor){
        unsigned short arr=(col-1)+(fil-1)*3;
        num.at(arr)=valor;
    }
    void productoMatVec(Matriz matriz3){
        Matriz prod;
        for (unsigned short int fil{1}; fil<=3; fil++){
            for (unsigned short int col{1}; col<=1; col++){
                float aux{0};
                for(unsigned short k{1}; k<=3; k++){
                    aux=aux+getElement(fil,k) * matriz3.getElement(k,col);
                }
                prod.setElement(fil,col,aux);
            }
        }
        for (unsigned short int fil{1}; fil<=3; fil++){
            for (unsigned short int col{1}; col<=1; col ++){
                setElement(fil,col,prod.getElement(fil,col));
            }
        }
    }
    void print(){
        for (unsigned short int fil{1}; fil<=3; fil++){
            for (unsigned short int col{1}; col<=1; col++){
                cout << getElement(fil,col) << "\t";
            }
            cout << endl;
        }
    }
private:
    array<float,9> num;
};

int main()
{
    try{
    Vector miVector(3);//Crea tres coordenadas
    cout <<"Introduce tres valores: " << endl;
    for (int i=0; i<miVector.getSize(); i++){
        float aux;
        cin >> aux;
        miVector.setElement(i,aux);
    }
    Vector miotroVector(3);
    miotroVector=miVector.unitVector();
    cout << "El modulo es: " << miVector.module() << endl;
    cout << "El vector unitario es: " << endl;
    miotroVector.print();

    Vector miVector2(3);
    cout <<"Introduce tres valores: " << endl;
    for (int i=0; i<miVector2.getSize(); i++){
        float aux;
        cin >> aux;
        miVector2.setElement(i,aux);
    }
    cout << "La suma de los dos vectores es: " << endl;
    miotroVector=add(miVector,miVector2);
    miotroVector.print();
    cout << "El producto escalar de los dos vectores es: " << endl;
    cout << scalarMultiply(miVector,miVector2) << endl;
    if(perpendicularesSiNo(miVector,miVector2)){
        cout << "Son perpendiculares en el espacio n-dimensional." << endl;
    }else{
        cout << "No son perpendiculares en el espacio n-dimensional." << endl;
    }
    cout << "El angulo entre los dos vectores en radianes es: " << AnguloRadianes(miVector,miVector2) << endl;
    cout << "El producto vectorial de los dos vectores es: " << endl;
    miotroVector=productoVectorial(miVector,miVector2);
    miotroVector.print();

    Matriz matriz;
    Matriz matriz2;
    for (unsigned short int fil{1}; fil<=3; fil++){
        for (unsigned short int col{1}; col<=3; col++){
            cout << "Introduce el elemnto " << fil << "," << col <<" de la matriz: ";
            float valor;
            cin >> valor;
            matriz.setElement(fil,col,valor);
        }
    }
    for (unsigned short int fil{1}; fil<=3; fil++){
        for (unsigned short int col{1}; col<=1; col++){
            cout << "Introduce el elemnto " << fil << "," << col <<" del vector: ";
            float valor;
            cin >> valor;
            matriz2.setElement(fil,col,valor);
        }
    }
    matriz.productoMatVec(matriz2);
    matriz.print();
    }catch(string e){
        cout << e << endl;
        return -1;
    }

    return 0;
}
