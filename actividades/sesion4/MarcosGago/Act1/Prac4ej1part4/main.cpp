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
    cout<<"Introduce el valor de x del pimer vector"<<endl;
    cin>>x;
    cout<<"Introduce el valor de y del primer vector"<<endl;
    cin>>y;
    cout<<"Introduce el valor de z del primer vector"<<endl;
    cin>>z;
    Vector3D MiVector1(x, y, z);
    cout<<"Introduce el valor de x del segundo vector"<<endl;
    cin>>x;
    cout<<"Introduce el valor de y del segundo vector"<<endl;
    cin>>y;
    cout<<"Introduce el valor de z del segundo vector"<<endl;
    cin>>z;
    Vector3D MiVector2(x, y, z);
    cout<<"Introduce el valor de x del segundo vector"<<endl;
    cin>>x;
    cout<<"Introduce el valor de y del segundo vector"<<endl;
    cin>>y;
    cout<<"Introduce el valor de z del segundo vector"<<endl;
    cin>>z;
    Vector3D MiVector3(x, y, z);
    cout<<"El modulo es: "<<MiVector1.Module()<<endl;
    cout<<"El modulo es: "<<MiVector2.Module()<<endl;
    cout<<"El modulo es: "<<MiVector3.Module()<<endl;
    cout<<"El resultado del primer vector por el segundo es: "<<endl;
    MiVector1.multiplyBy(MiVector2);
    cout<<"El resultado del segundo vector mas el tercero es: "<<endl;
    MiVector2.add(MiVector3);
    return 0;
}
