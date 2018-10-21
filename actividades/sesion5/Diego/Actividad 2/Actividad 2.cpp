#include <iostream>

using namespace std;

bool esDivi(unsigned int a, unsigned int b){

    if ((b > a)) return true;
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
        cout << "El 2 es > el 1" << endl;
    }else{
        cout << "El 1 es > el 2" << endl;

return 0;
    }
}
