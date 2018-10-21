#include <iostream>

using namespace std;

bool esDivisible(unsigned int a, unsigned int b){

   if ((b > a)) return true;
   else {
       return false;
   }

}


int main()
{
    unsigned int q,p;
    cout << "Introduce un numero mayor que 0: " << endl;
    cin >> q;

    cout << "Introduce otro numero mayor que 0: " << endl;
    cin >> p;

    if(esDivisible(q,p)){
        cout << "El segundo es mayor que el primero" << endl;
    }else{
        cout << "El primero es mayor que el segundo" << endl;
return 0;
    }
}
