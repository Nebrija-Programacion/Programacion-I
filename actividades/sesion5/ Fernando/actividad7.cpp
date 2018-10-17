#include <iostream>

using namespace std;
float getSuma(unsigned int a, unsigned int b){
    return a+b;
}
float getMedia(unsigned short a,unsigned short n){
    return a/n;
}


int main()
{
int a;
int b;
int n(2);
cout << "Introduce tus dos  primeros numeros: "<< endl;
cin >>a;
cin >> b;

while (b > 0) {
    a = getSuma(a,b);
    cout <<" Escribe mas numeros para aumentar tu cifra o pon |basta| para parar: " << endl;
    cin >>b;
    n = n +1;

}
n = n - 1;
cout << "Tu cifra total es: " << a << " y la media es: " << getMedia(a,n) << endl;
}
