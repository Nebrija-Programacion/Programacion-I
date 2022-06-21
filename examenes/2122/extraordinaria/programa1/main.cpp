#include <iostream>
#include <vector>

using namespace std;

struct Data{
    float mean;
    int max;
    int min;
};

struct Data getData(int n){
    Data data;
    vector<int> serie(n);
    if(n >= 1) serie.at(0)=1;
    if(n >= 2) serie.at(1)=2;
    for(int i{2}; i<n; i++){
        serie.at(i) = serie.at(i-1) - 2 * serie.at(i-2);
    }

    // mean
    float mean{0};
    int max{1};
    int min{1};
    for(auto elem: serie){
        mean += elem;
        if(max < elem) max = elem;
        if(min > elem) min = elem;
    }
    data.mean = mean/serie.size();
    data.max = max;
    data.min = min;
    return data;
}

int main()
{
    cout << "Cuantos elementos tiene la serie?  ";
    int n; cin >> n;
    auto data = getData(n);
    std::cout << "Mean: \t" << data.mean << "\n";
    std::cout << "Max: \t" << data.max << "\n";
    std::cout << "Min: \t" << data.min << "\n";
    return 0;
}
