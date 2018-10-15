#include <iostream>

using namespace std;
bool esMayor(int _num, int _num2){
    if(_num > _num2){
        return true;
    }else {
        return false;
    }
}

int main()
{
int a;
int b;
    cout <<"Introduce un valor para a  " << endl;
    cin >> a;
    cout <<"Introduce un valor para b  " << endl;
    cin >> b;
    if (esMayor(a,b)){
        cout << "El mayor es " << a << endl;
    }else {
        cout << "El mayor es " << b << endl;
    }
return 0;
}
