#include <iostream>

int main() {
  std::string cad{"Tres tristes tigres comen trigo en un trigal"};
  int pos = cad.find("tri", pos+1);;
  while(pos != -1){
    std::cout << "posicion: " << pos << "\n";
    pos = cad.find("tri", pos+1);
  }
  
  return 0;
} 