#include <iostream>
#include <vector>
#include <array>
#include <time.h>

int main() {
  std::srand(time(NULL));
  std::array<int,100> losaleatorios;
  std::vector<int> mult3;
  for(int i{0}; i<losaleatorios.size(); i++){
    losaleatorios.at(i) = rand()%21;
  }

  for(int elem: losaleatorios){
    if(elem % 3 == 0) mult3.push_back(elem);
  }

  for(int elem:mult3){
    std::cout << elem << " - ";
  }

  std::cout <<"\n";
} 
