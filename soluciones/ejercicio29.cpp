#include <iostream>
#include <vector>

int main() {
  std::vector<int> fib;
  fib.push_back(1);
  fib.push_back(1);

  std::cout << "¿Cuantos números de la serie de fib quieres que calcule? ";
  int cantidad; std::cin >> cantidad;

  std::cout << "1 - 1 - ";
  while(fib.size() <= cantidad){
    int num = fib.at(fib.size()-1) + fib.at(fib.size()-2);
    fib.push_back(num);
    std::cout << num << " - "; 
  } 
} 
