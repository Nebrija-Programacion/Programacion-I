#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
class Vector{
public:
    //----------n es el tamaño del vector
    Vector(unsigned int n)
    {
            if (n < 2) {  // cualquier tamaño de vector ----------
                throw string{"numero de coordenadas incorrecto"};
            }
            size = n;
            for(unsigned int i=0; i<n; i++){
                v.push_back(0);
            }
     }

     void setElement(unsigned int indice,float valor)
     {
            if(indice >= size ) {
                throw string{"Indice fuera del rango"};
            }
            v.at(indice)=valor;
     }
     float module()
     {
            float suma{0};                 //Suma de los componentes del vector
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
            cout << "]" << endl;
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

bool sonPerpendiculares(Vector a, Vector b)
{
    return ( scalarMultiply(a,b) == 0 );
}

float anguloRadianes(Vector a, Vector b)
{
    float escalar,modulo1,modulo3,angulo;

    if(a.getSize() != 3 || b.getSize() != 3){
        throw string{"No se puede calcular el angulo"};
    }
    escalar=scalarMultiply(a,b);
    modulo1=a.module();
    modulo3=b.module();
    angulo =acos(escalar/(modulo1*modulo3));
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

int main()
{
    try{
        Vector miVector1(3);
        Vector miVector2(3);
        Vector miVector3(3);
        Vector miVector4(3);
        Vector miVector5(3);
        float escalar, angulo;

        cout << "introduce valores: " << endl;
        for(unsigned int i=0; i<3; i++){
            float aux;
            cin >> aux;
            miVector1.setElement(i,aux);
        }
        cout << "El vector actual es: ";
        miVector1.print(); cout << endl;
        // -------- pinto el modulo -------
        cout << "el modulo del vector es:  " << miVector1.module() << endl << endl;

        // -------  calculo el vector unitario -------------
        miVector2= miVector1.unitVector();   // vector unitario del miVector1
        cout << "El vector unitario es: "<< endl;;
        miVector2.print();
        // -------  sumo los dos vectores y muestro el resultante --------
        miVector3=add(miVector1,miVector2);
        cout << "El vector suma es: "<< endl;
        miVector3.print();
        // ------- calculo el producto escalar y lo muestro -------
        escalar=scalarMultiply(miVector1,miVector3);
        cout << "el producto escalar es:  " << escalar << endl;
        // ------- compruebo si son perpendiculares -----
        if ( sonPerpendiculares(miVector1,miVector3) )
             cout << "Vector1 y Vector3 son perpendiculares" << endl;
        else
             cout << "Vector1 y Vector3 no son perpendiculares" << endl;
        // ------- calcular el angulo en radianes de dos vectores -------
        angulo = anguloRadianes(miVector1,miVector3);
        cout << "El angulo entre Vector1 y Vector3 es: " << angulo << "  radianes" << endl;
        // ------- pido otro vector -------
        cout << "introduce valores: " << endl;
        for(unsigned int i=0; i<3; i++){
                    float aux;
                    cin >> aux;
                    miVector4.setElement(i,aux);
        }
        // calculo el producto vectorial entre el primero y este nuevo --------
        miVector5 = productoVectorial(miVector1,miVector4);
        cout << "El vector perpendicular a V1 y V4 es: "<< endl;
        miVector5.print();
        // calculo el angulo que tiene que ser 90 grados = pi/2 radianes ------
        angulo = anguloRadianes(miVector1,miVector5);
        cout << "El angulo entre Vector1 y Vector5 es: " << angulo << "  radianes" << endl;
    } catch(string e){
        cout << e << endl;
        return 0;
    }
}


