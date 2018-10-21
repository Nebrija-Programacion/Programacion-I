#include <iostream>

using namespace std;

class Vector3D{
    public:
    Vector3D(float _x, float _y, float _z){
        x=_x;
        y=_y;
        z=_z;
    }
    Vector3D(Vector3D &a){
        x=a.x;
        y=a.y;
        z=a.z;
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
    void copyFrom(Vector3D a){
        x=a.x;
        y=a.y;
        z=a.z;
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
    Vector3D unVector(x, y, z);
    Vector3D otroVector(unVector);
    cout<<"El vector es: "<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
