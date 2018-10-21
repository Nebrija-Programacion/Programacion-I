#include<stdio.h>
#include <iostream>

using namespace std;

int main(void){

  int i,j, aux, a[5];
  for(i = 0; i < 5; i++){
    cout << "Introduce un numero: ";
    cin >> a[i];
  }

  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
        if(a[j] > a[j + 1]){
            aux = a[j];
            a[j] = a[j + 1];
            a[j + 1] = aux;
        }
    }
  }
  cout << "La mediana es: " << a[2] << endl;
return 0;
}
