// semifactorial de un numero

#include <iostream>

using namespace std;

int semifactorial(int num){
    int result{1};
    for(int i{num}; i>0; i-=2){
        result *= i;
    }
    return result;
}

int main()
{
    cout << "Introduce un numero" << endl;
    int n; cin >> n;
    cout << "El semifactorial de " << n << " es " << semifactorial(n) << "\n";
    return 0;
}
