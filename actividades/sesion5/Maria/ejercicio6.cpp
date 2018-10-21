#include <iostream>
using namespace std ;
float numero,contador=0,suma;
int main ()
{
cout << "introduce un numero: " ;
cin >> numero;
while (numero != 0)

{
suma= suma + numero;
contador=contador+1 ; // contador
cout << "Introduce un numero: " ;
cin >> numero;
}


cout<< "La suma de todos los numeros es: "<< suma <<" ";

return 0;
}
