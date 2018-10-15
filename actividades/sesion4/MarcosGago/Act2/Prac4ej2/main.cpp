#include <iostream>


using namespace std;

class ComplexNumber {
public:
    ComplexNumber(float _real, float _imaginary){
        real=_real;
        imaginary=_imaginary;
    }
    ComplexNumber(){

    }
    void getNumber(float & r,float & i){
        r = real;
        i = imaginary;
    }
    void add(float r,float i){
        r = real+r;
        i = imaginary+i;
    }
    void multiplyBy(float r, float i){
        real = real*r;
        imaginary = imaginary*i;
    }

private:
    float real;
    float imaginary;
};

int main()
{
    ComplexNumber myComplex{3,4};

     float real;
     float imaginary;

     myComplex.add(2,3);
     myComplex.getNumber(real, imaginary);//No sale la suma y no entiendo por que si esta igual que la multiplicacion
     cout << "El numero complejo es " << real << " + " << imaginary << " * i" << endl;

     myComplex.multiplyBy(2,5);
     myComplex.getNumber(real, imaginary);
     cout << "El numero complejo es " << real << " + " << imaginary << " * i" << endl;
     return 0;
}
