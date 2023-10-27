#include <iostream>

using namespace std;

float max(float a, float b, float c){
    if(a < b && c < b){
        return b;
    }

    if(a < c && b < c){
        return c;
    }

    if(b < a && c < a){
        return a;
    }



}

int main()
{
   float a;
   float b;
   float c;

   cout << "Introduce un numero: ";
   cin >> a;

   cout << "Introduce otro numero: ";
   cin >>b;

   cout << "Introduce otro numero: ";
   cin >>c;

   cout << "El maximo es: " << max(a,b,c) << endl;
    return 0;
}
