#include <iostream>

using namespace std;

int main()
{
  int num{-1},suma{0};
  while(num != 0){
    cout << "Introduce un numero distinto de 0 para seguir sumando: ";
    cin >> num;
    suma += num;
    cout << "La suma total es: " << suma << endl;
  }
  cout << "Ok, se acabo. " << endl;
  return 0;
}
