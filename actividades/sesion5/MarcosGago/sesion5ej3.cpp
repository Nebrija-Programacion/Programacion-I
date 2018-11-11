#include <iostream>

using namespace std;

int Mayor(int a, int b, int c){
    if (a<b){
        if(b<c){
            return c;
        }
        else if (b>c) {
            return b;
        }
        else if (b==c){
            throw string{"Hay al menos dos numeros iguales"};
        }
    }
    else if (a>b){
        if (a<c){
            return c;
        }
        else if (a>c){
            return a;
        }
        else if (a==c){
            throw string{"Hay al menos dos numeros iguales"};
        }

    }
    else if (a==b){
        throw string{"Hay al menos dos numeros iguales"};
    }
}
int main()
{
    try{
    unsigned int a, b, c;
    cout<<"Introduce tres numeros"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"El mayor es: "<<Mayor(a,b,c)<<endl;
    return 0;
    }catch (string  e){
        cout<<e<<endl;
    }
    return 0;
}

