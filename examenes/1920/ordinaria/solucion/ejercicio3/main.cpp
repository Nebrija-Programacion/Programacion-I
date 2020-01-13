#include <iostream>
#include <math.h>

struct Complex{
    float r;
    float i;
};


Complex suma(Complex const & n1, Complex const & n2){
    Complex result;
    result.r = n1.r + n2.r;
    result.i = n1.i + n2.i;
    return result;
}

Complex resta(Complex const & n1, Complex const & n2){
    Complex result;
    result.r = n1.r - n2.r;
    result.i = n1.i - n2.i;
    return result;
}

Complex multiplica(Complex const & n1, Complex const & n2){
    Complex result;
    result.r = n1.r * n2.r - n1.i * n2.i;
    result.i = n1.r * n2.i + n1.i * n2.r;
    return result;
}

float modulo(Complex const & n){

    return std::sqrt(n.r*n.r + n.i*n.i);
}

void print(Complex const &n){
    std::cout << n.r << " + i*" << n.i << "\n";
}

int main()
{
    Complex n1{1,2};
    Complex n2{3,2};

    print(suma(n1,n2));
    print(resta(n1,n2));
    print(multiplica(n1,n2));

    std::cout << modulo(n1) << "\n";

    return 0;
}
