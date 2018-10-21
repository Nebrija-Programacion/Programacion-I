#include <iostream>

using namespace std;

int sum(int a){
    int res;
    res=0;
    for(int i{1};i<a;i++){
        if(i % 3 == 0)
        res=res+i;
    }
  return res;
}

int main(void)
{
  int a;
  cout << "Introduzca un numero entero: " << endl;
  cin >> a;

  cout << "la suma total es: " << sum(a) << endl;

 return 0;
}
