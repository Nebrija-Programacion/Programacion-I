#include <iostream>
#include <vector>
#include <functional>

using namespace std;

vector<int> funct(vector<int> const & v, function<bool(int x, int y)> const & h){
    vector<int> j;
    for(int i{0}; i<v.size(); i++){
        if(h(i,v.at(i))) j.push_back(v.at(i));
    }
    return j;
}

int main()
{
    auto lambda = [](int index, int value) {
        return (index > 3 && value % 2 == 0);
    };

    vector<int> ejemplo{4,3,5,6,7,8,5};
    auto resultado = funct(ejemplo, lambda);

    for(auto elem: resultado) cout << elem << ", ";
    cout << "\n";

    return 0;
}
