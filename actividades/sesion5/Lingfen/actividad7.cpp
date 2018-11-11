#include <iostream>
using namespace std;

void Media()
{
    int num = 0, a, b = 0;
    /* Introduce tantos numeros como quieras, escribe 0 para parar y te dara la media de los numeros introducidos */
    /* Ejemplo: 1, 2, 3, 4, 5, 6, 7, 8 y 9, despues escribes 0, y la media de todos ellos es 5 */
    cout << "Dime un numero al azar:" ;
    cin>>a;
    while(a != 0)
    {
        num = num + a;
        b = b + 1;
        cout << "Dime un numero al azar:" ;
        cin>>a;
    }
        cout << "La media de los numeros que has introducido es: " << num/b << endl;
}

int main()
{
     Media();
     return 0;
}
