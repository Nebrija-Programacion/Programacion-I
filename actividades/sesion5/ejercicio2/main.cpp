#include <iostream>

using namespace std;

int Max2Num ( int x , int y ){
    if ( x > y ){
        return x ;
    } else {
        return y ;
    }
}
int main()
{
   if (Max2Num( 78 , 534) ){
       cout << " El mayor es " << Max2Num( 78 , 534) <<endl;
   } else {
       cout << " el segundo numero es el mayor " << Max2Num( 78 , 534)<< endl;
   }
    return 0;
}
