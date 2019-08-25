#include <iostream>
#include <vector>
#include <functional>
using namespace std;

void forEach(vector<int> v, std::function<void(int elem)> fp){
    for(auto elem: v){
        fp(elem);
    }

}

int main()
{
    vector<int> v{{1,2,3,4,5,6}};
    vector<int> odds;

    forEach(v, [&odds](int elem){
        if(elem % 2 == 0) odds.push_back(elem);
    });

    forEach(odds, [](int elem){
        cout << elem << endl;
    });

    return 0;
}
