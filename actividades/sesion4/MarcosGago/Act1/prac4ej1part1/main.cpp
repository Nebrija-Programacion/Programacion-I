#include <iostream>
#include <math.h>

using namespace std;

class Vector3D{
    public:
    Vector3D(float _x, float _y, float _z){
        x=_x;
        y=_y;
        z=_z;
    }
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    float getZ(){
        return z;
    }
    void getCoordinates(float &a, float &b, float &c){
        a=x;
        b=y;
        c=z;
    }
    float Module(){
        return sqrt(x*x+y*y+z*z);
    }
    void Scalar(float a){
        x=a*x;
        y=a*y;
        z=a*z;
        cout<<"x*"<<a<<"= "<<x<<endl;
        cout<<"y*"<<a<<"= "<<y<<endl;
        cout<<"z*"<<a<<"= "<<z<<endl;
    }
    void add(Vector3D a){
        x=x+a.x;
        y=y+a.y;
        z=z+a.z;
        cout<<"El vector suma es: "<<x<<", "<<y<<", "<<z<<endl;
    }
    void multiplyBy(Vector3D b){
        x=x*b.x;
        y=y*b.y;
        z=z*b.z;
         cout<<"El vector producto es: "<<x<<", "<<y<<", "<<z<<endl;
    }
    private:
        float x, y, z;
};

int main()
{
    float x, y, z;
    cout<<"Introduce el valor de x"<<endl;
    cin>>x;
    cout<<"Introduce el valor de y"<<endl;
    cin>>y;
    cout<<"Introduce el valor de x"<<endl;
    cin>>z;

    Vector3D MiVector(x, y, z);
    cout<<"El modulo es: "<<MiVector.Module()<<endl;
    cout<<"Introduce tu escalar"<<endl;
    float esc;
    cin>>esc;
    MiVector.Scalar(esc);
    cout<<"Introduce las coordenadas de un vector para sumarlo"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    Vector3D TuVector1(x, y, z);
    MiVector.add(TuVector1);
    cout<<"Introduce las coordenadas de un vector para sumarlo"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    Vector3D TuVector2(x, y, z);
    MiVector.multiplyBy(TuVector2);
    return 0;
}
