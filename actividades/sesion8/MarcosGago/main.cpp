#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
typedef int Matrix3x3[3][3];

class Vector{
public:
    Vector (int _dim){
        if (_dim<1){
            throw string("Dimension invalida");
        }
        dim=_dim;
        for (int i{0}; i<_dim; i++){
            vec.push_back((0));
        }
    }
    void setElement(int i, float a){
        if (i<0 || i>= dim){
            throw string("Parametro invalido");
        }
        vec.at(i)=a;
    }
    float getElement(int i){
        return vec.at(i);
    }
    float module(){
        float suma{0};
        for (auto x:vec){
            suma=suma+(x*x);
        }
        return sqrt(suma);
    }
    Vector unitVector(){
        Vector VV (dim);
        float m=module();
        if (m==0) throw string{"No existe vector unitario"};
        for (int i{0}; i<dim; i++){
            VV.setElement(i,vec.at(i)/m);
        }
        return VV;
    }
    int getSize(){
        return dim;
    }
    Vector add(Vector a){
        if (a.getSize() != getSize()){
            throw string("Los vectores deben ser de la misma dimension para poder sumarse");
        }
        Vector Suma (dim);
        for (int i{0}; i<dim; i++){
            Suma.setElement(i,vec.at(i)+a.getElement(i));
        }
        return Suma;
    }
    float scalarMultiply(Vector a){
        if (a.getSize() != getSize()){
            throw string("Los vectores deben ser de la misma dimension para poder calcular el producto escalar");
        }
        float esc{0};
        for (int i{0}; i<dim; i++){
            esc=esc+vec.at(i)+a.getElement(i);
        }
        return esc;
    }
    bool vecPerpen(Vector a){
        if (scalarMultiply(a)!=0){
            return false;
        }
        else return true;
    }
    float vecAngle(Vector a){
        if (a.getSize() !=3 || getSize() != 3){
            throw string("Ambos vectores deben tener dimension 3 para sacar el angulo");
        }
        return acos(scalarMultiply(a)/(module()*a.module()));
    }
    void printVectorHor(){
        for (auto x:vec){
            cout<<x<<"\t";
        }
        cout<<endl;
    }
    void printVectorVer(){
        //Nueva funcion para imrpimir el vector en vertical
        for (auto x:vec){
            cout<<x<<endl;
        }
    }
    Vector prodVec(Vector a){
        if (a.getSize() !=3 || getSize() != 3){
            throw string("Ambos vectores deben tener dimension 3 para calcular el producto vectorial");
        }
        Vector b (3);
        //Lo he hecho sin bucles porque he estado pensando un buen rato y no se me ha ocurrido como hacerlo
        b.setElement(0, (getElement(1)*a.getElement(2))-(getElement(2)*a.getElement(1)));
        b.setElement(1, (getElement(0)*a.getElement(2))-(getElement(2)*a.getElement(0)));
        b.setElement(2, (getElement(0)*a.getElement(1))-(getElement(1)*a.getElement(0)));
        return b;
    }
    Vector matrixVec(Vector a, Vector b){
        if (a.getSize() !=3 || getSize() != 3){
            throw string("Ambos vectores deben tener dimension 3 para calcular el producto vectorial");
        }
        /*
        (b0 b1 b2)*(1 1 1; vec0 vec1 vec2; a0 a1 a2)=(c0; c1; c2)
        */
        Vector c(3);
        c.setElement(0, b.getElement(0)+(b.getElement(1)*getElement(0))+(b.getElement(2)*a.getElement(0)));
        c.setElement(1, b.getElement(0)+(b.getElement(1)*getElement(1))+(b.getElement(2)*a.getElement(1)));
        c.setElement(2, b.getElement(0)+(b.getElement(1)*getElement(2))+(b.getElement(2)*a.getElement(2)));
        return c;
    }

private:
    vector<float> vec;
    int dim;
};

int main()
{
    try{
    cout<<"Introduce la dimension de tu vector"<<endl;
    cout<<"(pon 3 si quieres calcular despues el producto vectorial)"<<endl;
    int d;
    cin>>d;
    Vector V(d);
    float value;
    for (int i{0}; i<d; i++){
        cout<<"Introduce tu valor"<<endl;
        cin>>value;
        V.setElement(i, value);
    }
    cout<<"El vector es: "<<endl<<endl;
    V.printVectorHor();
    cout<<"El modulo es: "<<V.module()<<endl;
    cout<<"El vector unitario es: "<<endl<<endl;
    V.unitVector().printVectorHor();
    cout<<"Introduce la dimension de tu segundo vector"<<endl;
    cout<<"(pon la misma que en el anterior para poder realizar las operaciones)"<<endl;
    int e;
    cin>>e;
    Vector W(e);
    for (int i{0}; i<e; i++){
        cout<<"Introduce tu valor"<<endl;
        cin>>value;
        W.setElement(i, value);
    }
    cout<<"El vector es: "<<endl<<endl;
    W.printVectorHor();
    cout<<"El modulo es: "<<W.module()<<endl;
    cout<<"El vector unitario es: "<<endl<<endl;
    W.unitVector().printVectorHor();
    cout<<"Suma: "<<endl<<endl;
    V.add(W).printVectorHor();
    cout<<"Perpendicularidad: "<<endl;
    if (V.vecPerpen(W)){
        cout<<"Los vectores son perpendiculares"<<endl;
    }
    else cout<<"Los vectores no son perpendiculares"<<endl;
    cout<<"Producto escalar: "<<V.scalarMultiply(W)<<endl;
    cout<<"Angulo: "<<V.vecAngle(W)<<endl;
    cout<<"Producto vectorial: "<<endl<<endl;
    V.prodVec(W).printVectorHor();
    Vector U(d);
    cout<<"Introduce los valores de un tercer vector. Sera de dimension 3."<<endl;
    for (int i{0}; i<3; i++){
        cout<<"Introduce tu valor"<<endl;
        cin>>value;
        U.setElement(i, value);
    }
    cout<<"El vector es: "<<endl<<endl;
    U.printVectorHor();
    cout<<"El resultado de multiplicar el nuevo vector por la matriz"<<endl;
    cout<<"del producto vectorial anterior es: "<<endl<<endl;
    V.matrixVec(W, U).printVectorVer();
    return 0;
    }catch(string e){
        cout<<e<<endl;
        return 1;
    }
}
