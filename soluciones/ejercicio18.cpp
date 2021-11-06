#include <iostream>

int main() {
  int contador{0};
  std::cout << "Introduce una frase:\n";
  std::string palabra;
  while(std::cin >> palabra){
    if(palabra.find("a") != -1) contador++;
    if( std::cin.get() == '\n') break;
  }

  std::cout << contador << "\n";
  
  return 0;
} 