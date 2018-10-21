#include <iostream>

using namespace std;

int max_3num(int a, int b, int c){

    if(a>b &&  a>c){
        cout << "el mayor de los es es " << a << endl;

    }else{
        if(b>a &&  b>c){
        cout << "el mayor de los es es " << b << endl;
        }
    }if(c>a &&  c>b){
        cout << "el mayor de los es es " << c << endl;
    }
  return 0;
}

int main(void)
{
  int a, b, c;
  cout << "Introduzca un numero entero: " << endl;
  cin >> a;
  cout << "Introduzca un segundo numero entero: " << endl;
  cin >> b;
  cout << "Introduzca un tercer numero entero: " << endl;
  cin >> c;
  max_3num(a ,b, c);


 return 0;
}
