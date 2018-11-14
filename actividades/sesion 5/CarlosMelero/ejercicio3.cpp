#include <iostream>

using namespace std;

float max(float a, float b, float c){
    if(a<b && c<b){
        return b;
    }
    if(a<c && b<c){
        return c;
    }
    if(b<a && c<a){
        return a;
    }
}


int main()
{
    float a{0};
    float b{0};
    float c{0};

    cout << "Introduce un numero mayor que 0: " << endl;
    cin>>a;
    cout<<"Introduce un numero mayor que 0: "<<endl;
    cin>>b;
    cout<<"Introduce un numero mayor que 0: "<<endl;
    cin>>c;

    cout<<"El maximo es: "<<max(a,b,c)<<endl;
    return 0;
}
