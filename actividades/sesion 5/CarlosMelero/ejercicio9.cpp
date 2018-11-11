#include <iostream>
 using namespace std;
 int main(){
   float num,num2{-1},max, min,i{-1};
   while(num2!=0){
      num2=-1;
      cout << "Introduce un numero: " << endl;
      cin >> num;
      cout << "Para parar escribe 0" << endl;
      cout << "Introduce otro numero para continuar" << endl;
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
  cout << "El numero mayor es: " << max << endl;
  cout << "El numero menor es: " << min << endl;
  return 0;
}
