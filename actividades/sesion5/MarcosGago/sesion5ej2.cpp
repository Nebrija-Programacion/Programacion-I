#include <iostream>

using namespace std;

int Mayor(int a, int b){
    if (a<b){
        return b;
    }
    else if (a>b){
        return a;
    }
    else if(a==b){
        cout<<"Deben ser numeros distintos"<<endl;
    }
}
int main()
{
    unsigned int a, b;
    cout<<"Introduce dos numeros"<<endl;
    cin>>a;
    cin>>b;
    cout<<"El mayor es: "<<Mayor(a,b)<<endl;

    return 0;
}

