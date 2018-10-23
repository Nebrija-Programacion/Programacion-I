#include <iostream>
using namespace std;

void MenorYMayor()
{
    int num;
    int mayor = 0;
    int menor = 0;
    /* Introduce tantos numeros como quieras, escribe 0 para parar y te dira el menor y el mayor de los numeros introducidos */
    /* Ejemplo: 1, 2, 3, 4, 5, 6, 7, 8 y 9, despues escribes 0, el menor es 0 y el mayor es 9 */
    while(num != 0)
    {
        cout << "Dime un numero al azar:" ;
        cin >> num;
        if (num > mayor)
        {
            mayor = num;
        }
        if (num < menor && num != 0)
        {
            menor = num;
        }
    }
        cout << "El menor de los numeros que has introducido es:" << menor << endl;
        cout << "El mayor de los numeros que has introducido es:" << mayor << endl;
}

int main()
{
     MenorYMayor();
     return 0;
}
