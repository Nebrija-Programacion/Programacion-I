#include <iostream>

int main() {
  int num{-1};
  while(num > 10 || num < 0){
    std::cout << "Introduce un numero entero mayor que 0 y menor que 10: ";
    std::cin >> num;
  }

  std::cout << num << "\n";
  
  return 0;
} 