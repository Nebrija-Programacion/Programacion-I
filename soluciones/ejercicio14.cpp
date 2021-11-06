#include <iostream>

int main() {
  std::string cad{"En un lugar de la Mancha, de cuyo nombre no quiero acordarme"};
  int pos = cad.find("Mancha");
  std::string cad1 = cad.substr(0, pos);
  std::string cad2 = cad.substr(pos + std::string{"Mancha"}.size());

  std::cout << cad1 << "\n";
  std::cout << cad2 << "\n";
  
  return 0;
} 