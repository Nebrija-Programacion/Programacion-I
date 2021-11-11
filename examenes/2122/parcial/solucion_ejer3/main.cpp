#include <iostream>
#include <set>
using namespace std;

int main()
{
    int numero{0};
    std::cout << "Introduce un numero: ";
    std::cin >> numero;

    // calculo todos los primos menores que numero / 2 (los posibles factores)

    std::set<int> primos;

    int numero_primo = 2;
    while(numero_primo <= numero/2){
        bool primo{true};
        for(int div{2}; div <= numero_primo/2; div++){
            if(numero_primo % div == 0){
                primo=false;
                break;
            }
        }
        if(primo) primos.insert(numero_primo);
        numero_primo++;
    }
    std::cout << "Los factores son : ";

    for(auto elem: primos){
        if(numero % elem == 0) std::cout << elem << " - ";
    }

    return 0;
}
