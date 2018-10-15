#include <iostream>
using namespace std;

float getDivisores(int a){
    int b(0);
    for (int i{1}; i <= a; i++)
    {
       if (a%i == 0)
     {
      b=b+i;
     }
}
    cout <<"La suma de sus divisores es " << b << endl;
}


int main(){
    int a(0);
    while (a == 0) {
        cout << "Introduce un numero mayor que 0 " << endl;
        cin >> a;
    }
    getDivisores(a);

}
