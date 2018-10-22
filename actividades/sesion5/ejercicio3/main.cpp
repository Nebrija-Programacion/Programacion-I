#include <iostream>

using namespace std;

int Max2Num ( int x , int y, int z){
    if (( x > y) && (x > z) ){
            return x ;
    } if ( (y > x) && ( y > z )) {
            return y ;
    } if ( (z > x) && ( z > y ) ){
            return z ;
    }

};
int main()
{
   if (Max2Num( 78 , 534 , 45) ){
       cout << "  el mayor es " << Max2Num( 78 , 534 , 45) <<endl;
   }
       return 0;
};
