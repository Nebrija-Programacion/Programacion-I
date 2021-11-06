#include <iostream>
#include <array>

int main() {
  std::array<int, 10> arr{2,4,3,7,3,2,4,5,7,8};
  for(int i{0}; i<arr.size(); i++){
    if(arr.at(i) == 7){
      std::cout << i << "\n";
      break;
    }

  }
  return 0;
} 
