#include <iostream>

using namespace std;

bool divideby(int a, int b){
    if(a%b == 0){
        cout << "verdadero" << endl;
    }else{
        cout << "falso" << endl;
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
  divideby(a ,b);

 return 0;
}
