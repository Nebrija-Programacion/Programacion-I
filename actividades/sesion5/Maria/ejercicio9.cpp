#include <iostream>

using namespace std;

 int main() {
    int num, mayor=0,menor,contador=1;

    cout <<"     Para parar introduce un 0" << endl;
    do {
        cout << "  " << endl;
        cout << "Introduce un numero: " ;
         cin >> num;
         if (num > mayor)
            mayor=num;
         if ((num >= 1) && ((num < menor) || (contador == 1)))
            menor=num;
         contador++;
    } while ((contador <= 999999999) && (num >0 ));

    cout << "  " << endl;
    cout << "============================================================" << endl;
    cout << "   " << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
 }
