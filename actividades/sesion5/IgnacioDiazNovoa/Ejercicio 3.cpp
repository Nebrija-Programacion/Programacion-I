#include <iostream>
using namespace std;
float esMayorcito(float _a, float _b, float _c)
{
if((_a>_b)&&(_a>_c))
{
    return _a;
}
if((_b>_a)&&(_b>_c))
{
    return _b;
}
if((_c>_a)&&(_c>_b))
{
    return _c;
}
}

int main()
{
float a;
float b;
float c;
cout<<"Introduzca el valor de a"<<endl;
cin>>a;
cout<<"Introduzca el valor de b"<<endl;
cin>>b;
cout<<"Introduzca el valor de c"<<endl;
cin>>c;
cout<<"El valor que es mayor es: "<<esMayorcito(a, b, c);
return 0;
}
