#include<iostream>
#include <ctime>
#include <set>
#include <vector>


using namespace std;

int main() {

    // inicializo semillan del rand
    srand(time(NULL));

    // PARTE 1

    // numero de series
    int s = rand() % 4 + 2; // entre 2 y 5
    vector<vector<int>> series(s);

    // relleno las series
    for(int i{0}; i<series.size(); i++){
        // numero de elementos de la serie
        int n = rand() % 5 + 2; // entre 2 y 6
        vector<int> ser(n);
        for(int j{0}; j<ser.size(); j++){
            ser.at(j) = rand() % 11; // entre 0 y 11
        }
        series.at(i) = ser;
    }

    // Imprimo los datos

    cout << "Series: { ";
    for(vector<int> serie: series){
        std::cout << "{ ";
        for(int elem: serie){
            std::cout << elem << " " ;
        }
        std::cout << "} ";
    }
    std::cout << " }\n";

    // PARTE 2

    // maximo de cada serie - lo guardo en un vector

    vector<int> maximos;
    for(vector<int> serie: series){
        int max{0};
        for(int elem: serie){
            if(elem > max) max = elem;
        }
        maximos.push_back(max);
    }

    // muestro por pantalla los maximos

    std::cout << "Maximos: { ";
    for(int elem: maximos){
        cout << elem << " ";
    }
    std::cout << "}\n";

    // PARTE 3

    // meto todos los elementos en un set y los muestro

    set<int> conjunto;
    for(vector<int> serie: series){
        for(int elem: serie){
            conjunto.insert(elem);
        }
    }

    // los imprimo
    std::cout << "Ordenados sin repetir: { ";
    for(int elem: conjunto){
        cout << elem << " ";
    }
    std::cout << "}\n";

    // calculo la media
    int suma{0};
    for(int elem: conjunto){
        suma+= elem;
    }

    std::cout << "Media: " << float(suma)/conjunto.size();
    std::cout << "\n\n\n\tGood bye my friend \n\n";

}
