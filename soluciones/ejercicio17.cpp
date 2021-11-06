#include <iostream>

int main() {
  std::cout << "Introduce una frase:\n";
  std::string cad; std::getline(std::cin, cad);
  int contador{0};
  if(cad.at(0) == 'a') contador++;
  
  for(int i{0}; i < cad.size()-1; i++){
    if(cad.at(i) == ' ' && cad.at(i+1) == 'a')
      contador++;
  }

  std::cout << contador << "\n";
  
  return 0;
} 