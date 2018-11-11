#include <iostream>

using namespace std;

float max(float a, float b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main()
{
    int a{0};
    int b{0};

    cout<<"Introduce un numero mayor que 0: ";
    cin>>a;
    cout<<"Introduce un numero mayor que 0: ";
    cin>>b;

    cout<<"El numero mayor es "<<max(a,b)<<endl;

    return 0;

}
