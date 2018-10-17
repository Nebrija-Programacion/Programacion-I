#include <iostream>

using namespace std;
float getSuma(unsigned int a, unsigned int b){
    return a+b;
}


int main()
{
int a;
int b;
cout << "Introduce tu primera suma: "<< endl;
cin >>a;
cin >> b;
while (b > 0) {
    a = getSuma(a,b);
    cout <<"Tu suma es: " << a << " si quieres seguir sumando pon otra cifra " << endl;
    cin >>b;
}
cout << "Tu suma final es: " << a << endl;
return 0;
}
