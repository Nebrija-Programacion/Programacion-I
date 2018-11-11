#include <iostream>

using namespace std;

float max(float a, float b, float c){
   if((a > b) && (a > c)){ return a;}
   if((b > a) && (b > c)) {return b;}

else{
return c;
}
}


int main()
{

    cout << "Introduce tres números" << endl;
    float a,b,c;
cin >> a;
cin >> b;
cin >> c;

    cout << "El maximo es " << max(a,b,c) << endl;


    return 0;
}
