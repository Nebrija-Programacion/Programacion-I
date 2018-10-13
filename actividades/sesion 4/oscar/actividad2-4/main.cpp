#include <iostream>

using namespace std;


class NumeroComplejo{
public:
    NumeroComplejo(float r,float i){
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


  NumeroComplejo miComplejo{3,4};
  float real;
  float imagine;


  miComplejo.addTo(2,3);


  miComplejo.getNumber(real, imagine);
  cout << "El numero complejo es " << real << " + " << imagine << "i" << endl;



  miComplejo.multipliesBy(2,5);

  miComplejo.getNumber(real, imagine);
  cout << "El numero complejo es " << real << " + " << imagine << "i" << endl;

  return 0;
}
