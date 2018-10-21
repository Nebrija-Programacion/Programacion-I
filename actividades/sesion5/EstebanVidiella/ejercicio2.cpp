#include <iostream>

using namespace std;

bool max_min(int a, int b){
    if(a<b){
        cout << b << " es mayor que " << a << endl;
    }else{
        cout << a << "es mayor que " << b << endl;
    }
  return 0;
}

int main(void)
{
  int a, b;
  cout << "Introduzca un numero entero: " << endl;
  cin >> a;
  cout << "Introduzca un segundo numero entero: " << endl;
  cin >> b;
  max_min(a ,b);

 return 0;
}
