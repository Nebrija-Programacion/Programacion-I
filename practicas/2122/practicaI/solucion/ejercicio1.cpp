#include <iostream>
#include <string>

int main(){
    std::sring cad;
    std::cout << "Introduce una cadena de texto: ";
    std::getline(std::cin, cad);
    int cont{0};
    for(int i; i < cad.size(); i++){
        if(cad.at(i) == 'a') cont++;
    }

    std::cout << "La letra a aparece " << cont << " veces\n";

    return 0;
}