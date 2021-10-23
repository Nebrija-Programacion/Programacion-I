#include <iostream>

int main(){
    int a_a{1};
    int a_aa{1};
    int a{1};
    int suma{2};

    for(int i{2}; i<20; i++){
      int aux = a;
      a = a_aa + a_a;
      a_aa = a_a;
      a_a = a;
      suma+=a;
    }

    std::cout << "La suma es " << suma << "\n";
    return 0;
}