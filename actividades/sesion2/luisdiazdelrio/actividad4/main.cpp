#include <iostream>

using namespace std;


int main(){

int num;

cout << "Introduce un número: ";
cin >> num;

int factorial{2};

for(int contador{num}; contador > 1; contador--){
    factorial = factorial * contador;
}

cout << "El factorial vale " << factorial << endl;

return 0;

}
