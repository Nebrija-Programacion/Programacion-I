#include <iostream>

using namespace std;

int main(){

    int num, i, h;

    while(num != 0){

        cout << "Introduce un numero: ";
        cin >> num;

        for(i = 1; i <(num+1); i++){

            if(num%i==0){
                h++;
            }
        }

        if(h!=2){
            cout << "No es un numero primo" << endl << endl;

        }else{
            cout << "Si es un numero primo" << endl << endl;
        }
        h=0;
    }
    return 0;
}
