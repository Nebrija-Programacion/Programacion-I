#include <iostream>
using namespace std;
bool esMayorcito(int _a, int _b)
{
if(_a>_b)
{
    return true;
}
else
{
    return false;
}
}

int main()
{
int a;
int b;
cout<<"Introduzca el valor de a"<<endl;
cin>>a;
cout<<"Introduzca el valor de b"<<endl;
cin>>b;
if(esMayorcito(a, b))
{
    cout<<"El mayor es: "<<a<<endl;
}
else
{
    cout<<"El mayor es: "<<b<<endl;
}
return 0;
}
