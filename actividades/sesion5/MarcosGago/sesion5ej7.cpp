#include <iostream>

using namespace std;

void Media(int a){
    float media{0};
    int i{0};
    float b{0};
    while (i<a){
        cout<<"Escribe un numero"<<endl;
        cin>>b;
        media=(media+b);
        i++;
    }
    media=media/(i);
    cout<<"La media es "<<media<<endl;
}
int main()
{
    int a;
    cout<<"Escribe la cantidad de numeros que deseas introducir"<<endl;
	cout<<"y despues te mostrare la media de todos ellos"<<endl;
    cin>>a;
    Media(a);
    return 0;
}
