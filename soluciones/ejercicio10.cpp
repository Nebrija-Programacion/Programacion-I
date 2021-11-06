#include <iostream>

int main() {
  std::cout << "Introduce un numero entero mayor que 0: ";  
  int num; std::cin >> num;
  int result{1};
  for(int i{0}; i<5; i++){
    result*=num;
  }
  std::cout << result << "\n";
  
  return 0;
} 