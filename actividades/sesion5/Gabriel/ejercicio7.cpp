#include <iostream>

using namespace std;

int main()
{
    int num;
    int counter{-1};/*El contador se inicializa desde -1 para que cuando el
 usuario ponga un cero para parar el programa no se tenga en cuenta para hacer la media*/
    float add{0}, average{0};
    cout << "Introduce numeros enteros e introduce un 0 cuando quieras parar y hare la media de todos" << endl;
    while(num != 0){
    cout << "Introduce a number: ";
    cin >> num;
    counter++;
    add += num;
    average = add / counter;
    }
    cout << "La media de los numeros introducidos es: " << average << endl;
return 0;
}
