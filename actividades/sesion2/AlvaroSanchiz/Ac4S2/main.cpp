#include <iostream>

using namespace std;

int main()
{
    int a=0, i, num;
    cout << " Introduce un numero : ";
    cin >>num;

    for (i=1; i < (num+1); i++){
            if (num % i == 0){
                a++;
            }
        }

    if (a !=2){
        cout << " Te has equivocado... ese no es primo" << endl;
    }else{
        cout << " Ese vale sí " << endl;
    }




    return 0;
}
