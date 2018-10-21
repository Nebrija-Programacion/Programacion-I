#include <iostream>

using namespace std;

int main()
{
    int a{0};
    int b{0};

    cout<<"Introduce un numero mayor que 0: ";
    cin>>a;
    cout<<"Introduce un numero mayor que 0: ";
    cin>>b;

    if(a%b == 0){
        cout<<"Es divisible "<<endl;


    }else{
        cout<<"No es divisible "<<endl;
    }
    return 0;
}
