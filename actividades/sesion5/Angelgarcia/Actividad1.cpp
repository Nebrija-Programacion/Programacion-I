#include <iostream>
 using namespace std;
 bool Divisible( int x, int y){
    if(x % y == 0 )
    {

         cout <<  "Verdadero" << endl;
    }
    else
    {

        cout << "Falso" << endl;
    }
}
 int main()
{
    int x;
    int y;
    cout << "Comprobemos si son divisibles!" << endl;

  cout << "Introduce un numero: ";
 cin >>x;
  cout << "Introduce otro numero: ";
 cin >>y;

 Divisible(x,y);

     return 0;
}
