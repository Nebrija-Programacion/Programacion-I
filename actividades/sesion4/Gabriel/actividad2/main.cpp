#include <iostream>

using namespace std;

class ComplexNumber{
public:
    ComplexNumber (float _r, float _i){
        real = _r;
        imaginary = _i;
        }
    void getNumber(float &r, float &i){
        r = real;
        i = imaginary;
    }
    void multiplyBy(float r, float i){
        real = real*r;
        imaginary = imaginary*i;
    }
    void add(float r, float i){
        real = real+r;
        imaginary = imaginary+i;
    }
private:
    float real, imaginary;
};

int main(){

    float real;
    float imaginary;

    cout << "Introduce your complex number:" << endl;
    cout << "Introduce the real part: "; cin >> real;
    cout << "Introduce the imaginary part: "; cin >> imaginary;

    ComplexNumber myComplex{real,imaginary}; // Numero con el que se van a realizar las operaciones con los atributos introducidos anteriormente

    myComplex.add(2,3);

    myComplex.getNumber(real, imaginary);
    cout << "The complex number is: " << real << " + " << imaginary << " * i" << endl;

    myComplex.multiplyBy(2,5);
    myComplex.getNumber(real, imaginary);
    cout << "The complex number is: " << real << " + " << imaginary << " * i" << endl;

    return 0;
}
