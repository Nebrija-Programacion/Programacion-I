#include <iostream>

using namespace std;


// Realizar una función que tome como parámetros dos números enteros y devuelva verdadero o falso si el primer parámetro es divisible por el segundo



bool Divisible ( unsigned int x , unsigned int y ){
    if ( x % y == 0){
        return true;
    } else {
        return false ;
    }
}
int main()
{
   if ( Divisible( 12 , 4)){
       cout << " si es divisible " << endl;
   } else {
       cout << " no es divisible " << endl;
   }

    return 0;
}
