#include<iostream>

using namespace std;

    int main()
    {
    float suma=0,num,i=0;
    cout << "Introduce un numero distinto de 0 para obtener la media: ";
    cin>>num;
    while(num!=0){
        suma+=num;
        i+=1;
        cout << "Introduce un numero distinto de 0 para obtener la media: ";
        cin>>num;
    }
    cout << "Te dije distinto de 0." << endl;
    cout << "La media es: " << suma/i << endl;
    return 0;
}


