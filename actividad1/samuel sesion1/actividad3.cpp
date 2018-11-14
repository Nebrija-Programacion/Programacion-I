#include <iostream>
using namespace std;
class Adolescente{
public:
    Adolescente(string _nombre, short int _edad, short int _altura, short int _weight){
        nombre = _nombre;
        edad = _edad;
        altura = _altura;
        peso = _weight;
    }
    string nombre;
    short int edad;
    short int altura;
    short int peso;
};
int main(){
    string nombre;
    short int edad;
    short int altura;
    short int peso;
    cout << "Introduzca su nombre: ";
    cin >> nombre;
    cout << "Introduzca su edad: ";
    cin >> edad;
    if (edad<= 0){
        cout<<"Edad demasiado baja"<<endl;
        return 1;
    } else if (edad >= 150){
        cout<<"Edad demasiado alta"<<endl;
        return 1;
    }
    cout << "Introduzca su peso en kg: ";
    cin >> peso;
    if (peso<=0){
        cout<<"El peso es demasiado bajo"<<endl;
        return 2;
    } else if (peso>=200){
        cout<<"El peso es demasiado alto"<<endl;
        return 2;
    }
    cout << "Introduzca su altura en cm: ";
    cin >> altura;
    Adolescente p(nombre, edad, peso, altura);
        cout << "nombre: "<< p.nombre<< endl;
        cout << "edad: "<< p.edad << endl;
        cout << "altura: "<< p.peso <<endl;
        cout << "peso: "<< p.altura <<endl;
}
