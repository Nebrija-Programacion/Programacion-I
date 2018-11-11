#include <iostream>

using namespace std;
float esMax(float a, float b, float c){
    if((a > b) && (a>c)){
        return a;
    }else if ((b > a) && (b > c)) {
        return b;
    }else {
        return c;
    }
    }


int main()
{
float a;
float b;
float c;
cout << "Introduce tres numeros: " << endl;
cin >> a;
cin >>b;
cin >> c;
cout << "El mayor de los tres numeros es: " << esMax(a,b,c) << endl;
return 0;
}
