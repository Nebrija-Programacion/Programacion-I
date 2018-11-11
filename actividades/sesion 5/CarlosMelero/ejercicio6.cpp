#include <iostream>
 using namespace std;
 void para(){
    float a{1}, suma{0};
    while(a != 0){
         cout << "Introduce un numero. Escribe 0 para parar: ";
        cin >> a;
         suma = suma + a;
      }
     cout << "La suma seria: " << suma << endl;
}
 int main()
{
    para();
     return 0;
}
