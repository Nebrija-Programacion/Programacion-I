#include <iostream>

using namespace std;

float max(float a ,float b ,float c){
if (a < b && c < b){return b;}
if (a < c && b < c){return c;}
if (b < a && c < a){return a;}};

int main()
{
float  a,b,c;

    cout << "introduce 3 numeros " << endl; cin >> a; cin >> b; cin >> c;
cout << "el maximo es: " << max(a,b,c) << endl;



}
