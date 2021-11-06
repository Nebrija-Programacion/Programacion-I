#include <iostream>
#include <array>
#include <time.h>

int main() {
  std::srand(time(NULL));

  std::array<int, 100> arr;
  std::array<int,11> posiciones;
  posiciones.fill(0);

  for(int i{0}; i<arr.size(); i++){
    arr.at(i) = std::rand() % 10 + 1;
  }

  for(int elem: arr){
    posiciones.at(elem)+=1;
  }

  int max{0};
  int pos{0};
  for(int i{0}; i<posiciones.size(); i++){
    if(posiciones.at(i) > max){
      max = posiciones.at(i);
      pos = i;
    }
  }

  std::cout << "El numero que mas veces aparece es el " << pos << " y aparece " << max << " veces\n";

  return 0;
} 
