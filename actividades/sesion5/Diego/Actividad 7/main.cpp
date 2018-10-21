#include <iostream>

using namespace std;

void sacarMedia(){
    float sum{0}, a, b{0};
    cout << "Dime un numero, para parar pon 0: "; cin>>a;
    while(a!=0){
        sum = sum + a;
        b = b + 1;
        cout << "Dime un numero, para parar pon 0: "; cin>>a;
    }
        cout << "La media es: " << sum/b << endl;
}

int main()
{
    sacarMedia();

    return 0;
}
