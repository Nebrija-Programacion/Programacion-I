#include <iostream>

using namespace std;

class NumeroComplejo{
public:
    NumeroComplejo(float _r, float _i){
        real = _r;
        imaginaria = _i;
    }
     void add(float r, float i){
        real = real + r;
        imaginaria = imaginaria + i;
    }
     void multiplyBy(float r, float i){
        real = real * r;
        imaginaria = imaginaria * i;
    }
     void getNumber(float &r, float &i){
        r = real;
        i = imaginaria;
    }

private:
    float real, imaginaria;
};

int main(){

   NumeroComplejo miComplejo{3,4};

   float real, imaginaria;

   miComplejo.add(2,3);

   miComplejo.getNumber(real, imaginaria);
   cout << "El numero complejo es " << real << " + " << imaginaria << " * i" << endl;

   miComplejo.multiplyBy(2,5);
   miComplejo.getNumber(real, imaginaria);
   cout << "El numero complejo es " << real << " + " << imaginaria << " * i" << endl;

   return 0;
}
