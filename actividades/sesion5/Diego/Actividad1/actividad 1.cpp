#include <iostream>

using namespace std;


//bool divisible(int num1, int num2){if (num1 % num2){return true;}else{return false;}}

int main()
{
 int a{0};
 int b{0};

 while(a <= 0) {
    cout << "Introduce un num mayor que 0 : " << endl; cin >> a;

 }
 while(b <= 0) {
    cout << "Introduce otro num mayor que 0 : " << endl; cin >> b;

 }
if ((a/b) >=1) {cout << "es divisible" << endl; }else{cout <<"no es divisible" << endl;}
//bool divisible(int a, int b);if (true ){cout << " es divisible ";}else{ cout << "no divisible"; }



return 0;
}
