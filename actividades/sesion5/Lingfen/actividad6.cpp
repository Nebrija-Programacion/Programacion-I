#include <iostream>
using namespace std;

void StopAdd()
{
    int a = 1, num = 0;
    while(a != 0)
    {
        /* Introduce tantos numeros como quieras y para parar escribe 0, despues se sumaran los numeros que has escrito */
        /* Ejemplo: introduces 1, 2, 3, 4, 5, 6, 7, 8 y 9, despues escribes 0 y la suma de todos ellos da 45 */

        cout << "Dime un numero al azar:";
        cin >> a;
        num = num + a;
    }
     cout << "La suma de los numeros que has introducido son:" << num << endl;
}

int main()
{
    StopAdd();
     return 0;
}
