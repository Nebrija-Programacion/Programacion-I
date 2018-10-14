#include <iostream>
using namespace std;

class ComplexNumber

{
public:
      ComplexNumber(float r,float i)
      {
        real = r;
        imaginary = i;
      }

      void add(float r, float i)
      {
        real = real + r;
        imaginary = imaginary + i;
      }

      void multiply(float r, float i)
      {
          real = real * r;
          imaginary = imaginary * i;
      }

      void getNumber(float &r, float &i)
      {
        r = real;
        i = imaginary;
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
  myComplex.getNumber(real, imaginary);
  cout << "The complex number is:" << real << " + " << imaginary << " * i" << endl;

  myComplex.multiply(2,5);
  myComplex.getNumber(real, imaginary);
  cout << "The complex number is:" << real << " + " << imaginary << " * i" << endl;

  return 0;
}
