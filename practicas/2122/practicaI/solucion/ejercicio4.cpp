#include <iostream>
#include <string>

int main(){
    std::cout << "Escribe una frase: \n";
    std::string cad; std::getline(std::cin, cad);

    int contador{0};
    // comprobamos si la frase es "la"
    if(cad == "la"){
        contador++;
    }


    // comprobamos si empieza por "la"
    if(cad.size() > 2 && cad.substr(0,3) == "la ") {
        contador++;
    }


    // comprobamos si acaba por "la"
    if(cad.size() > 2 && cad.substr(cad.size() - 3, 3) == " la") {
        contador++;
    }

    // buscamos todos los "la" intermedios
    if(cad.size() >= 4){
        for(int i{0}; i =< (cad.size() - 4); i++){
            if(cad.substr(i,4) == " la ") {
                contador++;
            }
        }
    }

    std::cout << "Hay " << contador << " articulos 'la' \n";

    return 0;
}
