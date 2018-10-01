#include <iostream>

using namespace std;

int main(){
    int x=0, y=1, z=1;

    cout << "These are the twenty first Fibonacci numbers. Enjoy it!" << endl;

    cout << "1" << endl;
    for (int i = 1; i < 20; ++i) {
        z = x + y ;
        cout << z << endl;
        x = y;
        y = z;
    }
}
