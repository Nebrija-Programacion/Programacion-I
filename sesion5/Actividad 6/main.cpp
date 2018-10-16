#include <iostream>

using namespace std;

int main()
{
    int x; 
    int y; 
    int z; 

    cout << "Dime un número: " << endl;
    cin >> x;
    y=1; 
    for (z=2;z<=(x/2);z++) {
        if (x%z==0) {
            y=y+z;
        }
    }
    y=y+x;
    cout << "La suma de sus divisores es:  " << x << " ES: " << y << endl;

    return 0;
}
