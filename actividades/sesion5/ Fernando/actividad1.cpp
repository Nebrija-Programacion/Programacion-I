#include <iostream>

using namespace std;
bool esDivisor(unsigned short int _num, unsigned short int _num2){
    for (int i ={1}; i < _num/_num2;i++){
        if ((_num % _num2) == 0)return true;
    }
    return false;
}

int main()
{
int a(0);
int b(0);
while (a <= 0) {
    cout << "Introduce un numero mayor que 0 " << endl;
    cin >> a;
}
while (b <= 0) {
    cout << "Introduce un numero mayor que 0 " << endl;
    cin >> b;
}
if(esDivisor(a, b)){
    cout << "Es divisible " << endl;
}else {
    cout << "No es divisible" << endl;
}
return 0;
}
