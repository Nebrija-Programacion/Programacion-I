#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Vector
{

public:
    Vector(int n)
    {
        if (n < 2)
        {
            throw string("ERROR: el numero de coordenadas es incorrecta");
        }
        size = n;

        for(int i=0; i<n; i++)
        {
            v.push_back(0);
        }
     }

     void setElement(int indice,float valor)
     {
         if(indice >= size )
         {
             throw string("ERROR: el indice esta fuera del rango");
         }
            v.at(indice)=valor;
     }

     float module()
     {
         float suma{0};
         for(auto elem: v)
         {
             suma += elem*elem;
         }

         return sqrt(suma);
     }

     Vector VectorUnitario()
     {
         float m = module();
         if( m == 0)
         {
             throw string("ERROR: No existe el vector unitario");
         }
         Vector unitario(size);
         for(int i=0; i<size; i++)
         {
             unitario.setElement(i,v.at(i)/m);
         }

         return unitario;
     }

     int getSize()
     {
           return size;
     }

     float getElement(int indice)
     {
         if(indice >= size )
         {
             throw string("ERROR: El indice esta fuera del rango");
         }
         return v.at(indice);

     }

     void print()
     {
         cout << "[";
         for(auto elem:v)
         {
             cout << elem << ",";
         }
         cout << "]" << endl;
     }


private:
     vector <float> v;
     int size;

};

Vector Add(Vector a, Vector b)
{
    Vector suma(a.getSize());

    if( a.getSize() != b.getSize() )
    {
        throw string("ERROR: No se pueden sumar");
    }
    for(int i=0; i < a.getSize(); i++)
    {
        suma.setElement( i, a.getElement(i) + b.getElement(i) );
    }
    return suma;
}

float ScalarMultiply(Vector a, Vector b)
{
    float resultado(0);
    if( a.getSize() != b.getSize() )
    {
        throw string("ERROR: No se puede calcular el producto escalar");
    }
    for(int i=0; i<a.getSize(); i++)
    {
        resultado = resultado+a.getElement(i)*b.getElement(i);
    }
    return resultado;
}

bool SiEsPerpendicular(Vector a, Vector b)
{
    return ( ScalarMultiply(a,b) == 0 );
}

float AnguloEnRadianes(Vector a, Vector b)
{
    float escalar,modulo1,modulo3,angulo;

    if(a.getSize() != 3 || b.getSize() != 3)
    {
        throw string("ERROR: No se puede calcular el angulo");
    }

    escalar=ScalarMultiply(a,b);
    modulo1=a.module();
    modulo3=b.module();
    angulo =acos(escalar/(modulo1*modulo3)); // acos = Arco coseno, qeu es la inversa del coseno.
    return angulo;
}

Vector ProductoVectorial(Vector a, Vector b)
{
    Vector c(3);
    if(a.getSize() != 3 || b.getSize() != 3)
    {
        throw string("ERROR: No se puede calcular el producto vectorial");
    }
    c.setElement(0,a.getElement(1)*b.getElement(2)-b.getElement(1)*a.getElement(2));
    c.setElement(1,a.getElement(2)*b.getElement(0)-b.getElement(2)*a.getElement(0));
    c.setElement(2,a.getElement(0)*b.getElement(1)-b.getElement(0)*a.getElement(1));

    return c;
}

int main()
{
    try
    {
        Vector V1(3);
        Vector V2(3);
        Vector V3(3);
        Vector V4(3);
        Vector V5(3);
        float escalar, angulo;

        cout << "Dime los primeros valores que se te ocurran: " << endl;
        for(int i=0; i<3; i++)
        {
            float aux;
            cin >> aux;
            V1.setElement(i,aux);
        }

        cout << "El vector queda de la siguiente forma: ";
        V1.print(); cout << endl;

        cout << "Su modulo es:  " << V1.module() << endl << endl;
        V2= V1.VectorUnitario();

        cout << "El Vector Unitario es: "<< endl;
        V2.print();
        V3=Add(V1,V2);

        cout << "El vector suma es: "<< endl;
        V3.print();
        escalar=ScalarMultiply(V1,V3);

        cout << "el producto escalar es: " << escalar << endl;
        if ( SiEsPerpendicular(V1,V3) )
        {
             cout << "Vector1 y Vector3 son perpendiculares" << endl;
        }
        else
        {
             cout << "Vector1 y Vector3 no son perpendiculares" << endl;
        }
        angulo = AnguloEnRadianes(V1,V3);
        cout << "El angulo entre Vector1 y Vector3 es: " << angulo << " radianes" << endl;


        cout << "Dime otros nuevos valores: " << endl;
        for(int i=0; i<3; i++)
        {
            float aux;
            cin >> aux;
            V4.setElement(i,aux);
        }
        V5 = ProductoVectorial(V1,V4);

        cout << "El vector perpendicular Vector1 y Vector4 es: "<< endl;
        V5.print();
        angulo = AnguloEnRadianes(V1,V5);
        cout << "El angulo entre Vector1 y Vector5 es: " << angulo << "  radianes" << endl;

    }
    catch(string e)
    {
        cout << e << endl;
        return 0;
    }
}
