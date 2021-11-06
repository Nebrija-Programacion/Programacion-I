#include <iostream>
#include <vector>

int main() {
  std::cout << "Introduce 3 numeros: ";
  int a,b,c; std::cin >> a >> b >> c;
  std::vector<int> multiplos;
  for(int num{a}; num <=b ; num++){
    if(num % c == 0) multiplos.push_back(num);
  }
} 
