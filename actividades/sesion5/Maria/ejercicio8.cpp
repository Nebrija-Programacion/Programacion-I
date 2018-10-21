#include <iostream>
#include <cmath>

using namespace std;

int *sumatoria;

int main()
{
     float media= 0;
     int cantidad;
     float varianza= 0;


     cout<<"===========PROGRAMA PARA CALCULAR LA DESVIACION TIPICA==========" << endl;
     cout<<"Cuantos numeros son? ";
     cin>>cantidad;

     sumatoria = new int[cantidad];

     for(int i= 0;i < cantidad;i++)
     {
        cout<<"Introduce el numero "<<i+1<<":  ";//se pide los datos comenzando desde el primero
        cin>>sumatoria[i];
    }

    for(int e = 0;e < cantidad;e++)
    {
         media = media + sumatoria[e];//se hace la sumatoria y se guarda los valores
    }

    media = media / cantidad;

    system("cls");


    for(int k = 0;k < cantidad;k++)
    {
         varianza = varianza + (((sumatoria[k])-(media))*((sumatoria[k])-(media)));
         /*se hace la sumatoria del cuadrado de sumatoria - media*/
    }
    varianza = varianza / cantidad;//se hace la divicion de la suma anterior con la cantidad

    cout<<"La desviacion tipica aproximada es: " << sqrt(varianza) << endl;

    return 0;
}
