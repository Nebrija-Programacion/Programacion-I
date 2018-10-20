#include <iostream>

using namespace std;

bool esDivisible(unsigned int a, unsigned int b){
    if (a%b==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    unsigned int a, b;
    cout<<"Introduce dos numeros"<<endl;
    cin>>a;
    cin>>b;
    esDivisible(a,b);
    if(esDivisible(a,b)){
        cout<<"El primero es divisble por el segundo"<<endl;
    }
        else{
             cout<<"El primero no es divisible por el segundo"<< endl;
    }
    return 0;
}
