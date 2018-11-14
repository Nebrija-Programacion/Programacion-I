#include <iostream>

using namespace std;

void pararSuma(){
    float a{1}, suma{0};
    while(a != 0){

        cout << "Introduce un numero. Escribe 0 para parar: ";
        cin >> a;

        suma = suma + a;
      }
     cout << "La suma total es: " << suma << endl;
}

int main()
{
    pararSuma();

    return 0;
}
