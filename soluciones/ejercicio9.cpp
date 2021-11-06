#include <iostream>

int main() {
  std::cout << "Introduce un numero entero mayor que 0: ";  
  int num; std::cin >> num;

  int divisor = num/2;
  while(divisor > 1){
    if(num % divisor == 0){
      std::cout << "No es primo\n";
      return 0;
    }
    divisor--;
  }
  std::cout << "Es primo\n";
  return 0;
} 