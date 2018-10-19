#include <iostream>

using namespace std;

int main(){

    float num,num2,num3,var{-1},med,i{-1};

  cout << "Este programa te dira la mediana de la serie." << endl;

  while(var!=0){
      cout << "Introduce un numero: " << endl;
      cin >> num;
      if(num>med){
          med=num;
      }
      cout << "Introduce un numero: " << endl;
      cin >> num2;
      if(num2>num){
          num=med;
      }
      cout << "Introduce un numero: " << endl;
      cin >> num3;
      if(num3>med){
          med=num2;
      }
      if(num3<med){
          med=num3;
      }
      cout << "Introduce 0 para acabar la serie." << endl;
      cout << "Introduce cualquier numero para continuar." << endl;
      cin >> var;
      i++;
  }
  cout << "La mediana es: " << med << endl;
  return 0;
}
