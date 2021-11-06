#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> vec{"perro", "gato", "guardar", "andres", "luis", "guardar", "botella"};
  std::vector<std::string> guardados;
  for(int i{0}; i<vec.size()-1;i++){
    if(vec.at(i) == "guardar") guardados.push_back(vec.at(i+1));
  }
} 
