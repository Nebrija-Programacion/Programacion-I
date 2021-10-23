#include <iostream>

int main(){
    int contador{0};
    int producto{1};
    int numero{2};
    while(contador < 5){
      int divisor = numero / 2;
      bool primo = true;
      while(divisor > 1){
        if(numero % divisor == 0){
          primo = false;
        }
        divisor--;
      }
      if(primo){
        contador++;
        producto *= numero;
      } 
      numero++;
    }
    std::cout << "El producto es " << producto << "\n";
    return 0;
}