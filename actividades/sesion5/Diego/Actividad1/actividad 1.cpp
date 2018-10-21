#include <iostream>

using namespace std;

bool esDivi(unsigned int a, unsigned int b){

    if ((b % a)== 0) return true;
   else {
       return false;
   }
}

int main()
{
    unsigned int c,d;

    cout << "Número mayor que 0: " << endl; cin >> c;
    cout << "Número mayor que 0: " << endl; cin >> d;

    if(esDivi(c,d)){
        cout << "Verdadero" << endl;
    }else{
        cout << "Falso" << endl;
    }
    return 0;
}
