#include <iostream>

using namespace std;

bool divisible(unsigned short int a, unsigned short int b){
    if(a % b){
        return true;
    }else{
        return false;
    }
}



int main()
{
    int a;
    int b;

 cout << "Introduce un numero: ";
 cin >>a;

 cout << "Introduce otro numero: ";
 cin >>b;

 if((a/b)>=1){
    cout << "Es divisible, por lo tanto es Verdadero" << endl;

 }else{
    cout << "No son divisibles, por lo tanto es Falso" << endl;
 }

    return 0;
}
