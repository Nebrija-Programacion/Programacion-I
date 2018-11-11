#include <iostream>
#include <string>

using namespace std;

void paradaMaxMin(string parada, int a){
    int cont{0};
    int max=0, min=0;
    cout << "Introduce un numero: " << endl;

    while(parada != "basta"){
        cout << "Dame un numero ";
        cin >> a;
        cont++;
        cout << "Si desea salir escriba basta, si no no" << endl;
        cin >> parada;

        if (cont == 1){
            max = a;
            min = a;
        }else{
            if(a < min){
                min = a;
            }
            if(a > max){
                max = a;
            }
        }
    }
    cout << "El maximo es " << max << endl;
    cout << "El minimo es " << min << endl;
}
int main()
{
    float a;
    string parate;
    paradaMaxMin(parate,a);
    return 0;
}
