#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> createData(int size, int min, int max){
    vector<int> data;
    for(int i=0;i<size;i++){
        data.push_back(rand()%(max-min+1)+min);
    }
    return data;
}

int moda(vector<int> const & data, int min, int max){
    vector<int> count;
    count.resize(max+1);
    for(int i{0}; i<count.size(); i++) count.at(i)=0;

    // contar cuantas veces aparece cada elemento
    for(auto elem: data){
        count.at(elem)++;
    }

    // buscar el maximo
    int pos=min;
    int max_count=count.at(min);
    for(int i{min}; i<=max; i++){
        if(count.at(i) > max_count){
            max_count = count.at(i);
            pos = i;
        }
    }
    return pos;
}

vector<int> removeduplicatesandorder(vector<int> const & data){
    set<int> aux;
    for(auto elem: data) aux.insert(elem);

    vector<int> result;
    for(auto elem: aux) result.push_back(elem);

    return result;
}

float mediana(vector<int> const & data){
    if(data.size()%2 == 0){
        return (data.at(data.size()/2-1) + data.at(data.size()/2)) / 2.0;
    }else{
        return data.at(data.size()/2);
    }
}


int main()
{
    // parte 1
    srand(time(NULL));
    auto data = createData(10, 5, 15);
    cout << "Los datos generados son: ";
    for(auto elem: data) cout << elem << " - ";
    cout << "\n";
    cout << "La moda es: " << moda(data, 5, 15);
    cout << "\n\n";

    // parte 2
    auto ordenados_sin_duplicados = removeduplicatesandorder(data);
    cout << "Los datos ordenados sin duplicados son: ";
    for(auto elem: ordenados_sin_duplicados) cout << elem << " - ";
    cout << "\n\n";

    // parte 3
    cout << "La mediana es " << mediana(ordenados_sin_duplicados);
    cout << "\n\n";

    return 0;
}
