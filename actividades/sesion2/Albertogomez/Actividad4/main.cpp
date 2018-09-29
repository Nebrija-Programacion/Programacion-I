#include <iostream>

using namespace std;

int main()
{
int num, i, count;

while(num!=0){
    cout << "Introduzca un numero: ";
    cin >> num;

for(i=1 ; i<(num+1) ; i++){

if(num%i==0){
    count++;
        }
    }

if(count!=2){
    cout << "Este no es primo." << endl;
    }else{
    cout << "Este es primo." << endl;
    }
    count=0;
    }

return 0;
}
