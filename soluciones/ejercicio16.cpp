#include <iostream>

int main() {
  std::cout << "Introduce una frase:\n";
  std::string cad; std::getline(std::cin, cad);
  int contador{0};
  for(char c: cad){
    if(c == 'a') contador++;
  }

  std::cout << contador << "\n";
  
  return 0;
} 