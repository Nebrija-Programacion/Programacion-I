#include <iostream>

using namespace std;
float esMayor(int _num, int _num2){
    if(_num > _num2){
         cout << "El mayor es: "<< _num << endl;
    }else {
         cout << "El mayor es: "<< _num2 << endl;
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
esMayor(a,b);
return 0;
}
