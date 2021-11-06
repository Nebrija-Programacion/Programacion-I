#include <iostream>

int main() {
  std::cout << "Introduce una frase:\n";
  std::string cad; std::getline(std::cin, cad);
  int pos1 = cad.find("password");
  if(pos1 != -1){
    int pos = pos1 + std::string{"password"}.size();
    int pos2 = cad.find(" ", pos + 1);
    std::string pwd = cad.substr(pos + 1, pos2 - pos);
    std::cout << pwd << "\n";
  }
  
  return 0;
} 