#include <iostream>

using namespace std;

int main(){

  float num,num2{-1},max, min,i{-1};

  cout << "Este programa te dira el numero mayor y menor de la serie." << endl;

  while(num2!=0){
      num2=-1;
      cout << "Introduce un numero: " << endl;
      cin >> num;
      cout << "Introduce 0 para acabar la serie." << endl;
      cout << "Introduce cualquier numero para continuar." << endl;
      cin >> num2;
      if(i==-1){
      min=num;
      max=num;
      }if(num>max)
      max=num;
      if(num<min)
      min=num;
      i++;
  }
  cout << "El mayor es: " << max << endl;
  cout << "El menor es: " << min << endl;
  return 0;
}
