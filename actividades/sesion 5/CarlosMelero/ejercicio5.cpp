#include <iostream>
 using namespace std;
 int suma(int a){
    int suma{0};
    for (int i{1}; i<=a; i++){
        if (a%i == 0){
            suma = suma + i;
        }
    }
    return suma;
}
 int main()
{
    int a;
     cout << "Introduce un numero: ";
    cin >> a;
     cout << "La suma es : " << suma(a) << endl;
     return 0;
}
