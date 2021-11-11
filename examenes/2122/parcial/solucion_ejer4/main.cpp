#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    srand(time(NULL));
    bool jugador_1_in{true};
    bool jugador_2_in{true};
    int puntos_jugador_1{0};
    int puntos_jugador_2{0};

    while(jugador_1_in || jugador_2_in){
        if(jugador_1_in){
            int numero = rand()%10 +1;
            puntos_jugador_1+=numero;
            std::cout << "Jugador 1, has sacado un " << numero << ", llevas " << puntos_jugador_1 << ". ¿Le plantas? (0: sí, 1: no): ";
            std::cin >> numero;
            if(numero == 0) jugador_1_in = false;
        }
        if(jugador_2_in){
            int numero = rand()%10 +1;
            puntos_jugador_2+=numero;
            std::cout << "Jugador 2, has sacado un " << numero << ", llevas " << puntos_jugador_2 << ". ¿Le plantas? (0: sí, 1: no): ";
            std::cin >> numero;
            if(numero == 0) jugador_2_in = false;
        }
    }

    if(abs(puntos_jugador_1 - 15) < abs(puntos_jugador_2 - 15)) std::cout << "Gana jugador 1 con " << puntos_jugador_1 << "\n";
    else std::cout << "Gana jugador 2 con " << puntos_jugador_2 << "\n";


    return 0;
}
