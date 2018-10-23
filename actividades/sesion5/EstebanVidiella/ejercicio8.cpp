#include <iostream>

using namespace std;



int main(void)
{
  float a,opc,mayor, menor,i;
  opc=0;
  mayor=0;
  i=0;
  while(opc!=1 ){
      opc=0;
      cout << "\nIntroduzca un numero entero: " << endl;
      cin >> a;
      cout << "Desea introducir otro numero? Si desea parar introduzca 1, sino cualquier otro numero" << endl;
      cin >> opc;
      if(i==0){
          menor=a;
          mayor=a;
      }if(a>mayor)
          mayor=a;
      if(a<menor)
          menor=a;
      i++;

  }

  cout << "el mayor numero introducido es: " << mayor << endl;
  cout << "el menor numero introducido es: " << menor << endl;




 return 0;
}
