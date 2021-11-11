#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    std::cout << "Introduce 10 palabras: \n";
    std::set<std::string> palabras;
    while(palabras.size() < 10){
        string aux; std::cin >> aux;
        palabras.insert(aux);
    }

    std::vector<std::string> palabras_orden_inverso(palabras.size());
    int i=palabras_orden_inverso.size() - 1;
    for(string p: palabras){
        palabras_orden_inverso.at(i) = p;
        i--;
    }

    for(string p: palabras_orden_inverso){
        std::cout << p << " - ";
    }

    std::cout << "\n";
}
