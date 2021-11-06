#include <iostream>
#include <array>

int main() {
  std::array<int, 10> arr{2,4,3,7,3,2,4,5,7,8};
  float media{0};
  for(int elem: arr){
    media+= elem;
  }
  media /= arr.size();
  std::cout << media << "\n";
  return 0;
} 
