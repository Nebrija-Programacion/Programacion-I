#include <iostream>

using namespace std;

int main()
{
    int a{0};
    while(a<=0){
        cout << "Introduce un numero" << endl;
        cin >> a;
    }
    int sum;
    sum =0;
    while (a>0){
        if (a%3==0){
            sum= sum+a;
        } else {sum=sum;}
        a=a-1;
    }
    cout << " La suma de los numeros menores divisibles entre 3 es " << sum << endl;;
    return 0;
}
