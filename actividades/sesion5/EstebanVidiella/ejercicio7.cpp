#include <iostream>

using namespace std;



int main(void)
{
  float a, suma, opc, i, media;
  i=0;
  suma=0;
  opc=0;
  while(opc!=1 ){
      opc=0;
      cout << "\nIntroduzca un numero entero: " << endl;
      cin >> a;
      suma=suma+a;
      i++;
      cout << "Desea introducir otro numero? Si desea parar introduzca 1, sino cualquier otro numero" << endl;
      cin >> opc;
  }
  media=suma/i;
  cout << "la suma total de los numeros introducidos es: " << media << endl;




 return 0;
}
