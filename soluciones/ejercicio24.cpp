#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec{34,5,4,5,4,4,33,44,5,566,77,5,4,3,4};
  std::vector<int> pares;
  for(int elem: vec){
    if(elem % 2 == 0) pares.push_back(elem);
  }
} 
