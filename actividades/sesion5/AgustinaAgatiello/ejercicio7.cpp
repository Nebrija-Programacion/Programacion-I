#include <iostream>

using namespace std;

void hallarMedia(){
    float suma{0}, a, b{0};

    cout << "Introduce un numero. Escribe 0 para parar: ";
    cin>>a;

    while(a!=0){
        suma = suma + a;
        b = b + 1;

        cout << "Introduce un numero. Escribe 0 para parar: ";
        cin>>a;

    }
        cout << "La media es: " << suma/b << endl;
}

int main()
{
    hallarMedia();

    return 0;
}
