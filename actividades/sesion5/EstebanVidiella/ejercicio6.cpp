#include <iostream>

using namespace std;



int main(void)
{
  int a, suma, opc;

  suma=0;
  opc=0;
  while(opc!=1 ){
      opc=0;
      cout << "\nIntroduzca un numero entero: " << endl;
      cin >> a;
      suma=suma+a;
      cout << "Desea introducir otro numero? Si desea parar introduzca 1, sino cualquier otro numero" << endl;
      cin >> opc;
  }
  cout << "la suma total de los numeros introducidos es: " << suma << endl;




 return 0;
}
