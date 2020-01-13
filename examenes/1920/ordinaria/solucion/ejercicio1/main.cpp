#include <iostream>
#include <vector>
#include <functional>

std::vector<int> map(std::vector<int> const & v, std::function<int (int)> const & op){
    std::vector<int> result;
    for(auto elem: v){
        result.push_back(op(elem));
    }

    return result;
}


std::vector<int> filter(std::vector<int> const & v, std::function<int (int, int)> const & op){
    std::vector<int> result;
    for(int i{0}; i<v.size(); i++){
        if(op(v.at(i), i)) result.push_back(v.at(i));
    }

    return result;
}

void print(std::vector<int> v){
    for(auto elem:v) std::cout << elem << "-";
    std::cout << "\n";
}

int main()
{
    std::vector<int> v1{1,2,3,4,5,6,7,8,9,10};
    auto v2 = map(v1, [](int elem)->int {
        return 2*elem;
    });

    print(v2);

    auto v3 = filter(v1, [](int elem, int index)->int{
        return ((elem % 3 == 0) && (index % 2 == 0));
    });

    print(v3);


    return 0;
}
