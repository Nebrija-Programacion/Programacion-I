#include <iostream>

using namespace std;


class NComplejo{
public:
    NComplejo(float r,float i){
        real_num = r;
        imaginary_num = i;
    }

    void addTo(float r, float i){
        real_num += r;
        imaginary_num += i;
    }

    void multipliesBy(float r, float i){
        real_num = real_num * r;
        imaginary_num = imaginary_num * i;
    }
    void getNumber(float &r, float &i){
        r = real_num;
        i = imaginary_num;
    }



private:

    float real_num, imaginary_num;
};

int main(){

    NComplejo miComplejo{3,9};
    float real;
    float imaginary;


    miComplejo.addTo(8,7);

    miComplejo.getNumber(real, imaginary);
        cout << "Tu numero complejo es " << real << " + " << imaginary << "i" << endl;

     miComplejo.multipliesBy(2,5);
     miComplejo.getNumber(real, imaginary);
        cout << "Tu numero complejo es " << real << " + " << imaginary << "i" << endl;

  return 0;
}
